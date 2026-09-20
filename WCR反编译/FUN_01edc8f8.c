// FUN_01edc8f8 @ 01edc8f8

void FUN_01edc8f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_b8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = (undefined *)0x0;
  local_70 = param_1;
  _objc_storeStrong(&local_78);
  puVar1 = local_78;
  local_80 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_dataUsingEncoding__026a12e8,4);
  _objc_retainAutoreleasedReturnValue();
  local_91 = 0;
  local_b8 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_b8 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_data_0269d850);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_b8;
  }
  local_91 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_b8;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  local_68 = &cf_Content_Type;
  local_48 = &cf_text_plain_charset_utf_8;
  local_60 = &cf_Content_Length;
  puVar3 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithUnsignedInteger__0269e4d0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = &cf_Access_Control_Allow_Origin;
  local_38 = &cf__;
  local_50 = &cf_Cache_Control;
  local_30 = &cf_no_cache;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_48,&local_68,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_initWithURL_statusCode_HTTPVersi_026a1c98,uVar5,200,&cf_HTTP_1_1);
  local_a0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_didReceiveResponse__026a1ca0,local_a0);
  puVar1 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_didReceiveData__026a1ca8,local_88);
  }
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x28),PTR_s_didFinish_026a1cb0);
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

