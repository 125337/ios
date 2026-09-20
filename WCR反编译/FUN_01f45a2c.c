// FUN_01f45a2c @ 01f45a2c

void FUN_01f45a2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_026ce418;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_28 != (undefined *)0x0) {
    local_30 = 0;
    local_38 = 0;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithContentsOfFile_encodin_026a3340,
               local_28,4,&local_38);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_30,local_38);
    puVar1 = DAT_028e48a8;
    DAT_028e48a8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_30,0);
  }
  if (DAT_028e48a8 == (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_builtInUpdateLog_026c8ec0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e48a8;
    DAT_028e48a8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

