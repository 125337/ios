// FUN_01968b20 @ 01968b20

void FUN_01968b20(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *local_168;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined1 auStack_108 [8];
  undefined8 local_100;
  ulong local_f8;
  byte local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  long lStack_d8;
  undefined1 *local_d0;
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  long lStack_98;
  byte local_81;
  ulong local_80;
  undefined1 *local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_70 = param_1;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_80 = 0;
  local_81 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  local_38 = 0;
  local_30 = 0;
  local_a0 = (undefined1 *)0x0;
  lStack_98 = lVar2;
  local_40 = lVar2;
  local_28 = lVar2;
  do {
    puVar4 = local_a0;
    puVar3 = *(undefined1 **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    if (puVar3 <= puVar4) {
LAB_01968de8:
      puVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_copy_0269d150);
      puVar1 = PTR___dispatch_main_q_02578680;
      local_e8 = puVar4;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_138 = PTR___NSConcreteStackBlock_02578660;
      local_130 = 0xc2000000;
      local_12c = 0;
      local_128 = FUN_01968f58;
      local_120 = &DAT_0258a338;
      _objc_copyWeak(auStack_108,param_1 + 0x30);
      local_100 = *(undefined8 *)(param_1 + 0x38);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_e8;
      local_118 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = puVar4;
      local_f8 = local_80;
      local_f0 = local_81 & 1;
      _dispatch_async(puVar1,&local_138);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_110);
      _objc_storeStrong(&local_118,0);
      _objc_destroyWeak(auStack_108);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_78,0);
      return;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    puVar1 = PTR_s_rangeOfString_options_range__0269d130;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_rangeOfString_options_range__0269d130,*(undefined8 *)(param_1 + 0x28),1,
               local_a0,lStack_98);
    local_b0 = lVar2;
    local_a8 = puVar1;
    if (lVar2 == 0x7fffffffffffffff) goto LAB_01968de8;
    local_80 = local_80 + 1;
    puVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
    puVar4 = local_78;
    if (puVar3 < section_000000b8.segname) {
      puVar1 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithRange__026acdb0,local_b0,local_a8
                );
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if (1999 < local_80) {
      local_81 = 1;
      goto LAB_01968de8;
    }
    local_c0 = local_a8;
    local_c4 = 1;
    if (local_a8 == (undefined1 *)0x0) {
      local_168 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      local_168 = local_a8;
    }
    local_d0 = local_168;
    local_168 = local_168 + local_b0;
    puVar3 = *(undefined1 **)(param_1 + 0x20);
    local_b8 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    puVar4 = local_b8;
    if (puVar3 <= local_168) goto LAB_01968de8;
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    local_58 = puVar4;
    lStack_d8 = lVar2 - (long)local_b8;
    local_50 = puVar4;
    local_e0 = puVar4;
    local_a0 = puVar4;
    lStack_98 = lStack_d8;
    local_60 = lStack_d8;
    local_48 = lStack_d8;
  } while( true );
}

