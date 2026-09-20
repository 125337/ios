// FUN_01502820 @ 01502820

void FUN_01502820(void)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  local_68 = &cf_voicemsg;
  local_60 = &cf_appmsg;
  local_58 = &cf_imgmsg;
  local_50 = &cf_videomsg;
  local_48 = &cf_appattach;
  local_40 = &cf_refermsg;
  local_38 = &cf_patmsg;
  local_30 = &cf_<msg;
  local_28 = &cf_emoji;
  local_20 = &cf_emojimd5;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,10)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e37f8;
  DAT_028e37f8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

