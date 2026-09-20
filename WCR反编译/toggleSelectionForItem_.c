// toggleSelectionForItem: @ 01eed8a0

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHTMLRepositoryViewController::toggleSelectionForItem_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  cfstringStruct *pcVar6;
  ID IVar7;
  ID IVar8;
  undefined *local_f8;
  cfstringStruct *local_b8;
  undefined *local_a0;
  undefined *local_90;
  undefined *local_80;
  ID local_70;
  undefined *local_60;
  ID local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = pcVar6;
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_b8 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b8;
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  pcVar6 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar6 != (cfstringStruct *)0x0) {
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIds_026c7e78);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar7);
    if ((IVar8 & 1) == 0) {
      IVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIds_026c7e78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar7);
    }
    else {
      IVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIds_026c7e78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar7);
    }
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar7);
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIds_026c7e78);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f8 = PTR__OBJC_CLASS___NSString_026cdfe8;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar1 = false;
    bVar2 = false;
    if (IVar8 == 0) {
      local_70 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_allItems_026a2730);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      IVar8 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar8 == 0;
      if (bVar1) {
        local_80 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_stringWithFormat__0269cca8,&cf_NxN__);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_a0 = local_f8;
    }
    else {
      local_50 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIds_026c7e78);
      _objc_retainAutoreleasedReturnValue();
      bVar5 = true;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = true;
      local_60 = local_f8;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle__0269cef0,local_f8);
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_90);
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if (bVar4) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (bVar5) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(IVar7);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

