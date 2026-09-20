// applyInlineHTMLSearchHighlightToTextStorage @ 01efe950

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::applyInlineHTMLSearchHighlightToTextStorage
               (ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *local_110;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined1 local_49;
  undefined *local_48;
  SEL local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_40 = param_2;
  local_38 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchRanges_026c8130);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_49 = 0;
  bVar2 = true;
  uVar1 = IVar3 != 0;
  if ((bool)uVar1) {
    puVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar4 == (undefined *)0x0;
    local_49 = uVar1;
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar1 = local_49;
  }
  local_49 = uVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (!bVar2) {
    puVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c78);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323db8);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_beginEditing_026b9ff8);
    local_70 = (undefined *)0x0;
    while( true ) {
      puVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_htmlSearchMatchRanges_026c8130);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (puVar5 <= local_70) break;
      puVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_htmlSearchMatchRanges_026c8130);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      puVar7 = PTR_s_rangeValue_026ba098;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar5 = local_58;
      local_30 = puVar6;
      local_28 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      puVar4 = local_58;
      if (puVar6 + (long)puVar7 <= puVar5) {
        uVar8 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_02578058;
        puVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_htmlSearchMatchIndex_026c8148);
        if (local_70 == puVar5) {
          local_110 = local_68;
        }
        else {
          local_110 = local_60;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_addAttribute_value_range__026a1d88,uVar8,local_110,puVar6,puVar7);
      }
      local_70 = local_70 + 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_endEditing_026ba018);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  return;
}

