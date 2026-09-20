// renameItemAtPath:toName:error: @ 015ba84c

/* Function Stack Size: 0x28 bytes */

bool WCRefineVoicePackStore::renameItemAtPath_toName_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_98;
  byte local_89;
  ID local_88;
  long local_80;
  undefined4 local_74;
  long local_70;
  ID *local_68;
  long local_60;
  long local_58;
  SEL local_50;
  ID local_48;
  byte local_39;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  lVar2 = local_60;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_68 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSError_026ce470;
    if (local_68 != (ID *)0x0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_TyeHe;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,4);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_68 = (ID)puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_39 = 0;
    local_74 = 1;
  }
  else {
    lVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    IVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_relativePathFromAbsolute__026ae380,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_88 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar4 = local_48;
    local_89 = (byte)puVar5;
    if (((ulong)puVar5 & 1) != 0) {
      lVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_invalidateFolderStatsCacheForPat_026b0d20);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      IVar4 = local_48;
      lVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_invalidateFolderStatsCacheForPat_026b0d20);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      IVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_relativePathFromAbsolute__026ae380,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_98 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_rebaseMetadataFromRelativePath_t_026b0d28,local_88,IVar4);
      _objc_storeStrong(&local_98,0);
    }
    local_39 = local_89 & 1;
    local_74 = 1;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_39 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

