// confirmMiYouPasswordVerify: @ 01a32344

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::confirmMiYouPasswordVerify_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int local_c0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  int local_50;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  undefined *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  if (uVar1 == 0) {
    local_50 = 1;
  }
  else {
    puVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028e4484);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_28;
    local_58 = puVar2;
    _objc_getAssociatedObject(local_28,&DAT_028e4485);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_c0 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_boolValue_026ca540);
      local_c0 = (int)puVar3;
    }
    local_61 = local_c0 != 0;
    _objc_setAssociatedObject(local_28,&DAT_028e4484,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028e4485,0,1);
    if (local_58 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_stringForKey__026a33a0,&cf_MHidePasswordKey);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_58;
      local_58 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((local_58 == (undefined *)0x0) ||
         (puVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
         puVar2 == (undefined *)0x0)) {
        _objc_storeStrong(&local_58,&cf_0000);
      }
      _objc_storeStrong(&local_70,0);
    }
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_58);
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_WCRefine,&cf__xel,&cf_nx_,&PTR___NSConcreteGlobalBlock_0258acf0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
    }
    else {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((local_61 & 1) == 0) {
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_28;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_01a329c0;
      local_80 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = puVar3;
      _dispatch_async(puVar2,&local_98);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_WCRefine,&cf__xbRR_,&cf_nx_,&PTR___NSConcreteGlobalBlock_0258acd0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (local_50 == 0) {
    local_50 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

