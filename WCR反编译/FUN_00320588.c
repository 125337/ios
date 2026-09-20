// FUN_00320588 @ 00320588

void FUN_00320588(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (local_18 != 0) {
    if ((param_3 & 1) == 0) {
      FUN_00321200(local_18);
      lVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(param_1);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    else {
      lVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      FUN_00320bec(param_1,local_18);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setClipsToBounds__026ca8c8,(param_3 ^ 1) & 1);
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

