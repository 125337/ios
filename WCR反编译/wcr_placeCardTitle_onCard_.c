// wcr_placeCardTitle:onCard: @ 01d98920

/* Function Stack Size: 0x20 bytes */

double WCRefineSessionStatsBoardView::wcr_placeCardTitle_onCard_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ID local_60;
  undefined4 local_54;
  ID local_50;
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
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_titleAlign_026c4e68);
  local_50 = IVar2;
  if (((long)IVar2 < 2) &&
     (lVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     IVar2 = local_30, lVar1 = local_40, lVar3 != 0)) {
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4031000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_01d8f3a4();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_wcr_label_font_color__026c4e70,lVar1,puVar4);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar2;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTag__026caa80,0x4c);
    IVar2 = local_60;
    uVar6 = DAT_028c69a0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar2,uVar6,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_50 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTextAlignment__026caa90,1);
      uVar7 = 0;
      uVar8 = 0x4030000000000000;
      uVar6 = 0x4072c00000000000;
      uVar9 = 0x4036000000000000;
      FUN_01d8ec14();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,uVar8,uVar6,uVar9,local_60,PTR_s_setFrame__026ca960);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTextAlignment__026caa90,0);
      uVar8 = 0x4030000000000000;
      uVar7 = 0x4030000000000000;
      uVar6 = 0x4070c00000000000;
      uVar9 = 0x4036000000000000;
      FUN_01d8ec14();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,uVar8,uVar6,uVar9,local_60,PTR_s_setFrame__026ca960);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_60);
    local_28 = 38.0;
    local_54 = 1;
    _objc_storeStrong(&local_60,0);
  }
  else {
    local_28 = 16.0;
    local_54 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

