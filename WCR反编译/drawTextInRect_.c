// drawTextInRect: @ 01bc285c

/* Function Stack Size: 0x30 bytes */

void WCRMomentsPaddedLabel::drawTextInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_90;
  undefined *local_88;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  local_28 = in_d1;
  local_20 = in_d2;
  local_18 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_textInsets_026c05a0,param_3.field0_0x0.field0_0x0,
             param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
             param_3.field1_0x10.field1_0x8);
  FUN_01bc27c0();
  local_88 = PTR_WCRMomentsPaddedLabel_026cff10;
  local_90 = param_1;
  _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_90,PTR_s_drawTextInRect__026c05a8);
  return;
}

