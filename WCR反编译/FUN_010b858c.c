// FUN_010b858c @ 010b858c

void FUN_010b858c(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  char local_59;
  long local_58;
  undefined4 local_50;
  undefined1 local_4a;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_stringByAppendingPathComponent__026cab30,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_ensureDirectoryAtPath__026ae630,uVar3);
  uVar3 = local_38;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____dat);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_readBrowseIndexIfNeeded_026ae680);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  FUN_010b8aa8(uVar3,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  local_48 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_browseRecords_026ae688);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = (byte)uVar8 ^ 1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  local_49 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_prepareBrowseIndexMutation_026ae690);
  }
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_writeToFile_atomically__0269f928,local_40,1);
  local_4a = (undefined1)uVar6;
  if ((uVar6 & 1) == 0) {
    local_50 = 1;
  }
  else {
    local_59 = '\0';
    bVar2 = false;
    if (((local_49 & 1) != 0) &&
       (bVar2 = false, *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) != 0)) {
      lVar7 = *(long *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_browseRecords_026ae688);
      _objc_retainAutoreleasedReturnValue();
      local_59 = '\x01';
      bVar2 = lVar7 != 0;
      local_58 = lVar7;
    }
    if (local_59 != '\0') {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_browseRecords_026ae688);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_scheduleBrowseIndexSave_026ae698);
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_count_0269cfe0);
    if (lVar7 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_010b8c10;
      local_88 = &DAT_025851f8;
      local_68 = *(undefined8 *)(param_1 + 0x58);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      local_80 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      local_78 = uVar8;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = uVar3;
      _dispatch_async(uVar5,&local_a0);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_80,0);
    }
    local_50 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

