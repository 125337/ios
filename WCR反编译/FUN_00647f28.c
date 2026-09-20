// FUN_00647f28 @ 00647f28

void FUN_00647f28(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong local_80;
  ulong local_68;
  ulong local_48;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_0064cd38();
  if ((param_1 & 1) != 0) {
    local_68 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cbc08);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = local_68 == 0;
    local_28 = local_68;
    if (bVar1) {
      local_68 = 0;
    }
    else {
      _objc_getAssociatedObject(local_68,&DAT_028cbc09);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_68;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_68;
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if (local_30 == 0) {
      local_80 = 0;
    }
    else {
      local_80 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
    }
    FUN_0064cd58(local_18,local_80);
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

