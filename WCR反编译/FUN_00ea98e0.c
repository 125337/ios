// FUN_00ea98e0 @ 00ea98e0

void FUN_00ea98e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_1);
  local_78 = 0;
  local_70 = param_2;
  _objc_storeStrong(&local_78,param_3);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_4);
  if (DAT_028e2938 != (code *)0x0) {
    (*DAT_028e2938)(local_68,local_70,local_78,local_80);
  }
  lVar2 = local_78;
  local_40 = &cf_m_nsUsrName;
  local_38 = &cf_username;
  local_30 = &cf_userName;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  FUN_00eabd24();
  _objc_retainAutoreleasedReturnValue();
  local_88 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    lVar2 = local_68;
    FUN_00eacaa4(local_68,&cf_m_data);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_00eacaa4();
    _objc_retainAutoreleasedReturnValue();
    local_90 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_90;
    local_48 = &cf_m_nsUsrName;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,1
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_00eabd24();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_88;
    local_88 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_90,0);
  }
  uVar4 = local_80;
  local_60 = &cf_maskTruename;
  local_58 = &cf_maskTrueName;
  local_50 = &cf_receiverMaskTrueName;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,3);
  _objc_retainAutoreleasedReturnValue();
  FUN_00eabd24();
  _objc_retainAutoreleasedReturnValue();
  local_98 = uVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineAuthNameHelper_026ce2e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAuthNameHelper_026ce2e8,PTR_s_lastCharFromMaskedPayLabel__026ab170,local_98
            );
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_88;
  local_a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    puVar1 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    if (puVar1 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineAuthNameHelper_026ce2e8,PTR_s_rememberLastChar_forUser__026ab178,
                 local_a0,local_88);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAuthNameHelper_026ce2e8,PTR_s_scrapeFromPayTransferViewControl_026ab180,
             local_68);
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

