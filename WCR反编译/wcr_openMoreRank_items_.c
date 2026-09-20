// wcr_openMoreRank:items: @ 01dd37c8

/* Function Stack Size: 0x20 bytes */

void WCRefineSessionStatsViewController::wcr_openMoreRank_items_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_80 [3];
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar3 = PTR_WCRSSOverviewRankListController_026cf5e0;
  _objc_alloc();
  uVar2 = local_28;
  uVar1 = local_30;
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_initWithTitle_items_privacy__026c5630,uVar2,uVar1,puVar5);
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_initWeak(auStack_40,local_18);
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01dd3a3c;
  local_50 = &DAT_0258c4c0;
  _objc_copyWeak(auStack_48,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setOnOpen__026c5638,&local_68);
  puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithRootViewController__0269d2a0,local_38);
  local_80[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setModalPresentationStyle__0269d2a8,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_80[0],1,0);
  _objc_storeStrong(local_80);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

