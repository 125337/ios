// FUN_002dc91c @ 002dc91c

byte FUN_002dc91c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  uint local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined4 local_68;
  byte local_61;
  undefined *local_60;
  byte local_51;
  ulong local_50;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_51 = 0;
  local_61 = 0;
  local_98 = 1;
  if (local_30 != 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_98 = 1;
    local_50 = uVar1;
    if (uVar1 != 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_98 = (uint)puVar2 ^ 1;
    }
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_98 & 1) == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar1;
    FUN_002dcf0c(uVar1,0);
    if ((uVar1 & 1) == 0) {
      local_21 = 0;
    }
    else {
      uStack_88 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 8);
      local_90 = *(undefined8 *)PTR__CGRectNull_025782e8;
      uStack_78 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x18);
      dVar4 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
      uVar1 = local_30;
      local_80 = dVar4;
      FUN_002dd2f4(local_30,local_70,&local_90);
      if ((uVar1 & 1) == 0) {
        local_21 = 0;
      }
      else {
        uVar1 = local_30;
        _objc_getAssociatedObject(local_30,&DAT_028c983c);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_30;
        if ((uVar3 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar1,&DAT_028c983c,puVar2,1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768);
          if (((uVar1 & 1) != 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_alpha_026ca4d8),
             dVar4 <= DAT_02323db0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isUserInteractionEnabled_026ca770);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHidden__026ca970,1);
          (*(code *)PTR__objc_msgSend_02578628)(0,local_30,PTR_s_setAlpha__026ca860);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_setUserInteractionEnabled__026caad8,0);
          _objc_setAssociatedObject(local_30,&DAT_028c983c,0,1);
          local_21 = 1;
        }
        else {
          local_21 = 1;
        }
      }
    }
    local_68 = 1;
    _objc_storeStrong(&local_70,0);
  }
  else {
    local_21 = 0;
    local_68 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

