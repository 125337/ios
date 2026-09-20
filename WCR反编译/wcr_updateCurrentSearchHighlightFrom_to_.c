// wcr_updateCurrentSearchHighlightFrom:to: @ 0196a700

/* Function Stack Size: 0x20 bytes */

void WCRefineFileManagerPreviewViewController::wcr_updateCurrentSearchHighlightFrom_to_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  long_long lVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  byte local_51;
  ID local_50;
  undefined *local_48;
  long_long local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar3;
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_51 = 0;
  bVar2 = true;
  if (local_48 != (undefined *)0x0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchRanges_026ba070);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = IVar4 == 0;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar2) {
    local_58 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c78);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323db8);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_beginEditing_026b9ff8);
    lVar1 = local_38;
    bVar2 = false;
    if (-1 < (long)local_38) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchRanges_026ba070);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = lVar1 < IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    if (bVar2) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchRanges_026ba070);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar6;
      puVar5 = PTR_s_rangeValue_026ba098;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (puVar5 + IVar7 <= puVar3) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_addAttribute_value_range__026a1d88,
                   *(undefined8 *)PTR__NSBackgroundColorAttributeName_02578058,local_60,IVar7,puVar5
                  );
      }
    }
    lVar1 = local_40;
    bVar2 = false;
    if (-1 < (long)local_40) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchRanges_026ba070);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = lVar1 < IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    if (bVar2) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchRanges_026ba070);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar6;
      puVar5 = PTR_s_rangeValue_026ba098;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (puVar5 + IVar7 <= puVar3) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_addAttribute_value_range__026a1d88,
                   *(undefined8 *)PTR__NSBackgroundColorAttributeName_02578058,local_68,IVar7,puVar5
                  );
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_endEditing_026ba018);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    local_58 = 0;
  }
  _objc_storeStrong(&local_48,0);
  return;
}

