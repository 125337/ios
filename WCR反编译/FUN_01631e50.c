// FUN_01631e50 @ 01631e50

void FUN_01631e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *local_b8;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___wcr___);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  local_60 = puVar1;
  FUN_01625a38(local_40,local_48,puVar1,local_58,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_switch,&cf__wcrCustomKind);
  local_38 = &cf_key;
  if (local_50 == (cfstringStruct *)0x0) {
    local_b8 = &cf___;
  }
  else {
    local_b8 = local_50;
  }
  local_28 = local_b8;
  local_30 = &cf_storage;
  local_20 = &cf_wcr;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_28,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf__wcrCustomPayload);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,uVar2);
  return;
}

