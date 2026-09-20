// wcr_reflowCardTitle:cardW: @ 01d98678

/* Function Stack Size: 0x20 bytes */

void WCRefineSessionStatsBoardView::wcr_reflowCardTitle_cardW_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  double in_d3;
  double local_118;
  double local_110;
  undefined8 local_78;
  double local_68;
  ulong local_50;
  undefined4 local_44;
  double local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar1 = local_38;
  if ((uVar3 & 1) == 0) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar1;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_titleAlign_026c4e68);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    local_110 = in_d3;
    if (in_d3 <= 22.0) {
      local_110 = 22.0;
    }
    if (IVar4 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextAlignment__026caa90,1);
      local_78 = 0;
      local_68 = local_40;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextAlignment__026caa90,0);
      local_78 = 0x4030000000000000;
      local_118 = local_40 - 32.0;
      if (local_118 <= 80.0) {
        local_118 = 80.0;
      }
      local_68 = local_118;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,0x4030000000000000,local_68,local_110,local_38,PTR_s_setFrame__026ca960);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

