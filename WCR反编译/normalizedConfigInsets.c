// normalizedConfigInsets @ 00ebb514

/* Function Stack Size: 0x10 bytes */

UIEdgeInsets __thiscall
WCRefineBubbleCut::normalizedConfigInsets(WCRefineBubbleCut *this,ID param_1,SEL param_2)

{
  UIEdgeInsets UVar1;
  ID IVar2;
  undefined *puVar3;
  double in_d0;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined *local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_40 = param_2;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_38;
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_bubbleCutTop_026ab498);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_clampInset__026ab4a0);
  IVar2 = local_38;
  dVar4 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bubbleCutLeft_026ab4a8);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_clampInset__026ab4a0);
  IVar2 = local_38;
  dVar5 = dVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bubbleCutBottom_026ab4b0);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_clampInset__026ab4a0);
  IVar2 = local_38;
  dVar6 = dVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bubbleCutRight_026ab4b8);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_clampInset__026ab4a0);
  FUN_00ebb694();
  local_30 = in_d0;
  local_28 = dVar4;
  local_20 = dVar5;
  local_18 = dVar6;
  _objc_storeStrong(&local_48,0);
  UVar1.field1_0x8 = local_28;
  UVar1.field0_0x0 = local_30;
  UVar1.field2_0x10 = local_20;
  UVar1.field3_0x18 = local_18;
  return UVar1;
}

