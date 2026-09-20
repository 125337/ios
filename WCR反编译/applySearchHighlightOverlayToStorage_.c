// applySearchHighlightOverlayToStorage: @ 01969318

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerPreviewViewController::applySearchHighlightOverlayToStorage_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  undefined *local_110;
  ulong local_e8;
  undefined *local_98;
  ID local_90;
  undefined *local_88;
  ulong local_80;
  undefined *local_78;
  ulong local_70;
  undefined8 local_68;
  ulong local_60;
  ulong local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchRanges_026ba070);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar2 = local_38 == (undefined *)0x0;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (IVar4 == 0 || bVar2) {
    local_3c = 1;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c78);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323db8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchRanges_026ba070);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_68 = 200;
    local_e8 = IVar4;
    if (199 < IVar4) {
      local_e8 = 200;
    }
    local_70 = local_e8;
    local_58 = local_e8;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_60 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,local_e8)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar5;
    for (local_80 = 0; local_80 < local_58; local_80 = local_80 + 1) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchRanges_026ba070);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar4;
      puVar5 = PTR_s_rangeValue_026ba098;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = IVar7;
      local_88 = puVar5;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar5 = local_88 + local_90;
      puVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      uVar1 = local_80;
      if (puVar5 <= puVar6) {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchIndex_026ba080);
        if (uVar1 == IVar3) {
          local_110 = local_50;
        }
        else {
          local_110 = local_48;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_addAttribute_value_range__026a1d88,
                   *(undefined8 *)PTR__NSBackgroundColorAttributeName_02578058,local_110,local_90,
                   local_88);
        puVar5 = local_78;
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchMatchRanges_026ba070);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        _objc_storeStrong(&local_98,0);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setSearchHighlightRanges__026b9e08,local_78);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

