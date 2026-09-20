// updateAccessorySymbol:size:pointSize:scale:tint: @ 019cb5e8

/* Function Stack Size: 0x40 bytes */

void __thiscall
WCRefineFontListCell::updateAccessorySymbol_size_pointSize_scale_tint_
          (WCRefineFontListCell *this,ID param_1,SEL param_2,ID param_3,CGSize param_4,
          double param_5,long_long param_6,ID param_7)

{
  double dVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined *local_58;
  undefined8 local_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  double local_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  local_20 = param_5;
  local_18 = in_d1;
  _objc_storeStrong(&local_38,param_3);
  local_50 = 0;
  local_48 = param_4.field0_0x0;
  local_40 = in_d2;
  _objc_storeStrong(&local_50,param_4.field1_0x8);
  dVar1 = local_20;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_accessoryWidthConstraint_026bad98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_accessoryHeightConstraint_026bada0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640,
             PTR_s_configurationWithPointSize_weigh_026bada8,6,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_checkmark),
             PTR_s_setPreferredSymbolConfiguration__026badb0,puVar3);
  puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_checkmark),PTR_s_setImage__026ca978);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_58,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_checkmark),PTR_s_setTintColor__026caab0,local_50);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

