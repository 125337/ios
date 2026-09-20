// FUN_00315088 @ 00315088

void FUN_00315088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  if (((local_18 != 0) && (local_20 != 0)) && (local_28 != 0)) {
    FUN_00320914(local_18);
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
    lVar2 = local_20;
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_section_0269e988);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_numberOfRowsInSection__026a2008,lVar1);
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_row_0269e210);
    lVar1 = lVar1 - (lVar2 + -1);
    if (lVar1 == 0) {
      FUN_003216a8(param_1,local_18);
    }
    else {
      FUN_0031534c(lVar1,local_18);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

