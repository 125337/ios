// FUN_001eeedc @ 001eeedc

void FUN_001eeedc(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_4);
  bVar3 = true;
  if (local_28 != 0) {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = lVar4 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  if (!bVar3) {
    FUN_001f0348(local_28);
    uVar1 = local_30;
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    dVar2 = local_38;
    if (local_38 <= 0.0) {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    else {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar2);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      uVar1 = local_40;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_CGColor_026ca470);
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    lVar4 = local_28;
    uVar1 = DAT_026dfab8;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar4,uVar1,puVar5,1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

