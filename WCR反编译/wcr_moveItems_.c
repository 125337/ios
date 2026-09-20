// wcr_moveItems: @ 01f7636c

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackManagerViewController::wcr_moveItems_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  long local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (lVar2 != 0) {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_absolutePath);
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar3;
    _objc_initWeak(auStack_40,local_18);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    IVar1 = local_18;
    lVar3 = local_38;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_01f76564;
    local_68 = &DAT_0257c948;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar3;
    _objc_copyWeak(auStack_58,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_presentFolderPickerFrom_completi_026c9868,IVar1,&local_80);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_60);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb);
  }
  local_2c = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

