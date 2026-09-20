// FUN_0021d044 @ 0021d044

void FUN_0021d044(double param_1,undefined8 param_2)

{
  double dVar1;
  uint uVar2;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long local_50;
  double local_48;
  double local_40;
  undefined4 local_38;
  long local_28;
  long *plVar3;
  
  plVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(plVar3,param_2);
  uVar2 = (uint)plVar3;
  FUN_0021d550();
  if (((uVar2 & 1) == 0) || (local_28 == 0)) {
    local_38 = 1;
  }
  else {
    FUN_0021d5ec();
    lVar4 = local_28;
    local_40 = param_1;
    FUN_001d5a74();
    local_40 = param_1;
    FUN_0021d6e4();
    local_48 = param_1;
    FUN_0021d7c4();
    _objc_retainAutoreleasedReturnValue();
    dVar1 = local_40;
    lVar5 = local_28;
    local_50 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar1);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    dVar1 = local_48;
    if (local_48 <= 0.0) {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar1);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      lVar4 = local_50;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_CGColor_026ca470);
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    _objc_storeStrong(&local_50,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

