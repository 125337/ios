// FUN_0020ee74 @ 0020ee74

void FUN_0020ee74(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  bVar1 = true;
  if (local_18 != 0) {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (!bVar1) {
    FUN_0020f2a4(local_18);
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipsToBounds__026ca8c8,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

