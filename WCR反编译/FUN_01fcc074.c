// FUN_01fcc074 @ 01fcc074

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01fcc074(ulong *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined *local_30;
  ulong local_28;
  ulong *local_20;
  ulong *local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if ((DAT_028e4908 == (undefined *)0x0) || (puVar4 = param_1, (DAT_028e4944 & 1) != 0)) {
    uVar2 = param_1[5];
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_configFilePath_0269f938);
    _objc_retainAutoreleasedReturnValue();
    local_30 = (undefined *)0x0;
    local_28 = uVar2;
    FUN_01fcc234();
    if ((uVar2 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar1 = local_30;
      local_30 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if (local_30 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
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
    puVar4 = &local_28;
    _objc_storeStrong(puVar4,0);
  }
  FUN_01fcc4ac();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1[4] + 8) + 0x28);
  *(ulong **)(*(long *)(param_1[4] + 8) + 0x28) = puVar4;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  return;
}

