#include <nautilus/nautilus.h>
#include <nautilus/libccompat.h>
#include <test/test.h>




extern void npb_entry();

static int
callffunc(int argc, char** argv)
{
    for(int i = 0;i < 10; i++){
        npb_entry();
    }
    return 0;
}

static struct nk_test_impl npb_test_impl = {
    .name = "npb_test",
    .handler = callffunc,
    .default_args = "",
};

nk_register_test(npb_test_impl);
