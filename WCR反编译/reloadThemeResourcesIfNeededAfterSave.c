// reloadThemeResourcesIfNeededAfterSave @ 0196b788

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::reloadThemeResourcesIfNeededAfterSave
               (ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  uint local_a8;
  ID local_90;
  ID local_88;
  undefined *local_80;
  undefined4 local_78;
  byte local_71;
  ID local_70;
  undefined *local_68;
  SEL local_60;
  ID local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineWechatThemeStore_026ce6d0;
  local_60 = param_2;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  local_71 = 0;
  bVar1 = true;
  if (puVar2 != (undefined *)0x0) {
    IVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_filePath_026b9cb0);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar4 == 0;
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if (bVar1) {
    local_78 = 1;
  }
  else {
    puVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_stringByStandardizingPath_026cab38);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_58;
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_filePath_026b9cb0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_88 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_88;
    puVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_hasPrefix__0269d320);
    local_a8 = 0;
    if ((IVar4 & 1) == 0) {
      IVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,local_80);
      local_a8 = (uint)IVar4 ^ 1;
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_a8 & 1) == 0) {
      IVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_filePath_026b9cb0);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_90 = IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      local_50 = &cf_xml;
      local_48 = &cf_css;
      local_40 = &cf_png;
      local_38 = &cf_svg;
      local_30 = &cf_car;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        local_78 = 1;
      }
      else {
        puVar2 = PTR_WCRefineWechatThemeStore_026ce6d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (((ulong)puVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineOfficialTheme_026ce620,PTR_s_reloadLocalColorFiles__026ba0f0);
          _CFNotificationCenterGetDarwinNotifyCenter();
          _CFNotificationCenterPostNotification();
        }
        local_78 = 0;
      }
      _objc_storeStrong(&local_90,0);
    }
    else {
      local_78 = 1;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

