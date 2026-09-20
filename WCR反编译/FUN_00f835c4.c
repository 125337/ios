// FUN_00f835c4 @ 00f835c4

void FUN_00f835c4(float param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    lVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e2eb9);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_28 = lVar1;
    _objc_getAssociatedObject(local_18,&DAT_028e2eba);
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar2;
    if (local_28 != 0) {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_boolValue_026ca540);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,lVar1);
    }
    if (local_30 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_floatValue_026a5b48);
      (*(code *)PTR__objc_msgSend_02578628)((double)param_1,local_18,PTR_s_setAlpha__026ca860);
    }
    _objc_setAssociatedObject(local_18,&DAT_028e2eb9);
    _objc_setAssociatedObject(local_18,&DAT_028e2eba,0,1);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

