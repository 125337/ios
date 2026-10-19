// ___destroy_helper_block_e8_32s40s48s56s64r72w @0x7388c

void ___destroy_helper_block_e8_32s40s48s56s64r72w(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  __Block_object_dispose(*(void **)(param_1 + 0x40),8);
  _objc_storeStrong(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  return;
}

