// createPackNamed:error: @ 0108b278

/* Function Stack Size: 0x20 bytes */

ID WCRefineLocalEmoticonStore::createPackNamed_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  undefined *puVar6;
  ID local_88;
  long local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  ID local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  ID *local_50;
  cfstringStruct *local_48;
  SEL local_40;
  ID local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = (cfstringStruct *)0x0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_ensureRootDirectoryExists__026a3c70,0);
  pcVar1 = local_48;
  FUN_0108688c();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  FUN_01085b64();
  if ((((ulong)pcVar1 & 1) == 0) &&
     (pcVar1 = local_58,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_58,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__),
     ((ulong)pcVar1 & 1) == 0)) {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_absolutePathFromRelative__026ae2c0,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_68 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_58;
    local_70 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = pcVar1;
    local_80 = 2;
    do {
      puVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_fileExistsAtPath__026ca630,local_68);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_68,1,0,local_50);
        if (((ulong)puVar3 & 1) == 0) {
          local_30 = (cfstringStruct *)0x0;
          local_5c = 1;
        }
        else {
          IVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_packOrderMutable_026ae278);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_78;
          local_88 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
          if ((pcVar1 != (cfstringStruct *)0x0) &&
             (IVar2 = local_88,
             (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_containsObject__0269cbb8,local_78)
             , (IVar2 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addObject__0269d180,local_78);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_saveIndex_026ae268);
          FUN_0107ad08();
          pcVar1 = local_78;
          (*(code *)PTR__objc_retain_02578638)();
          local_30 = pcVar1;
          local_5c = 1;
          _objc_storeStrong(&local_88,0);
        }
        goto LAB_0108b694;
      }
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____ld);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_78;
      local_78 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      IVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_absolutePathFromRelative__026ae2c0,local_78);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_68;
      local_68 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar3 = PTR__OBJC_CLASS___NSError_026ce470;
      local_80 = local_80 + 1;
    } while (local_80 < 100);
    if (local_50 != (ID *)0x0) {
      local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_20 = &cf_elR_h_S;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLocalEmoticon,3);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_50 = (ID)puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    local_30 = (cfstringStruct *)0x0;
    local_5c = 1;
LAB_0108b694:
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = &cf___ungrouped__;
    local_5c = 1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_30;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

