// _WCRefineRunAfterMainFrameFirstAppear @ 00f93ae4

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void _WCRefineRunAfterMainFrameFirstAppear(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = param_1;
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    _os_unfair_lock_lock(&DAT_028e2ef0);
    if ((DAT_028e2ef4 & 1) == 0) {
      if (DAT_028e2ee0 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = DAT_028e2ee0;
        DAT_028e2ee0 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      puVar1 = DAT_028e2ee0;
      lVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copy_0269d150);
      lVar4 = lVar3;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2ee0,PTR_s_count_0269cfe0);
      _os_unfair_lock_unlock(&DAT_028e2ef0);
      FUN_00f93dcc();
      FUN_00f93e98();
      FUN_00f93f18(local_20);
      local_24 = 0;
    }
    else {
      puVar1 = &DAT_028e2ee8;
      _objc_loadWeakRetained();
      local_30 = puVar1;
      _os_unfair_lock_unlock(&DAT_028e2ef0);
      puVar1 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_18;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_00f93d90;
      local_48 = &DAT_0257ca68;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_30;
      local_38 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = puVar2;
      _dispatch_async(puVar1,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_24 = 1;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

