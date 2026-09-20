// FUN_00fc8a48 @ 00fc8a48

undefined * FUN_00fc8a48(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileSize_02578028);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedLongLongValue_0269d6b8);
    if (((ulong)puVar2 & 1) == 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_unsignedLongLongValue_0269d6b8);
      local_18 = puVar2;
    }
    local_24 = 1;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

