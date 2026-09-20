// FUN_00f86f00 @ 00f86f00

void FUN_00f86f00(float param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long local_38;
  long local_30;
  undefined4 local_28;
  undefined1 local_21;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_21 = 0;
  bVar2 = true;
  uVar1 = local_18 != 0;
  if ((bool)uVar1) {
    lVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e2e7e);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 == 0;
    local_21 = uVar1;
    local_20 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_21;
  }
  local_21 = uVar1;
  if (bVar2) {
    local_28 = 1;
  }
  else {
    lVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e2e7e);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_18;
    local_30 = lVar3;
    _objc_getAssociatedObject(local_18,&DAT_028e2e7f);
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar4;
    if (local_30 != 0) {
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_boolValue_026ca540);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,lVar3);
    }
    if (local_38 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatValue_026a5b48);
      (*(code *)PTR__objc_msgSend_02578628)((double)param_1,local_18,PTR_s_setAlpha__026ca860);
    }
    _objc_setAssociatedObject(local_18,&DAT_028e2e7e);
    _objc_setAssociatedObject(local_18,&DAT_028e2e7f,0,1);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

