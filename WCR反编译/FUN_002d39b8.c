// FUN_002d39b8 @ 002d39b8

void FUN_002d39b8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined1 *puVar2;
  cfstringStruct *local_180;
  cfstringStruct *local_158;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  int local_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f8,param_1);
  if ((local_f8 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_f8, (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = &cf___;
    local_108 = 1;
  }
  else {
    pcVar1 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_containsString__0269d0b0,&cf__);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_110 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
      puVar2 = (undefined1 *)((long)&pcVar1[-1].field3_0x18 + 6);
      if (puVar2 == (undefined1 *)0x0) {
        pcVar1 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_158 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_158 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_f0 = local_158;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        puVar2 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        local_108 = 1;
      }
      else {
        local_108 = 0;
      }
      _objc_storeStrong(puVar2,&local_110,0);
      if (local_108 != 0) goto LAB_002d3dd8;
    }
    local_e8 = &cf_WCPayMainViewControllerV2;
    local_88 = &cf__eN;
    local_e0 = &cf_WCFinderLiveHomePageViewController;
    local_80 = &cf_vd;
    local_d8 = &cf_WCTimeLineViewController;
    local_78 = &cf_gSW;
    local_d0 = &cf_WCFinderTimelineTabViewController;
    local_70 = &cf_S;
    local_c8 = &cf_KindaViewController;
    local_68 = &cf_6eN>k;
    local_c0 = &cf_CameraScanViewController;
    local_60 = &cf_kb;
    local_b8 = &cf_WeNoteFlutterViewController;
    local_58 = &cf___;
    local_b0 = &cf_WCAccountLoginUsersViewController;
    local_50 = &cf_Rbc_S;
    local_a8 = &cf_WCPluginsViewController;
    local_48 = &cf_cN6e_;
    local_a0 = &cf_WCRefinePluginAggregateSearch;
    local_40 = &cf_d__cN;
    local_98 = &cf_WCRefineWeChatOfficialSearch;
    local_38 = &cf__ed__;
    local_90 = &cf_NewPersonalQRCodeViewController;
    local_30 = &cf_bvN_x;
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_88,&local_e8,0xc);
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_objectForKeyedSubscript__0269d098,local_f8);
    _objc_retainAutoreleasedReturnValue();
    local_180 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_180 = local_f8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_180;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_108 = 1;
    _objc_storeStrong(&local_118,0);
  }
LAB_002d3dd8:
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_f0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

