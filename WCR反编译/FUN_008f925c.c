// FUN_008f925c @ 008f925c

void FUN_008f925c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar2 = local_30;
  local_38 = param_3;
  FUN_008f86d4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    if (local_38 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_leN1Y_);
      local_50 = 1;
    }
    else {
      dVar3 = _dispatch_time(0,600000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_008fad6c;
      local_70 = &DAT_025796f0;
      (*(code *)PTR__objc_retain_02578638)();
      lVar2 = local_30;
      local_68 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = lVar2;
      local_58 = local_38;
      _dispatch_after(dVar3,puVar4,&local_88);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_68,0);
      local_50 = 0;
    }
  }
  else {
    FUN_008f8dac(lVar2,local_28,local_30,local_40);
    local_50 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

