// confirmRename @ 01c76eb0

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::confirmRename(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_d8;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_renameAlert_026b7038);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_30;
  if (IVar2 == 0) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedFile_026c26d8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByAppendingPathExtension__026a4580);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    local_30 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  puVar6 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
  local_38 = (cfstringStruct *)0x0;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedFile_026c26d8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_renameMediaFileName_toName_error_026c26f8,IVar1,local_30,&local_40);
  _objc_storeStrong(&local_38,local_40);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  puVar3 = PTR_WCRefineHelper_026ce000;
  if (((ulong)puVar6 & 1) == 0) {
    pcVar7 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar7;
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_d8 = &cf_TyeHeb_X__W;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78,local_d8);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedFile_026c26d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_replacePinnedFile_withFile__026c2700,IVar2,local_30);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSelectedFile__026c26a0,local_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__TTbR);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadFiles_026c25e8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRenameAlert__026b7028);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

