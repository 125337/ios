// saveImage:source: @ 01aa0e78

/* Function Stack Size: 0x20 bytes */

void WCRGroupAvatarPickerCoordinator::saveImage_source_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_f0;
  ulong local_d0;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  byte local_49;
  ID local_48;
  cfstringStruct *local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_49 = 0;
  bVar1 = true;
  if (local_38 != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar2 == 0;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  puVar3 = PTR_WCRefineGroup_026ce630;
  if (bVar1) {
    local_50 = 1;
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_avatarRelativePathForGroupId_ext_026bdaf0,IVar2,&cf_png);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar3 = local_58;
    FUN_01aa13c8();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_createDirectoryAtPath_withInterm_0269e230,puVar3,1,0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar5 = local_38;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_71 = 0;
    local_d0 = uVar5;
    if (uVar5 == 0) {
      local_d0 = local_38;
      _UIImageJPEGRepresentation(0x3fee666666666666);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_d0;
    }
    local_71 = uVar5 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_d0;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_writeToFile_atomically__0269f928,local_60,1);
    if ((uVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_4YPOX_1Y_);
      local_50 = 1;
    }
    else {
      puVar3 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_groupForId__026a27e0);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar4;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_copy_0269d150);
      pcVar6 = local_40;
      local_88 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_f0 = &cf_photo;
      }
      else {
        local_f0 = local_40;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setAvatarSource__026bdab0,local_f0);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setAvatarValue__026bdab8,local_58);
      puVar3 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finish_026bdaf8);
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      local_50 = 0;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

