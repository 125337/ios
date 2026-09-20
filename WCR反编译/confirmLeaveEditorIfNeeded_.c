// confirmLeaveEditorIfNeeded: @ 01966bdc

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerPreviewViewController::confirmLeaveEditorIfNeeded_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editorHasUnsavedChanges_026ba060);
    if ((IVar2 & 1) == 0) {
      (**(code **)(local_28 + 0x10))();
      local_2c = 1;
    }
    else {
      _objc_initWeak(auStack_38,local_18);
      lVar1 = local_28;
      puVar3 = PTR_WCRefineHelper_026ce000;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_01966d6c;
      local_48 = &DAT_025838c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,0,&cf_S_MRO9e_gOX_,&cf_Sm,0,
                 &cf_nxV,&local_60);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
      _objc_storeStrong(&local_40,0);
      _objc_destroyWeak(auStack_38);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

