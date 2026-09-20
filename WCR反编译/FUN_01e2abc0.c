// FUN_01e2abc0 @ 01e2abc0

void FUN_01e2abc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = &cf_CameraScanViewController;
  local_60 = &cf_kb;
  local_a0 = &cf_KindaViewController;
  local_58 = &cf_6eN>k;
  local_98 = &cf_WCTimeLineViewController;
  local_50 = &cf_gSW;
  local_90 = &cf_WCFinderTimelineTabViewController;
  local_48 = &cf_S;
  local_88 = &cf_WCFinderLiveHomePageViewController;
  local_40 = &cf_vd;
  local_80 = &cf_WeNoteFlutterViewController;
  local_38 = &cf___;
  local_78 = &cf_NewPersonalQRCodeViewController;
  local_30 = &cf_bvN_x;
  local_70 = &cf_WCAccountLoginUsersViewController;
  local_28 = &cf_Rbc_S;
  local_68 = &cf_WCRefineRootViewController;
  local_20 = &cf_WCRefine;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_60,&local_a8,9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e4798;
  DAT_028e4798 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

