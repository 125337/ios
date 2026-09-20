// FUN_002bf6dc @ 002bf6dc

void FUN_002bf6dc(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_70;
  cfstringStruct *local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40 [3];
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c9809);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
    if ((uVar2 & 1) == 0) {
      local_1c = 1;
    }
    else {
      uVar2 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028c980a);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_18;
      local_40[0] = uVar2;
      _objc_getAssociatedObject(local_18,&DAT_028c980b);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_18;
      local_48 = uVar3;
      _objc_getAssociatedObject(local_18,&DAT_028c980c);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_18;
      local_50 = uVar2;
      _objc_getAssociatedObject(local_18,&DAT_028c980d);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundImage__026a0020,local_40[0])
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShadowImage__026a1a90,local_48);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundColor__026ca888,local_50);
      if (local_58 != 0) {
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_boolValue_026ca540);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setTranslucent__026a19b8,uVar2 & 0xffffffff);
      }
      uVar1 = 0xd;
      FUN_002b0a2c();
      if ((uVar1 & 1) != 0) {
        uVar2 = local_18;
        _objc_getAssociatedObject(local_18,&DAT_028c980e);
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar2;
        if (uVar2 != 0) {
          pcVar4 = &cf_setStandardAppearance_;
          _NSSelectorFromString();
          uVar2 = local_18;
          local_68 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar4);
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,local_68,local_60);
          }
        }
        uVar1 = 0xf;
        FUN_002b0a2c();
        if ((uVar1 & 1) != 0) {
          uVar2 = local_18;
          _objc_getAssociatedObject(local_18,&DAT_028c980f);
          _objc_retainAutoreleasedReturnValue();
          local_70 = uVar2;
          if (uVar2 != 0) {
            pcVar4 = &cf_setScrollEdgeAppearance_;
            _NSSelectorFromString();
            uVar2 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_respondsToSelector__026ca818,pcVar4);
            if ((uVar2 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar4,local_70);
            }
          }
          _objc_storeStrong(&local_70,0);
        }
        _objc_storeStrong(&local_60,0);
      }
      _objc_setAssociatedObject(local_18,&DAT_028c9809,0,1);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(local_40,0);
      local_1c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

