// FUN_00320914 @ 00320914

void FUN_00320914(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipsToBounds__026ca8c8,0);
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar1 != 0) {
      lVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

