// FUN_008e2de0 @ 008e2de0

/* WARNING: Type propagation algorithm not settling */

void FUN_008e2de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_60;
  long local_58;
  long local_50;
  long local_48 [3];
  long local_30 [3];
  long local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  lVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028ce334);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_30[0] = lVar1;
  _objc_getAssociatedObject(local_18,&DAT_028ce335);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_18;
  local_48[0] = lVar2;
  _objc_getAssociatedObject(local_18,&DAT_028ce336);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_30[0];
  local_50 = lVar1;
  FUN_008fadac(local_30[0],local_48[0]);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_50;
  local_58 = lVar2;
  FUN_008fb12c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_008fafdc();
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if ((local_58 == 0) || (local_60 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRJ_YS1Y_Rbc_Nu);
  }
  else {
    FUN_008fb5a8(local_58,local_60);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

