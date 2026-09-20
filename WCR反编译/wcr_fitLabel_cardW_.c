// wcr_fitLabel:cardW: @ 01d94518

/* Function Stack Size: 0x20 bytes */

void WCRefineSessionStatsBoardView::wcr_fitLabel_cardW_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  undefined8 in_d1;
  double in_d3;
  double local_130;
  double local_110;
  ulong local_80;
  double local_78;
  double local_70;
  undefined4 local_64;
  double local_60;
  undefined8 uStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
  uVar2 = local_38;
  local_64 = 0x50;
  local_70 = (local_40 - param_4) - 16.0;
  local_110 = local_70;
  if (local_70 <= 80.0) {
    local_110 = 80.0;
  }
  local_78 = local_110;
  local_50 = local_110;
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_60 = param_4;
  uStack_58 = in_d1;
  dStack_48 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_38;
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_numberOfLines_026a8e70);
    uVar2 = local_80;
    if (uVar3 == 0) {
      dVar4 = 8000.0;
      FUN_01d8ebe8();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_sizeThatFits__0269ec10);
      local_130 = (double)(long)dVar4;
      if (local_130 <= 16.0) {
        local_130 = 16.0;
      }
      dStack_48 = local_130;
    }
    _objc_storeStrong(&local_80,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,uStack_58,local_50,dStack_48,local_38,PTR_s_setFrame__026ca960);
  _objc_storeStrong(&local_38,0);
  return;
}

