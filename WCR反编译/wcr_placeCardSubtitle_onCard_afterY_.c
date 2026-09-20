// wcr_placeCardSubtitle:onCard:afterY: @ 01d98c80

/* Function Stack Size: 0x28 bytes */

double WCRefineSessionStatsBoardView::wcr_placeCardSubtitle_onCard_afterY_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double local_108;
  ID local_68;
  ID local_60;
  undefined4 local_54;
  double local_50;
  undefined8 local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  double local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar1 = local_40;
  local_50 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (16.5 < local_50) {
      local_108 = local_50 + 4.0;
    }
    else {
      local_108 = 16.0;
    }
    local_28 = local_108;
    local_54 = 1;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_titleAlign_026c4e68);
    IVar5 = local_30;
    lVar1 = local_40;
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    local_60 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_01d8f4e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_wcr_label_font_color__026c4e70,lVar1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTag__026caa80,0x4e);
    if (local_60 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextAlignment__026caa90,1);
      uVar7 = 0;
      uVar6 = 0x4072c00000000000;
      uVar9 = 0x4030000000000000;
      dVar8 = local_50;
      FUN_01d8ec14();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,dVar8,uVar6,uVar9,local_68,PTR_s_setFrame__026ca960);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextAlignment__026caa90,0);
      uVar9 = 0x4030000000000000;
      uVar7 = 0x4030000000000000;
      uVar6 = 0x4070c00000000000;
      dVar8 = local_50;
      FUN_01d8ec14();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,dVar8,uVar6,uVar9,local_68,PTR_s_setFrame__026ca960);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_68);
    local_28 = local_50 + 20.0;
    local_54 = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

