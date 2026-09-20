// FUN_003e928c @ 003e928c

void FUN_003e928c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_28;
  _objc_getAssociatedObject(local_28,DAT_026e02b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  uVar5 = local_28;
  uVar1 = DAT_026e02b8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (uVar2 == 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar5,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar5 = local_28;
    uVar1 = DAT_026e02c0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,uVar4 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar5,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar5 = local_28;
    uVar1 = DAT_026e02c8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithUnsignedInteger__0269e4d0,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar5,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar5 = local_28;
    uVar1 = DAT_026e02d0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar5,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_28;
    uVar1 = DAT_026e02d8;
    if (uVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithCGColor__0269e058,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,uVar1,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    uVar5 = local_28;
    uVar1 = DAT_026e02e0;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar5,uVar1,uVar4,3);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

