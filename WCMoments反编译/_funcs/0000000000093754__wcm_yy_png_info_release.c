// _wcm_yy_png_info_release @0x93754

void _wcm_yy_png_info_release(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x10) != 0) {
      _free(*(void **)((long)param_1 + 0x10));
    }
    if (*(long *)((long)param_1 + 0x20) != 0) {
      _free(*(void **)((long)param_1 + 0x20));
    }
    if (*(long *)((long)param_1 + 0x30) != 0) {
      _free(*(void **)((long)param_1 + 0x30));
    }
    _free(param_1);
  }
  return;
}

