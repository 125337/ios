// wcr_forwardVideoAtPath:fromViewController: @ 00fb2068

/* Function Stack Size: 0x20 bytes */

void WCRefineHelper::wcr_forwardVideoAtPath_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_queue_t pdVar4;
  undefined *local_b8;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_4);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_40 == (undefined *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__eHe);
    local_44 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eNNX__W);
      local_44 = 1;
    }
    else {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WQY_)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar2;
      FUN_00fae91c();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_b8 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_b8;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pdVar4 = _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_38;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_00fb2388;
      local_78 = &DAT_025839b0;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = local_50;
      local_70 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_58;
      local_68 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = puVar2;
      _dispatch_async(pdVar4,&local_90);
      (*(code *)PTR__objc_release_02578630)(pdVar4);
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      local_44 = 0;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

