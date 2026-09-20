// textRectForBounds:limitedToNumberOfLines: @ 01bc2574

/* Function Stack Size: 0x38 bytes */

CGRect WCRMomentsPaddedLabel::textRectForBounds_limitedToNumberOfLines_
                 (ID param_1,SEL param_2,CGRect param_3,long_long param_4)

{
  CGRect CVar1;
  double in_d0;
  double dVar2;
  double in_d1;
  double in_d2;
  double in_d3;
  ID local_c8;
  undefined *local_c0;
  double local_78;
  SEL local_70;
  ID local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  local_78 = param_3.field0_0x0.field0_0x0;
  local_70 = param_2;
  local_68 = param_1;
  local_60 = in_d0;
  local_58 = in_d1;
  local_50 = in_d2;
  local_48 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_textInsets_026c05a0,local_78,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  FUN_01bc27c0();
  local_c8 = local_68;
  local_c0 = PTR_WCRMomentsPaddedLabel_026cff10;
  _objc_msgSendSuper2(&local_c8,PTR_s_textRectForBounds_limitedToNumbe_026ae8f0,local_78);
  local_40 = local_60;
  local_38 = local_58;
  local_30 = local_50;
  local_28 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_textInsets_026c05a0);
  dVar2 = local_40 - local_58;
  local_40 = dVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_textInsets_026c05a0);
  local_38 = local_38 - dVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_textInsets_026c05a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_textInsets_026c05a0);
  dVar2 = local_30 + dVar2 + local_48;
  local_30 = dVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_textInsets_026c05a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_textInsets_026c05a0);
  CVar1.field0_0x0.field1_0x8 = local_38;
  CVar1.field0_0x0.field0_0x0 = local_40;
  CVar1.field1_0x10.field0_0x0 = local_30;
  CVar1.field1_0x10.field1_0x8 = local_28 + dVar2 + local_50;
  return CVar1;
}

