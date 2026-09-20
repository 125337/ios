// FUN_001e9bb0 @ 001e9bb0

void FUN_001e9bb0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  local_40 = 0;
  lVar1 = local_28;
  FUN_001ea078(local_28,&local_40);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30,local_40);
  local_38 = lVar1;
  if (local_30 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setLayoutMarginsRelativeArrangem_026a0248,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__UIEdgeInsetsZero_02578118,
               *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8),
               *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10),
               *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18),local_30,
               PTR_s_setLayoutMargins__026a0250);
  }
  if (local_38 != 0) {
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

