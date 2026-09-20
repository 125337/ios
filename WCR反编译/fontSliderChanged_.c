// fontSliderChanged: @ 019db848

/* Function Stack Size: 0x18 bytes */

void WCRefineFontBeautifyViewController::fontSliderChanged_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  float fVar4;
  double dVar5;
  undefined8 local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  fVar4 = 0.0;
  local_38 = 0.0;
  local_40 = 1.0;
  local_48 = 0;
  local_50 = 0;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_sliderConfigForKind_min_max_valu_026baf58,uVar1,&local_38,&local_40,
             &local_48,&local_50);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  dVar5 = (double)fVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar5,local_50,IVar3,PTR_s_snapValue_kind_step__026baf98,local_30);
  local_58 = dVar5;
  if (dVar5 < local_38) {
    local_58 = local_38;
  }
  if (local_40 < local_58) {
    local_58 = local_40;
  }
  fVar4 = SUB84(local_58,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  if (DAT_02339b88 < ABS((double)fVar4 - local_58)) {
    (*(code *)PTR__objc_msgSend_02578628)((float)local_58,local_28,PTR_s_setValue__026a51b0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,local_18,PTR_s_applySliderValue_forKind__026bafa0,local_30);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_60;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,local_18,PTR_s_sliderDisplayTextForKind_value__026baf68,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTitle_forState__026caab8,IVar3,0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_28,0);
  return;
}

