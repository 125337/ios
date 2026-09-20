// applyInlineHTMLSearchHighlightToAttributedString: @ 01efe5a4

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListWebSettingsViewController::applyInlineHTMLSearchHighlightToAttributedString_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *local_100;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  undefined *local_48;
  SEL local_40;
  ID local_38;
  ID local_30;
  undefined *local_28;
  
  local_48 = (undefined *)0x0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_htmlSearchMatchRanges_026c8130);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_48 == (undefined *)0x0;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 == 0 || bVar1) {
    local_4c = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c78);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323db8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_68 = 0;
    while( true ) {
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_htmlSearchMatchRanges_026c8130);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (IVar3 <= local_68) break;
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_htmlSearchMatchRanges_026c8130);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar3;
      puVar7 = PTR_s_rangeValue_026ba098;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar5 = local_48;
      local_30 = IVar6;
      local_28 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      puVar4 = local_48;
      if (puVar7 + IVar6 <= puVar5) {
        uVar8 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_02578058;
        IVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_htmlSearchMatchIndex_026c8148);
        if (local_68 == IVar2) {
          local_100 = local_60;
        }
        else {
          local_100 = local_58;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_addAttribute_value_range__026a1d88,uVar8,local_100,IVar6,puVar7);
      }
      local_68 = local_68 + 1;
    }
    _objc_storeStrong(local_68 - IVar3,&local_60);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48,0);
  return;
}

