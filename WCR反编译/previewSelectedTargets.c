// previewSelectedTargets @ 01d3bf94

/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::previewSelectedTargets(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [24];
  undefined *local_40;
  undefined1 auStack_38 [12];
  uint local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineScheduledTask_026ce850;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_stringArrayInTask_forKey__026a6cf0,param_1,_kWCRScheduledTaskKeyTargets);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (puVar2 != (undefined *)0x0) {
    _objc_initWeak(auStack_38,local_18);
    puVar3 = PTR_WCRScheduledTaskTargetListViewController_026cf5a0;
    _objc_alloc();
    puVar1 = local_28;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01d3c20c;
    local_60 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_58,auStack_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_initWithTargets_changeHandler__026c4658,puVar1,&local_78);
    IVar4 = local_18;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_40,0);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_38);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___gbvh);
  }
  local_2c = (uint)(puVar2 == (undefined *)0x0);
  _objc_storeStrong(&local_28,0);
  return;
}

