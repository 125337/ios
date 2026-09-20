// FUN_01868ed8 @ 01868ed8

void FUN_01868ed8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = &cf_filehelper;
  local_68 = &cf_weixin;
  local_60 = &cf_notification_messages;
  local_58 = &cf_fmessage;
  local_50 = &cf_medianote;
  local_48 = &cf_weixinreminder;
  local_40 = &cf_floatbottle;
  local_38 = &cf_qqmail;
  local_30 = &cf_newsapp;
  local_28 = &cf_blogapp;
  local_20 = &cf_masssendapp;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,0xb
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e42c8;
  DAT_028e42c8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

