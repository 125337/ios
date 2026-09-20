// wcr_openCommonGroups: @ 01558674

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_openCommonGroups_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined1 local_41;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c5f30);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_30 = puVar3;
  _objc_getAssociatedObject(local_28,DAT_028c5f38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_30;
  local_41 = 0;
  bVar2 = true;
  uVar1 = local_30 != (undefined *)0x0;
  local_38 = puVar4;
  if ((bool)uVar1) {
    puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar3 == puVar4;
    local_41 = uVar1;
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if (bVar2) {
    local_48 = 1;
  }
  else {
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
    local_50 = puVar3;
    if ((long)puVar3 < 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_qQT_J__N);
      local_48 = 1;
    }
    else if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feqQT_J);
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_dismissProfileCardAnimated_r_026b0590,0,0);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_30;
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_01558924;
      local_60 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = puVar4;
      _dispatch_async(puVar3,&local_78);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_58,0);
      local_48 = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

