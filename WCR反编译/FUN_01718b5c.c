// FUN_01718b5c @ 01718b5c

void FUN_01718b5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_58;
  long local_50;
  long local_48;
  undefined4 local_40;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    local_40 = 1;
  }
  else {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentNavigationController_026a5e00);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar1;
    if ((local_48 == 0) || (lVar1 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_showToast__026b3a18,&cf_elnxS_MRub_SmO_kQQbc);
      local_40 = 1;
    }
    else {
      DAT_028e3f70 = DAT_028e3f70 + 1;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar2;
      _objc_setAssociatedObject(local_18,&DAT_028e3f78,puVar2,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_processSequentialRedeemCodes_ind_026b39d8,local_28,0,local_30,
                 local_48,local_50,local_58);
      _objc_storeStrong(&local_58,0);
      local_40 = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

