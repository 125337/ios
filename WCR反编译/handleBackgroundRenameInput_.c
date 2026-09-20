// handleBackgroundRenameInput: @ 01f606fc

/* Function Stack Size: 0x18 bytes */

void WCRVoiceBackgroundListViewController::handleBackgroundRenameInput_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *local_120;
  uint local_f0;
  uint local_c4;
  cfstringStruct *local_a8;
  ID local_90;
  cfstringStruct *local_88;
  byte local_79;
  undefined *local_78;
  cfstringStruct *local_70;
  byte local_61;
  undefined *local_60;
  ID local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  ID local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_28;
  _objc_getAssociatedObject(local_28,PTR_s_renameBackgroundAtPath__026c95b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_38;
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a8 = &::cf___;
  }
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(local_a8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((IVar1 == 0) ||
     (pcVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    local_4c = 1;
  }
  else {
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    IVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByAppendingPathExtension__026a4580);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_40);
    local_61 = 0;
    local_c4 = 0;
    if ((IVar1 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c4 = (uint)puVar3;
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_c4 & 1) == 0) {
      local_70 = (cfstringStruct *)0x0;
      IVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_40);
      local_79 = 0;
      local_f0 = 0;
      if ((IVar1 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_88 = local_70;
        local_78 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_storeStrong(&local_70,local_88);
        local_f0 = (uint)puVar3 ^ 1;
      }
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      puVar3 = PTR_WCRefineHelper_026ce000;
      if ((local_f0 & 1) == 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (((ulong)puVar8 & 1) != 0) {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pinnedNames_026c9588);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_90 = IVar5;
        (*(code *)PTR__objc_release_02578630)(IVar1);
        IVar1 = local_90;
        IVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_indexOfObject__0269e870);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        if (IVar1 != 0x7fffffffffffffff) {
          IVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setObject_atIndexedSubscript__0269e970,IVar5,IVar1);
          (*(code *)PTR__objc_release_02578630)(IVar5);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_savePinnedNames__026c95d8,local_90);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
        _objc_storeStrong(&local_90,0);
        local_4c = 0;
      }
      else {
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_localizedDescription_0269ced0);
        _objc_retainAutoreleasedReturnValue();
        local_120 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_120 = &cf__TT1Y_;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78,local_120);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_4c = 1;
      }
      _objc_storeStrong(&local_70,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Ty_X__W);
      local_4c = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

