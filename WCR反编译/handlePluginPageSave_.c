// handlePluginPageSave: @ 01e69188

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineTextReplaceViewController::handlePluginPageSave_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  uint local_34;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar2 = local_18;
  _objc_getAssociatedObject(local_18,"pluginPageTextView");
  _objc_retainAutoreleasedReturnValue();
  bVar1 = IVar2 != 0;
  local_30[0] = IVar2;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPluginPageReplacement__026c6b08);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_changedKeys_026c6c70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveAllChangesImmediately_026c6ac0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_resignFirstResponder_0269ea18);
    dVar3 = _dispatch_time(0,300000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01e693b8;
    local_48 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = IVar2;
    _dispatch_after(dVar3,puVar4,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

