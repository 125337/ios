// editEdge:title: @ 0187b9b0

/* Function Stack Size: 0x20 bytes */

void WCRefineBubbleCutViewController::editEdge_title_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  long_long local_58;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  uVar3 = 0;
  local_38 = 0;
  if (local_28 == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else if (local_28 == 1) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else if (local_28 == 2) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else if (local_28 == 3) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_initWeak(auStack_40,local_18);
  uVar3 = local_30;
  puVar1 = PTR_WCRefineHelper_026ce000;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,local_18,PTR_s_insetDisplayText__026b6e48);
  _objc_retainAutoreleasedReturnValue();
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_0187bcec;
  local_68 = &DAT_02589b48;
  local_58 = local_28;
  _objc_copyWeak(auStack_60,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (0,puVar1,PTR_s_presentPageSheetSingleLineInputW_026a46e0,uVar3,&::cf_eQ,IVar2,&local_80
            );
  _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_30,0);
  return;
}

