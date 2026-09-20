// appendWelcomeRepositories @ 018ac050

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::appendWelcomeRepositories(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar4 = PTR_WCRefineHelper_026ce000;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_autoReplyNormalizedMultiItems__0269efa0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_initWeak(auStack_30,local_18);
  IVar1 = local_18;
  puVar2 = local_28;
  puVar4 = PTR_WCRefineMessageRepositoryPicker_026cf050;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_018ac22c;
  local_48 = &DAT_0257c948;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar2;
  _objc_copyWeak(auStack_38,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_presentFromViewController_title__026ae548,IVar1,&cf_ReQ__kQ_,0,&local_60);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_40);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

