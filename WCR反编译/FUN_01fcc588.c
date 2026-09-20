// FUN_01fcc588 @ 01fcc588

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01fcc588(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  DAT_028e4948 = DAT_028e4948 + 1;
  DAT_028e4929 = 0;
  DAT_028e4944 = 1;
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_configFilePath_0269f938);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)0x0;
  local_28 = uVar2;
  FUN_01fcc234();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar1 = local_30;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
  puVar1 = DAT_028e4908;
  DAT_028e4908 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  DAT_028e4944 = 0;
  FUN_01fcc320(DAT_028e4908);
  FUN_01fcc414(DAT_028e4908);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

