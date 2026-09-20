// refreshIdentityMetadataAndAvatar @ 01121574

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendManager::refreshIdentityMetadataAndAvatar(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_70;
  ID local_68;
  ID local_60;
  undefined4 local_54;
  ID local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_notificationDisguiseIdentityUser_026a6818);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  FUN_01119e60();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_40 != 0) {
    IVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (IVar1 != 0) {
      IVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_URLByDeletingLastPathComponent_026af050);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_50,0);
    }
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_54 = 1;
  }
  else {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_resolvedDisplayNameForUsername__026af040,local_38);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_40 == 0) {
      local_54 = 1;
    }
    else {
      IVar1 = local_38;
      FUN_011194d8();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      local_60 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((IVar1 & 1) == 0) {
        local_54 = 1;
      }
      else {
        IVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_URLByDeletingLastPathComponent_026af050);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_68 = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar1);
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_URLByDeletingLastPathComponent_026af050);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_createDirectoryAtURL_withInterme_026aafa0,IVar1,1,0);
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        IVar1 = local_60;
        _UIImageJPEGRepresentation(DAT_02323c60);
        _objc_retainAutoreleasedReturnValue();
        local_70 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_writeToURL_options_error__026af080,local_68,1,0);
        if ((IVar1 & 1) != 0) {
          IVar1 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_store_026aeee0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar2);
          (*(code *)PTR__objc_release_02578630)(IVar1);
        }
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
        local_54 = 0;
      }
      _objc_storeStrong(&local_60,0);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

