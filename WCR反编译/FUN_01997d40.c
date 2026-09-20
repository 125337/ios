// FUN_01997d40 @ 01997d40

void FUN_01997d40(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  undefined8 local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [8];
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  ulong local_a0;
  long local_98;
  ulong local_90;
  undefined1 local_81;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  ulong local_68;
  byte local_59;
  long local_58;
  ulong local_50;
  undefined *local_48;
  int local_3c;
  ulong local_38;
  long local_30;
  long local_28;
  
  uVar3 = param_1 + 0x30;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_38 = uVar3;
  if (uVar3 == 0) {
    local_3c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = *(ulong *)(param_1 + 0x38);
    local_58 = *(long *)(param_1 + 0x40);
    local_59 = *(byte *)(param_1 + 0x50) & 1;
    local_48 = puVar1;
    do {
      uVar3 = local_50;
      uVar2 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
      puVar1 = PTR___dispatch_main_q_02578680;
      if (uVar2 <= uVar3) {
        local_110 = local_58;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_148 = PTR___NSConcreteStackBlock_02578660;
        local_140 = 0xc2000000;
        local_13c = 0;
        local_138 = FUN_0199a1f0;
        local_130 = &DAT_02580480;
        _objc_copyWeak(auStack_128,param_1 + 0x30);
        local_120 = *(undefined8 *)(param_1 + 0x48);
        local_118 = local_110;
        _dispatch_async(puVar1,&local_148);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_destroyWeak(auStack_128);
        local_3c = 0;
        break;
      }
      uVar3 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectAtIndexedSubscript__0269cc78,local_50)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if ((uVar3 == 0) ||
         (puVar1 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_fileExistsAtPath__026ca630,local_68),
         ((ulong)puVar1 & 1) == 0)) {
        local_50 = local_50 + 1;
        local_3c = 2;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        uVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_stringByStandardizingPath_026cab38);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_70;
        local_78 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_stringByStandardizingPath_026cab38);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_78;
        local_80 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,uVar4);
        if ((uVar3 & 1) == 0) {
          puVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_fileExistsAtPath__026ca630,local_70);
          uVar3 = local_68;
          local_81 = SUB81(puVar1,0);
          if (((ulong)puVar1 & 1) == 0) {
            uVar3 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_pasteOneItemFrom_to_mode_replace_026ba670,local_68,local_70,
                       *(undefined8 *)(param_1 + 0x48),0);
            if ((uVar3 & 1) != 0) {
              local_58 = local_58 + 1;
            }
            local_50 = local_50 + 1;
            local_3c = 2;
          }
          else if ((local_59 & 1) == 0) {
            local_90 = local_50;
            local_98 = local_58;
            (*(code *)PTR__objc_retain_02578638)();
            uVar4 = local_70;
            local_a0 = uVar3;
            (*(code *)PTR__objc_retain_02578638)();
            puVar1 = PTR___dispatch_main_q_02578680;
            local_a8 = uVar4;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            local_108 = PTR___NSConcreteStackBlock_02578660;
            local_100 = 0xc2000000;
            local_fc = 0;
            local_f8 = FUN_019983a8;
            local_f0 = &DAT_0258a728;
            _objc_copyWeak(auStack_c8,param_1 + 0x30);
            uVar4 = *(undefined8 *)(param_1 + 0x20);
            (*(code *)PTR__objc_retain_02578638)();
            uVar3 = local_a0;
            local_e8 = uVar4;
            (*(code *)PTR__objc_retain_02578638)();
            uVar4 = local_a8;
            local_e0 = uVar3;
            local_c0 = local_90;
            local_b8 = *(undefined8 *)(param_1 + 0x48);
            local_b0 = local_98;
            (*(code *)PTR__objc_retain_02578638)();
            local_d8 = uVar4;
            uVar4 = *(undefined8 *)(param_1 + 0x28);
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = uVar4;
            _dispatch_async(puVar1,&local_108);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            local_3c = 1;
            _objc_storeStrong(&local_d0);
            _objc_storeStrong(&local_d8,0);
            _objc_storeStrong(&local_e0,0);
            _objc_storeStrong(&local_e8,0);
            _objc_destroyWeak(auStack_c8);
            _objc_storeStrong(&local_a8,0);
            _objc_storeStrong(&local_a0,0);
          }
          else {
            uVar3 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_pasteOneItemFrom_to_mode_replace_026ba670,local_68,local_70,
                       *(undefined8 *)(param_1 + 0x48),1);
            if ((uVar3 & 1) != 0) {
              local_58 = local_58 + 1;
            }
            local_50 = local_50 + 1;
            local_3c = 2;
          }
        }
        else {
          local_50 = local_50 + 1;
          local_3c = 2;
        }
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    } while (local_3c == 2);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

