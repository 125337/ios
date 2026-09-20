// beginBackgroundTaskIfNeeded @ 00eb7f74

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundKeepAlive::beginBackgroundTaskIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bgTaskIdentifier_026ab348);
  if (((param_1 == *(ID *)PTR__UIBackgroundTaskInvalid_02578100) &&
      (IVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEnabled_026a0ef0),
      (IVar1 & 1) != 0)) &&
     (IVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isInBackground_026ab300), (IVar1 & 1) != 0
     )) {
    _objc_initWeak(auStack_28,local_18);
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_00eb813c;
    local_48 = &DAT_0257be28;
    _objc_copyWeak(auStack_40,auStack_28);
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_beginBackgroundTaskWithExpiratio_026ab358,&local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBgTaskIdentifier__026ab360,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_28);
  }
  return;
}

