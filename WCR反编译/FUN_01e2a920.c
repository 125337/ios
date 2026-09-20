// FUN_01e2a920 @ 01e2a920

void FUN_01e2a920(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
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
  local_148 = _WCRSuperFloatActionRegionScreenshot;
  local_b8 = &cf__SW_bV;
  local_140 = _WCRSuperFloatActionGlobalScreenshot;
  local_b0 = &cf_hQ___bV;
  local_138 = _WCRSuperFloatActionGestureScreenshot;
  local_a8 = &cf_KbR_bV;
  local_130 = _WCRSuperFloatActionScreenshotTranslate;
  local_a0 = &cf__bV_;
  local_128 = _WCRSuperFloatActionGoBack;
  local_98 = &cf_V;
  local_120 = _WCRSuperFloatActionGoHome;
  local_90 = &cf_V0Ru;
  local_118 = _WCRSuperFloatActionAddFriend;
  local_88 = &cf_mRgS;
  local_110 = _WCRSuperFloatActionOpenURL;
  local_80 = &cf_URLScheme;
  local_108 = _WCRSuperFloatActionManageButtons;
  local_78 = &cf__t;
  local_100 = _WCRSuperFloatActionOpenSetting;
  local_70 = &cf_n_;
  local_f8 = _WCRSuperFloatActionAddAction;
  local_68 = &cf_mR;
  local_f0 = _WCRSuperFloatActionRestart;
  local_60 = &cf__T;
  local_e8 = _WCRSuperFloatActionClearUnread;
  local_58 = &cf___;
  local_e0 = _WCRSuperFloatActionClearSession;
  local_50 = &cf_ntO;
  local_d8 = _WCRSuperFloatActionPluginHub;
  local_48 = &cf_6e_;
  local_d0 = _WCRSuperFloatActionPluginSearch;
  local_40 = &cf_cNd__;
  local_c8 = _WCRSuperFloatActionSwitchPet;
  local_38 = &cf_Rbc_ir;
  local_c0 = _WCRSuperFloatActionChangeFont;
  local_30 = &cf_O9eW_SO;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_b8,&local_148,0x12);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e4788;
  DAT_028e4788 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

