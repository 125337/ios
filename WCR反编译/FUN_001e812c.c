// FUN_001e812c @ 001e812c

void FUN_001e812c(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_48 [3];
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    pcVar2 = &cf_TextMessageCellView;
    _NSClassFromString();
    uVar1 = local_20;
    local_30 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = uVar1;
      while (local_48[0] != 0) {
        uVar3 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isKindOfClass__0269cd68,local_30);
        uVar1 = local_48[0];
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar1;
          goto LAB_001e82a4;
        }
        uVar3 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_48[0];
        local_48[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      local_18 = 0;
LAB_001e82a4:
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

