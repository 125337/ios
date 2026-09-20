// showBlackList @ 01d24e68

/* Function Stack Size: 0x10 bytes */

void WCRefineRedEnvelopViewController::showBlackList(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_88;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_redEnvelopRedBlackList_026a5fe8);
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_88 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_88;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_initWeak(auStack_38,local_18);
  IVar3 = local_18;
  puVar2 = local_28;
  puVar1 = local_30;
  puVar4 = PTR_WCRefineChatRoomPicker_026cef60;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01d25058;
  local_50 = &DAT_025887c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar2;
  _objc_copyWeak(auStack_40,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_presentFromViewController_title__026ab898,IVar3,&cf_b_J,puVar1,&local_68);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_48);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

