// editKeywordListForKey:title:subtitle: @ 01bbef10

/* Function Stack Size: 0x28 bytes */

void WCRefineMessageSyncRuleViewController::editKeywordListForKey_title_subtitle_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined1 auStack_90 [8];
  undefined *local_88 [3];
  long local_70;
  undefined1 auStack_68 [8];
  undefined *local_60;
  undefined4 local_54;
  ID local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentRule_026c04a8);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar3;
  if ((IVar3 == 0) ||
     (lVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_54 = 1;
  }
  else {
    puVar5 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_stringArrayInRule_forKey__026a44e8,
               local_50,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_initWeak(auStack_68,local_28);
    lVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
    uVar2 = local_40;
    uVar1 = local_48;
    puVar6 = local_60;
    puVar5 = PTR_WCRefineHelper_026ce000;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_01bbf264;
    local_a0 = &DAT_025891e8;
    local_70 = lVar4;
    _objc_copyWeak(auStack_90,auStack_68);
    lVar4 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,puVar5,PTR_s_presentPageSheetMultilineInputWi_026ab118,uVar2,uVar1,&cf__u,puVar6,
               &local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_88[0] = puVar5;
    if (puVar5 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    }
    _objc_storeStrong(local_88);
    _objc_storeStrong(&local_98,0);
    _objc_destroyWeak(auStack_90);
    _objc_storeStrong(&local_70,0);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

