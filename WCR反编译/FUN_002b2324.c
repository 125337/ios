// FUN_002b2324 @ 002b2324

void FUN_002b2324(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined1 auStack_138 [48];
  undefined1 auStack_108 [56];
  ulong local_d0;
  byte local_c5;
  undefined4 local_c4;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [64];
  ulong local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  uVar1 = local_30;
  local_48 = param_1;
  local_40 = param_4;
  local_38 = param_3;
  FUN_002b2754(local_30,param_3);
  local_50 = uVar1;
  FUN_002ae800();
  uVar3 = local_30;
  if ((uVar1 & 1) == 0) {
    local_c5 = false;
    if (*(long *)(param_1 + 0x20) != 0x7fffffffffffffff) {
      local_c5 = local_50 == *(ulong *)(param_1 + 0x20);
    }
    pcVar2 = &cf_setSelected_;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    uVar1 = local_30;
    if ((uVar3 & 1) != 0) {
      pcVar2 = &cf_setSelected_;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar2,local_c5 & 1);
    }
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf__customIconView);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar3;
    if (uVar3 != 0) {
      pcVar2 = &cf_setSelected_;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
      uVar1 = local_d0;
      if ((uVar3 & 1) != 0) {
        pcVar2 = &cf_setSelected_;
        _NSSelectorFromString();
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar2,local_c5 & 1);
      }
    }
    _objc_storeStrong(&local_d0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHidden__026ca970,0);
    _memcpy(auStack_108,PTR__CGAffineTransformIdentity_025782d8,0x30);
    uVar3 = local_30;
    _memcpy(auStack_138,auStack_108,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTransform__026caad0,auStack_138);
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_30,PTR_s_setAlpha__026ca860);
    local_c4 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHidden__026ca970,1);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_30,PTR_s_setAlpha__026ca860);
    _memcpy(auStack_90,PTR__CGAffineTransformIdentity_025782d8,0x30);
    uVar3 = local_30;
    _memcpy(auStack_c0,auStack_90,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTransform__026caad0,auStack_c0);
    local_c4 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

