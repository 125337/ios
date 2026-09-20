// summaryForTheme: @ 01fbd804

/* Function Stack Size: 0x18 bytes */

ID WCRefineWechatThemeManagerViewController::summaryForTheme_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_1a0;
  undefined *local_198;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined *local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  SEL local_e0;
  ID local_d8;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  local_e0 = param_2;
  local_d8 = param_1;
  _objc_storeStrong(&local_e8,param_3);
  puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_100 = 0;
  local_50 = &cf_png;
  local_48 = &cf_svg;
  local_40 = &cf_css;
  local_38 = &cf_xml;
  local_30 = &cf_car;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_108 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_150,0,0x40);
  puVar1 = local_f8;
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d0,0x10);
  if (local_198 != (undefined *)0x0) {
    lVar5 = *local_140;
    local_1a0 = (undefined *)0x0;
    do {
      do {
        if (*local_140 - lVar5 != 0) {
          _objc_enumerationMutation(*local_140 - lVar5,puVar1);
        }
        puVar2 = local_108;
        uVar6 = *(undefined8 *)(local_148 + (long)local_1a0 * 8);
        local_110 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        if (((ulong)puVar2 & 1) != 0) {
          local_100 = local_100 + 1;
        }
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d0,0x10)
      ;
      local_1a0 = (undefined *)0x0;
    } while (local_198 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

