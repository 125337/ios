// FUN_001f0f2c @ 001f0f2c

void FUN_001f0f2c(double param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_60;
  ulong local_58 [3];
  undefined4 local_3c;
  double local_38;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar3 = local_28;
  local_38 = param_1;
  local_29 = param_3;
  if (local_28 == 0) {
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) == 0) || (uVar3 = local_28, FUN_001f1564(), (uVar3 & 1) == 0)) {
      if ((local_29 & 1) == 0) {
        uVar3 = local_28;
        _objc_getAssociatedObject(local_28,DAT_026dfaf0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_58[0] = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar3 & 1) == 0) ||
           (uVar3 = local_58[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_boolValue_026ca540),
           (uVar3 & 1) == 0)) {
          local_3c = 1;
        }
        else {
          uVar3 = local_28;
          _objc_getAssociatedObject(local_28,DAT_026dfae8);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_60 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_doubleValue_026ca608);
            (*(code *)PTR__objc_msgSend_02578628)(param_1,local_28,PTR_s_setAlpha__026ca860);
          }
          _objc_setAssociatedObject(local_28,DAT_026dfae8,0,1);
          _objc_setAssociatedObject(local_28,DAT_026dfaf0,0,1);
          _objc_storeStrong(&local_60,0);
          local_3c = 0;
        }
        _objc_storeStrong(local_58,0);
      }
      else {
        uVar4 = local_28;
        _objc_getAssociatedObject(local_28,DAT_026dfae8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        uVar3 = local_28;
        uVar1 = DAT_026dfae8;
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        if (uVar4 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar3,uVar1,puVar2,1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
        if (DAT_02323cd0 < ABS(param_1 - local_38)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,local_28,PTR_s_setAlpha__026ca860);
        }
        uVar3 = local_28;
        uVar1 = DAT_026dfaf0;
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,uVar1,puVar2,1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_3c = 1;
      }
    }
    else {
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

