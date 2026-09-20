// FUN_008f8dac @ 008f8dac

void FUN_008f8dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  dispatch_queue_t pdVar3;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if (((local_28 == 0) || (local_30 == 0)) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_leN1Y_);
    local_48 = 1;
  }
  else {
    lVar2 = local_30;
    FUN_008f94e4(local_30,&cf_mp3);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar2;
    pdVar3 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_008f9cac;
    local_78 = &DAT_0257b6a8;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_50;
    local_70 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_28;
    local_68 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_30;
    local_60 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = lVar2;
    _dispatch_async(pdVar3,&local_90);
    (*(code *)PTR__objc_release_02578630)(pdVar3);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

