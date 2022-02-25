void __app_main(void)
{
    printf("main not implemented\n");
}
void app_main(void) __attribute__((weak, alias("__app_main")));