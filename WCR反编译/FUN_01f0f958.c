// FUN_01f0f958 @ 01f0f958

void FUN_01f0f958(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = &cf_public_html;
  local_48 = &cf_public_text;
  local_40 = &cf_public_plain_text;
  local_38 = &cf_public_json;
  local_30 = &cf_public_data;
  local_28 = &cf_public_item;
  local_20 = &cf_net_daringfireball_markdown;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_51 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithArray__0269eab8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,&cf_public_zip_archive)
    ;
  }
  puVar2 = local_60;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar2);
  return;
}

