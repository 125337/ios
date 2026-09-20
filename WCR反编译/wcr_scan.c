// wcr_scan @ 01d89d98

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsActivityViewController::wcr_scan(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineSessionStatsEngine_026ced48;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEngine__026c4d38);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_28 = puVar2;
  _objc_initWeak(auStack_30,local_18);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_engine_026be8d0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_roomUsr_026c4cc0);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayName_026ac378);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_28;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01d89ff4;
  local_50 = &DAT_0258c350;
  _objc_copyWeak(auStack_48,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_scanSessionUsr_isGroup_displayNa_026c4d48,IVar4,1,IVar5,puVar1,0,&local_68)
  ;
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_30);
  return;
}

