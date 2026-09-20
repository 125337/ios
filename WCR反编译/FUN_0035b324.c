// FUN_0035b324 @ 0035b324

void FUN_0035b324(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_38;
  undefined4 local_30;
  undefined1 local_29;
  ulong local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar4 = local_20;
  puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_29 = 0;
  bVar2 = true;
  uVar1 = (uVar4 & 1) != 0;
  if ((bool)uVar1) {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar4 == 0;
    local_29 = uVar1;
    local_28 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar1 = local_29;
  }
  local_29 = uVar1;
  if (bVar2) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithImage__0269e558);
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentMode_026ca598);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setContentMode__026ca8e0,uVar4);
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_clipsToBounds_026ca570);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setClipsToBounds__026ca8c8,uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAlpha__026ca860);
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tintColor_026a2e28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTintColor__026caab0);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_backgroundColor_026ca518);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar3 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

