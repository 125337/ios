// FUN_0021da44 @ 0021da44

void FUN_0021da44(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint local_98;
  ulong local_70;
  ulong local_68;
  double local_60;
  byte local_52;
  byte local_51;
  undefined *local_50;
  undefined1 local_45;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    uVar3 = local_28;
    FUN_0021e0c4();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    if (uVar3 == 0) {
      local_2c = 1;
    }
    else {
      local_51 = 0;
      uVar3 = local_28;
      FUN_0021e3ac();
      bVar2 = true;
      if ((uVar3 & 1) == 0) {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar2 = puVar4 != (undefined *)0x0;
      }
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      local_98 = 0;
      local_45 = bVar2;
      if (!bVar2) {
        local_98 = 0;
        FUN_0021e5ec();
      }
      local_52 = (byte)local_98 & 1;
      if ((local_98 & 1) == 0) {
        uVar3 = local_38;
        _objc_getAssociatedObject(local_38,DAT_026dfb28);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_68 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((uVar3 & 1) == 0) ||
           (uVar3 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_boolValue_026ca540),
           (uVar3 & 1) == 0)) {
          local_2c = 1;
        }
        else {
          uVar3 = local_38;
          _objc_getAssociatedObject(local_38,DAT_026dfb20);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_70 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_doubleValue_026ca608);
            (*(code *)PTR__objc_msgSend_02578628)(param_1,local_38,PTR_s_setAlpha__026ca860);
          }
          _objc_setAssociatedObject(local_38,DAT_026dfb20,0,1);
          _objc_setAssociatedObject(local_38,DAT_026dfb28,0,1);
          _objc_storeStrong(&local_70,0);
          local_2c = 0;
        }
        _objc_storeStrong(&local_68,0);
      }
      else {
        uVar5 = local_38;
        _objc_getAssociatedObject(local_38,DAT_026dfb20);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        uVar3 = local_38;
        uVar1 = DAT_026dfb20;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        if (uVar5 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_alpha_026ca4d8);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar3,uVar1,puVar4,1);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        FUN_0021e688();
        local_60 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_alpha_026ca4d8);
        if (DAT_02323cd0 < ABS(param_1 - local_60)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,local_38,PTR_s_setAlpha__026ca860);
        }
        uVar3 = local_38;
        uVar1 = DAT_026dfb28;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,uVar1,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_2c = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

