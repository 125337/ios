// FUN_003dc9b4 @ 003dc9b4

void FUN_003dc9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_4;
  if (local_18 == 0) {
    local_34 = 1;
  }
  else {
    FUN_003dc694(local_18,local_20,local_28,param_4);
    uVar3 = local_18;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_00367110(uVar3,&cf_bAutoUpdate);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar3 = local_18;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_00367110(uVar3,&cf_bAlwayShowDefaultImage);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_00367110(local_18,&cf_defaultImage,local_20);
    uVar2 = local_18;
    FUN_003dce94();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_18;
    local_40 = uVar2;
    if (uVar2 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar3 & 1) != 0) {
        _objc_storeStrong(&local_40,local_18);
      }
    }
    uVar3 = local_40;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTintColor__026caab0,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setContentMode__026ca8e0,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAccessibilityLabel__0269e968,&cf_4YP);
      if (local_40 != local_18) {
        uVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundColor_026ca518);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
    }
    puVar1 = PTR_s_setImage__026ca978;
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setImage__026ca978);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar1,local_20);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

