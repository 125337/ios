// FUN_01debccc @ 01debccc

void FUN_01debccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_identifier_026a4a88);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _WCRefineSpecialTextStyle();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = PTR_WCRefineGradientPalette_026ce910;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_hexStopsFromStyle_dark__026acc98,local_38,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_01debf94();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR_WCRefineGradientPalette_026ce910;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_hexStopsFromStyle_dark__026acc98,local_38,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_01debf94();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_identifier_026a4a88);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_40;
  puVar3 = local_48;
  uVar2 = _WCRefineGradientPresetCustom;
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradientDirection);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_01dea924(uVar5,uVar2,puVar4,puVar3,uVar6);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

