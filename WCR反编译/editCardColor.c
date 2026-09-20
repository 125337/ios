// editCardColor @ 01e50380

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingViewController::editCardColor(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  _objc_initWeak(auStack_30,local_18);
  IVar1 = local_18;
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeTelegramGroupingCardColorLig_026c6710);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeTelegramGroupingCardColorDar_026c6718);
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01e50530;
  local_50 = &DAT_0258bb10;
  _objc_copyWeak(auStack_48,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_showColorPickerWithTitle_lightHe_026c6888,&cf_ofr,puVar2,puVar3,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

