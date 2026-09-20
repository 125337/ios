// FUN_017af468 @ 017af468

byte FUN_017af468(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_80;
  undefined1 *local_38 [3];
  undefined1 *local_20;
  undefined1 *local_18;
  
  if ((DAT_028e4201 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithContentsOfFile__026a3348,
               &cf__System_Library_CoreServices_SystemVersion_plist);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_ProductVersion);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined1 *)0x0) {
      local_80 = (undefined1 *)((long)&MACH_HEADER.filetype + 3);
    }
    else {
      puVar2 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    DAT_028e4200 = 0xe < (long)local_80;
    DAT_028e4201 = 1;
    _objc_storeStrong(local_38);
    _objc_storeStrong(&local_20,0);
    _objc_storeStrong(&local_18,0);
  }
  return DAT_028e4200 & 1;
}

