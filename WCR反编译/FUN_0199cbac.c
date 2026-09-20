// FUN_0199cbac @ 0199cbac

void FUN_0199cbac(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_d4;
  byte local_ac;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  byte local_68;
  undefined8 local_60;
  long local_58;
  byte local_4a;
  undefined1 local_49;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  lVar4 = param_1 + 0x40;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar4;
  if (lVar4 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isCancelled_026a1c20);
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_fileExistsAtPath__026ca630,*(undefined8 *)(param_1 + 0x28));
      local_49 = SUB81(puVar2,0);
      local_4a = 0;
      if ((*(long *)(param_1 + 0x48) == 0) && (((ulong)puVar2 & 1) != 0)) {
        uVar1 = *(ulong *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isCancelled_026a1c20);
        local_ac = 0;
        if ((uVar1 & 1) == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          FUN_0199a634(uVar3,*(undefined8 *)(param_1 + 0x28),1,0);
          local_ac = (byte)uVar3;
        }
        local_4a = local_ac & 1;
      }
      else if ((*(long *)(param_1 + 0x48) == 1) && (((ulong)puVar2 & 1) != 0)) {
        lVar4 = *(long *)(param_1 + 0x30);
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = 0;
        uVar1 = *(ulong *)(param_1 + 0x30);
        local_58 = lVar4;
        FUN_0197ca78(uVar1,*(undefined8 *)(param_1 + 0x28));
        if ((uVar1 & 1) != 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          uVar5 = *(undefined8 *)(param_1 + 0x30);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          FUN_0199d024();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_60;
          local_60 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          puVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_moveItemAtPath_toPath_error__0269f940,
                     *(undefined8 *)(param_1 + 0x30),local_60,0);
          if (((ulong)puVar2 & 1) == 0) {
            local_4a = 0;
            _objc_storeStrong(&local_58,0);
          }
          else {
            _objc_storeStrong(&local_58,local_60);
          }
        }
        if (local_58 != 0) {
          lVar4 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_mergeDirectory_intoDirectory_tok_026ba680,local_58,
                     *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
          local_4a = (byte)lVar4;
        }
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
      else {
        uVar1 = *(ulong *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isCancelled_026a1c20);
        local_d4 = 0;
        if ((uVar1 & 1) == 0) {
          puVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_moveItemAtPath_toPath_error__0269f940,
                     *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
          local_d4 = (byte)puVar2;
        }
        local_4a = local_d4 & 1;
      }
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_38;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_0199d2a8;
      local_88 = &DAT_025898e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = lVar4;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_4a & 1;
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      local_78 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = uVar5;
      _dispatch_async(puVar2,&local_a0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_48,0);
      local_3c = 0;
      goto LAB_0199d008;
    }
  }
  local_3c = 1;
LAB_0199d008:
  _objc_storeStrong(&local_38,0);
  return;
}

