// FUN_009c204c @ 009c204c

void FUN_009c204c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_48;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 != 0) {
    _os_unfair_lock_lock(&DAT_028e2800);
    if (DAT_028e27f8 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = DAT_028e27f8;
      DAT_028e27f8 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_copy_0269d150);
    local_48 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_48 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e27f8,PTR_s_setObject_forKeyedSubscript__0269d248,local_48,local_18);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    _os_unfair_lock_unlock(&DAT_028e2800);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

