// deleteItemAtPath:error: @ 015bb634

/* Function Stack Size: 0x20 bytes */

bool WCRefineVoicePackStore::deleteItemAtPath_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long local_50;
  ID local_48;
  undefined4 local_3c;
  ID *local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_relativePathFromAbsolute__026ae380,local_30);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_50 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_clearBindingForRelativePath__026b0d38,local_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_removeRecentRelativePath__026b0d40,local_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_removeFavoriteRelativePath__026b0cc0,local_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_setPinned_forRelativePath__026b0cd8,0,local_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_invalidateFolderStatsCacheForPat_026b0d20,local_50);
    }
    local_11 = (byte)puVar4 & 1;
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

