// FUN_0069224c @ 0069224c

void FUN_0069224c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long local_48;
  ulong local_40 [3];
  cfstringStruct *local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = &cf_getChatUsername;
  _NSSelectorFromString();
  uVar2 = local_20;
  local_28 = pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = uVar2;
  local_48 = 0;
  do {
    if (0xb < local_48 || local_40[0] == 0) {
      local_18 = 0;
LAB_006923cc:
      _objc_storeStrong(local_40);
      _objc_storeStrong(&local_20,0);
      _objc_autoreleaseReturnValue(local_18);
      return;
    }
    uVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_respondsToSelector__026ca818,local_28);
    local_18 = local_40[0];
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      goto LAB_006923cc;
    }
    uVar3 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40[0];
    local_40[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_48 = local_48 + 1;
  } while( true );
}

