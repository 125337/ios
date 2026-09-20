// finishWithResult:error: @ 01078064

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRXHSWebExtractSession::finishWithResult_error_
          (WCRXHSWebExtractSession *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  bool bVar2;
  cfstringStruct **ppcVar3;
  ulong uVar4;
  undefined8 in_d0;
  int local_160;
  int local_15c;
  undefined *local_150;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  byte local_fc;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_b8;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  byte local_8c;
  byte local_8b;
  byte local_8a;
  byte local_89;
  ulong local_88;
  byte local_79;
  cfstringStruct **local_78;
  cfstringStruct **local_70;
  cfstringStruct *local_68;
  undefined4 local_5c;
  undefined *local_58;
  ulong local_50;
  SEL local_48;
  cfstringStruct **local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = (cfstringStruct **)param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = (undefined *)0x0;
  _objc_storeStrong(&local_58,param_4);
  ppcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_finished_026a15b0);
  if (((ulong)ppcVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFinished__026a15b8,1);
    ppcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_platform_026ad958);
    if (ppcVar3 == (cfstringStruct **)((long)&MACH_HEADER.magic + 1)) {
      local_d8 = &cf_douyin;
    }
    else {
      ppcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_platform_026ad958);
      if (ppcVar3 == (cfstringStruct **)((long)&MACH_HEADER.cputype + 1)) {
        local_e0 = &cf_tiktok;
      }
      else {
        ppcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_platform_026ad958);
        local_e0 = &cf_instagram;
        if (ppcVar3 != (cfstringStruct **)((long)&MACH_HEADER.cputype + 2)) {
          local_e0 = &cf_xhs;
        }
      }
      local_d8 = local_e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_d8;
    ppcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    local_70 = ppcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCompletion__0269fdc8);
    ppcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_timer_026a4950);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTimer__026a4970,0);
    ppcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = ppcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setWebView__026a8f28,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setNavigationDelegate__026a8f08,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_stopLoading_026a8e68);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_removeFromSuperview_026ca800);
    ppcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_platform_026ad958);
    if (ppcVar3 == (cfstringStruct **)((long)&MACH_HEADER.magic + 1)) {
      _CFAbsoluteTimeGetCurrent(0);
      DAT_028e31e0 = in_d0;
    }
    if (local_70 != (cfstringStruct **)0x0) {
      ppcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_finishOnCardPlayback_026ae1b0);
      local_89 = 0;
      local_fc = 0;
      if (((ulong)ppcVar3 & 1) != 0) {
        uVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_browserPlaybackURL_026ad968);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_88 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_fc = 0;
        if (uVar4 != 0) {
          uVar4 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isImageNote_026ad960);
          local_fc = (byte)uVar4 ^ 1;
        }
      }
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      local_79 = local_fc & 1;
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasMedia_026ada58);
      if (((uVar4 & 1) == 0) && ((local_79 & 1) == 0)) {
        ppcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_platform_026ad958);
        local_8a = ppcVar3 == (cfstringStruct **)((long)&MACH_HEADER.magic + 1);
        ppcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_platform_026ad958);
        local_8b = ppcVar3 == (cfstringStruct **)((long)&MACH_HEADER.cputype + 1);
        ppcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_platform_026ad958);
        local_8c = ppcVar3 == (cfstringStruct **)((long)&MACH_HEADER.cputype + 2);
        if ((local_8a & 1) == 0) {
          if ((local_8b & 1) == 0) {
            local_118 = &cf_instagram;
            if (!(bool)local_8c) {
              local_118 = &cf_xhs;
            }
          }
          else {
            local_118 = &cf_tiktok;
          }
          local_110 = local_118;
        }
        else {
          local_110 = &cf_douyin;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = local_110;
        if ((local_8a & 1) == 0) {
          if ((local_8b & 1) == 0) {
            local_130 = &cf_I;
            if ((local_8c & 1) == 0) {
              local_130 = &cf___fNg1Y_;
            }
          }
          else {
            local_130 = &::cf_T;
          }
          local_128 = local_130;
        }
        else {
          local_128 = &cf_bg1Y_;
        }
        (*(code *)PTR__objc_retain_02578638)();
        ppcVar3 = local_70;
        local_150 = PTR__OBJC_CLASS___NSError_026ce470;
        local_a0 = local_128;
        bVar2 = false;
        bVar1 = false;
        if (local_58 == (undefined *)0x0) {
          if ((local_8a & 1) == 0) {
            if ((local_8b & 1) == 0) {
              local_160 = -10;
              if ((local_8c & 1) == 0) {
                local_160 = -6;
              }
            }
            else {
              local_160 = -9;
            }
            local_15c = local_160;
          }
          else {
            local_15c = -5;
          }
          local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
          local_30 = local_128;
          local_a8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
                     (long)local_15c);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_b8 = local_150;
        }
        else {
          local_150 = local_58;
        }
        (*(code *)ppcVar3[2])(ppcVar3,0,local_150);
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        _objc_storeStrong(&local_a0);
        ppcVar3 = &local_98;
        _objc_storeStrong(ppcVar3,0);
      }
      else {
        ppcVar3 = local_70;
        (*(code *)local_70[2])(local_70,local_50,0);
      }
    }
    FUN_0103cbd8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(ppcVar3);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  else {
    local_5c = 1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

