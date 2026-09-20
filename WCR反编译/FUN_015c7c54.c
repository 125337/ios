// FUN_015c7c54 @ 015c7c54

ulong FUN_015c7c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong local_80;
  ulong local_78;
  ulong local_40;
  ulong local_30;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf__e_N);
    if ((uVar1 & 1) != 0) {
      local_18 = 1;
      if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
        local_18 = 0xffffffffffffffff;
      }
      goto LAB_015c7e7c;
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf__e_N);
    if ((uVar1 & 1) != 0) {
      local_18 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
        local_18 = 1;
      }
      goto LAB_015c7e7c;
    }
    local_40 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_localizedStandardCompare__0269e098,local_30);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_themeSortDateForName__026b0e58,local_28);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_themeSortDateForName__026b0e58,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_compare__0269cd10);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
    if (local_40 == 0xffffffffffffffff) {
      local_80 = 1;
    }
    else {
      local_80 = 0;
      if (local_40 == 1) {
        local_80 = 0xffffffffffffffff;
      }
    }
    local_78 = local_80;
  }
  else {
    local_78 = local_40;
  }
  local_18 = local_78;
LAB_015c7e7c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

