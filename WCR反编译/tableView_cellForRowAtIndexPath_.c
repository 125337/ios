// tableView:cellForRowAtIndexPath: @ 01eec6f0

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoHTMLRepositoryViewController::tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint local_ec;
  cfstringStruct *local_e8;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  SEL local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_40 = (undefined *)0x0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (pcVar2 == (cfstringStruct *)0x0) {
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_dequeueReusableCellWithIdentifie_026a2808,&cf_empty);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar4 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_textLabel_0269fd00);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_detailTextLabel_0269fd08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSelectionStyle__0269e5f8,0);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar4;
    local_54 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_dequeueReusableCellWithIdentifie_026aaa30,&cf_repo,local_48);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_30;
    local_60 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_row_0269e210);
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_objectAtIndexedSubscript__0269cc78,uVar5);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_e8 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_e8;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectionMode_026c2628);
    local_ec = 0;
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectedIds_026c7e78);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_ec = (uint)pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_configureWithItem_selected__026c3c48,local_68,(byte)local_ec & 1);
    uVar5 = 3;
    if ((local_ec & 1) == 0) {
      uVar5 = 0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAccessoryType__026a3220,uVar5);
    puVar4 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar4;
    local_54 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

