// FUN_014f8ea0 @ 014f8ea0

ulong FUN_014f8ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_6c;
  uint local_54;
  ulong local_30;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_redpacket);
  local_54 = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_transfer);
    local_54 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_pat);
      local_54 = (uint)uVar1;
    }
  }
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_redpacket);
  local_6c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_transfer);
    local_6c = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_pat);
      local_6c = (byte)uVar1;
    }
  }
  if (((byte)local_54 & 1) == (local_6c & 1)) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectForKeyedSubscript__0269d098,local_28);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectForKeyedSubscript__0269d098,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (uVar2 < uVar1) {
      local_18 = 0xffffffffffffffff;
    }
    else if (uVar1 < uVar2) {
      local_18 = 1;
    }
    else {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_compare__0269cd10,local_30);
      local_18 = uVar1;
    }
  }
  else {
    local_18 = 1;
    if ((local_54 & 1) != 0) {
      local_18 = 0xffffffffffffffff;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

