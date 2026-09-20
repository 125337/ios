// FUN_01635700 @ 01635700

void FUN_01635700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  undefined *local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_2);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_3);
  local_38 = &cf_title;
  if (local_40 == (cfstringStruct *)0x0) {
    local_80 = &cf___;
  }
  else {
    local_80 = local_40;
  }
  local_28 = local_80;
  local_30 = &cf_url;
  if (local_48 == (cfstringStruct *)0x0) {
    local_90 = &cf___;
  }
  else {
    local_90 = local_48;
  }
  local_20 = local_90;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_28,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_58 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf_desc);
  }
  puVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar1);
  return;
}

