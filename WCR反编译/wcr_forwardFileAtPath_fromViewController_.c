// wcr_forwardFileAtPath:fromViewController: @ 00faf394

/* Function Stack Size: 0x20 bytes */

void WCRefineHelper::wcr_forwardFileAtPath_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_queue_t pdVar5;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined *local_60;
  long local_58;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((lVar2 == 0) || (local_40 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eN_eHe);
    local_44 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eN_NX__W);
      local_44 = 1;
    }
    else {
      puVar3 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WS_);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_40;
      local_50 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = lVar2;
      pdVar5 = _dispatch_get_global_queue(0,0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_38;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_00faf674;
      local_78 = &DAT_025839b0;
      (*(code *)PTR__objc_retain_02578638)();
      lVar2 = local_58;
      local_70 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = local_50;
      local_68 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = puVar3;
      _dispatch_async(pdVar5,&local_90);
      (*(code *)PTR__objc_release_02578630)(pdVar5);
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

