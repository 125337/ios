// reloadItems @ 01f88cf0

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::reloadItems(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  dispatch_queue_t pdVar5;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  undefined *local_78;
  long local_70;
  byte local_68;
  long local_60;
  byte local_51;
  undefined *local_50;
  ID local_48;
  ID local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedDirectory_026ba370);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_keyword_026c9a28);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_voicePackSortMode_026c9a18);
  puVar4 = local_38;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_voicePackSortAsc_026c9a20);
  IVar2 = local_28;
  local_51 = (byte)puVar4;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadGeneration_026a2ab0);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setReloadGeneration__026a2ab8);
  local_60 = IVar3 + 1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLoadingItems__026c9b58,1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setItems__026a17a8,*(undefined8 *)PTR____NSArray0___02578280);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rebuildListSections_026ba410);
  }
  pdVar5 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_40;
  local_b0 = PTR___NSConcreteStackBlock_02578660;
  local_a8 = 0xc2000000;
  local_a4 = 0;
  local_a0 = FUN_01f89058;
  local_98 = &DAT_0258d020;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_48;
  local_90 = IVar3;
  local_78 = local_50;
  local_68 = local_51 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_28;
  local_88 = IVar2;
  local_70 = local_60;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = IVar3;
  _dispatch_async(pdVar5,&local_b0);
  (*(code *)PTR__objc_release_02578630)(pdVar5);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

