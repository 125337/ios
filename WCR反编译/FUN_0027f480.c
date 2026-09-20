// FUN_0027f480 @ 0027f480

ulong FUN_0027f480(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_a0;
  ulong local_78;
  ulong local_70;
  ulong local_58;
  ulong local_48;
  ulong local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_a0 = local_20;
  if (lVar1 == 0) {
    FUN_00280f8c();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a0;
  }
  else {
    FUN_00280ba0(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_a0;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  uVar2 = 0;
  if ((lVar1 == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar2 != 0)) {
    uVar3 = local_30;
    FUN_00272348(uVar2);
    if (uVar3 == 0) {
      local_18 = 0;
    }
    else {
      local_70 = local_20;
      FUN_0027b218(local_20,local_30);
      lVar1 = local_70 - 0x400;
      if (local_70 < 0x400) {
        local_70 = local_20;
        FUN_0027ac10(lVar1,local_20,&cf_fileSize);
      }
      if (local_70 < 0x400) {
        local_18 = 0xffffffffffffffff;
      }
      else {
        local_78 = 0;
        if (local_70 != 0) {
          local_78 = (uVar3 * 100) / local_70;
        }
        if (99 < (long)local_78) {
          local_78 = 99;
        }
        local_18 = local_78;
      }
    }
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

