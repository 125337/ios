// FUN_00f58d38 @ 00f58d38

void FUN_00f58d38(void)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  local_60 = &cf_mp_weixin_qq_com_mp_getappmsgad;
  local_58 = &cf_wxsnsdy_wxs_qq_com;
  local_50 = &cf_wxsnsdy_tc_qq_com;
  local_48 = &cf_wxsnsdy_video_qq_com;
  local_40 = &cf_ad_data;
  local_38 = &cf__wxfile___usr_ad_;
  local_30 = &cf__ad_wx_com;
  local_28 = &cf_lib_WASplashadWorker_js;
  local_20 = &cf_lib_WAAppAd_js;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e2db8;
  DAT_028e2db8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

