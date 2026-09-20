// selectReplyGroups @ 017bb704

/* Function Stack Size: 0x10 bytes */

void WCRefineAIFeatureViewController::selectReplyGroups(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_28,local_18);
  IVar2 = local_18;
  puVar1 = PTR_WCRefineChatRoomPicker_026cef60;
  puVar3 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_017bb8a8;
  local_48 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_40,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentFromViewController_title__026ab898,IVar2,&cf_n__JR,puVar4,&local_60
            );
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_28);
  return;
}

