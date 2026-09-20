// openClipboard @ 019ab874

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::openClipboard(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [15];
  undefined1 local_99;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  undefined1 *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_clipboardPaths_026ba1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar3 == (undefined1 *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__4_g_NzzYb_cSY6R_);
    local_3c = 1;
  }
  else {
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_clipboardMode_026ba658);
    local_48 = &cf_jRR;
    if (puVar3 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_48 = &cf_Y6R;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_clipboardPaths_026ba1e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__4_g_);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_initWeak(auStack_58,local_28);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRFileSheetAction_026cf1c0;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_019abdd8;
    local_80 = &DAT_0257be28;
    local_60 = puVar2;
    _objc_copyWeak(auStack_78,auStack_58);
    local_99 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_actionWithTitle_handler__026b9738,&cf__40RS_MRvU_,&local_98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    local_99 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_60;
    puVar1 = PTR_WCRFileSheetAction_026cf1c0;
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_019abe28;
    local_b8 = &DAT_02579c60;
    puVar3 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar3;
    _objc_copyWeak(auStack_a8,auStack_58);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_destructiveActionWithTitle_handl_026ba5d8,&cf_nzz_4_g,&local_d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_0199377c(local_28,local_50,local_60,&cf_Sm);
    _objc_destroyWeak(auStack_a8);
    _objc_storeStrong(&local_b0);
    _objc_destroyWeak(auStack_78);
    _objc_storeStrong(&local_60,0);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

