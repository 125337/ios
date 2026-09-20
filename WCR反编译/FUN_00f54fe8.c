// FUN_00f54fe8 @ 00f54fe8

ulong FUN_00f54fe8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_68;
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
  local_68 = 0;
  _objc_storeStrong(&local_68,param_1);
  uVar2 = local_68;
  local_60 = &cf__wxfile___usr_ad_;
  local_58 = &cf__ad_wx_com;
  local_50 = &cf_lib_WASplashadWorker_js;
  local_48 = &cf_lib_WAAppAd_js;
  local_40 = &cf_admb;
  local_38 = &cf_motivat;
  local_30 = &cf_reward;
  local_28 = &cf_playable;
  local_20 = &cf_MagicAd;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,9);
  _objc_retainAutoreleasedReturnValue();
  FUN_00f53074();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return uVar2 & 0xffffffff;
}

