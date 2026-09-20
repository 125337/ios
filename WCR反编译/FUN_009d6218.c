// FUN_009d6218 @ 009d6218

void FUN_009d6218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_148;
  cfstringStruct *local_b8;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  byte local_59;
  cfstringStruct *local_58;
  undefined4 local_4c;
  long local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  uVar3 = *(ulong *)(param_1 + 0x20);
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_finished_026a15b0);
  if ((uVar3 & 1) == 0) {
    if ((local_40 == (cfstringStruct *)0x0) && (local_30 != (cfstringStruct *)0x0)) {
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_68;
      puVar5 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLByAppendingPathComponent__026a7b98);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_78 = 0;
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_78,lVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_78 == 0) {
        local_148 = local_70;
      }
      else {
        local_148 = (undefined *)0x0;
      }
      FUN_009d255c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),local_148,
                   local_78);
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      local_4c = 0;
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      local_59 = 0;
      bVar1 = local_40 == (cfstringStruct *)0x0;
      if (bVar1) {
        local_b8 = &cf_N_1Y_;
        FUN_009c701c(&cf_N_1Y_,0xfffffffffffffffe);
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_b8;
      }
      else {
        local_b8 = local_40;
      }
      local_59 = bVar1;
      FUN_009d255c(uVar9,uVar8,0,local_b8);
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      local_4c = 1;
    }
  }
  else {
    local_4c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

