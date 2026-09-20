// FUN_00318bf0 @ 00318bf0

void FUN_00318bf0(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_28;
  undefined4 local_1c;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_2);
  if (local_18 == (undefined *)0x0) {
    local_1c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_18;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(puVar4,&DAT_028c9ba0,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundColor_026ca518);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_28;
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 != puVar4) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundColor__026ca888,local_28);
    }
    puVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = false;
    if (puVar2 != (undefined *)0x0) {
      puVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _CGColorGetAlpha(puVar3);
      bVar1 = DAT_02323d38 < param_1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_28;
    if (bVar1) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
      puVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

