// updateValueLabel:tag:value: @ 01e179d4

/* Function Stack Size: 0x28 bytes */

void WCRefineSuperFloatFanSettingsViewController::updateValueLabel_tag_value_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,double param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ulong local_40;
  double local_38;
  long_long local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  local_38 = param_5;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_viewWithTag__026cabe0,&UNK_00016bac + param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,local_18,PTR_s_displayTextForTag_value__026c3d40,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setText__026caa88);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

