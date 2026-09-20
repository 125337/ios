// getBackupFiles @ 01ca71f4

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginManagementViewController::getBackupFiles(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_50;
  undefined *local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getBackupDirectory_026c2db0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_40;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_stringByAppendingPathComponent__026cab30,&cf_com_qimiao_WCRefine_plist);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_48;
  local_50 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_fileExistsAtPath__026ca630,IVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
  }
  else {
    local_20 = &cf_com_qimiao_WCRefine_plist;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_28;
}

