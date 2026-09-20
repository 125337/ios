// FUN_006320fc @ 006320fc

void FUN_006320fc(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_40 [3];
  byte local_21;
  undefined8 local_20;
  long local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cb9f0)(param_1,param_2,param_3 & 1);
  lVar3 = local_18;
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  FUN_00636798(lVar3,lVar2,&cf_chat_viewWillDisappear,0xffffffffffffffff);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeWeak(&DAT_028cb9b0,local_18);
  lVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  if (local_40[0] != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_setNeedsLayout_0269deb8);
  }
  _objc_storeStrong(local_40,0);
  return;
}

