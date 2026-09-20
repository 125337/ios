// FUN_000de18c @ 000de18c

void FUN_000de18c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *local_138;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined1 *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  int local_e0;
  int local_dc;
  byte local_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  int local_b0;
  int local_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  int local_94;
  undefined1 *local_90;
  ulong local_88;
  cfstringStruct *local_80;
  undefined1 *local_78;
  byte local_69;
  undefined1 *local_68;
  undefined1 *local_50;
  byte local_41;
  int local_40;
  int local_3c;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_3c = *(int *)(param_1 + 0x58);
  local_40 = *(int *)(param_1 + 0x5c);
  local_41 = 0;
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_mutableCopy_0269d8a0);
  local_69 = 0;
  local_138 = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    local_138 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_138;
  }
  local_69 = puVar4 == (undefined1 *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_138;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)();
  FUN_000deba0();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = &cf_GetAppMsgList_FromID_CreateTime_Limit_;
  local_78 = puVar4;
  _NSSelectorFromString();
  local_80 = pcVar5;
  if (local_78 != (undefined1 *)0x0) {
    lVar6 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
    if (lVar6 != 0) {
      lVar6 = *(long *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
      if ((lVar6 != 0) &&
         (puVar4 = local_78,
         (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_respondsToSelector__026ca818,local_80)
         , ((ulong)puVar4 & 1) != 0)) {
        local_88 = 0;
        do {
          puVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
          bVar1 = 0;
          if ((puVar3 < *(undefined **)(param_1 + 0x48)) && (bVar1 = 0, local_88 < 5)) {
            bVar1 = local_41 ^ 1;
          }
          if ((bVar1 & 1) == 0) break;
          local_88 = local_88 + 1;
          puVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,local_80,*(undefined8 *)(param_1 + 0x28),local_3c,local_40,100);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_90 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((((ulong)puVar4 & 1) == 0) ||
             (puVar7 = local_90,
             (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0), puVar4 = local_90
             , puVar7 == (undefined1 *)0x0)) {
            local_41 = 1;
            local_94 = 3;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_a0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = &cf_m_uiMesLocalID;
            local_a8 = puVar4;
            _NSSelectorFromString();
            FUN_000d8bac(puVar4,pcVar5);
            puVar7 = local_a8;
            local_ac = (int)puVar4;
            pcVar5 = &cf_m_uiCreateTime;
            _NSSelectorFromString();
            FUN_000d8bac(puVar7,pcVar5);
            local_b0 = (int)puVar7;
            if ((local_ac == local_3c) && (local_b0 == local_40)) {
              local_41 = 1;
              puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
              local_94 = 3;
            }
            else {
              local_3c = local_ac;
              puVar4 = local_a0;
              local_40 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
              local_b8 = puVar4;
              while (local_b8 = local_b8 + -1, -1 < (long)local_b8) {
                puVar4 = local_a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_a0,PTR_s_objectAtIndexedSubscript__0269cc78,local_b8);
                _objc_retainAutoreleasedReturnValue();
                pcVar5 = &cf_m_uiMesLocalID;
                local_c0 = puVar4;
                _NSSelectorFromString();
                FUN_000d8bac(puVar4,pcVar5);
                puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_c8 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,
                           PTR_s_numberWithUnsignedInteger__0269e4d0,puVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = local_50;
                local_d0 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_50,PTR_s_containsObject__0269cbb8,puVar3);
                if (((ulong)puVar4 & 1) == 0) {
                  puVar4 = local_c0;
                  FUN_000dee00();
                  if (((ulong)puVar4 & 1) == 0) {
                    local_94 = 6;
                  }
                  else {
                    lVar6 = *(long *)(param_1 + 0x38);
                    (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
                    if (lVar6 == 0) {
                      puVar4 = local_c0;
                      FUN_000df0a8(local_c0,*(undefined8 *)(param_1 + 0x30));
                      if (((ulong)puVar4 & 1) != 0) goto LAB_000de8b0;
                      local_94 = 6;
                    }
                    else {
                      puVar4 = local_c0;
                      FUN_000db4b0(local_c0,*(undefined8 *)(param_1 + 0x38));
                      if (((ulong)puVar4 & 1) == 0) {
                        local_94 = 6;
                      }
                      else {
LAB_000de8b0:
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_50,PTR_s_addObject__0269d180,local_d0);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_38,PTR_s_addObject__0269d180,local_c0);
                        local_94 = 0;
                      }
                    }
                  }
                }
                else {
                  local_94 = 6;
                }
                _objc_storeStrong(&local_d0);
                _objc_storeStrong(&local_c0,0);
              }
              puVar7 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
              puVar4 = puVar7 + -100;
              if (puVar7 < &segment_command_00000020.flags) {
                puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
                local_41 = 1;
              }
              local_94 = 0;
            }
            _objc_storeStrong(puVar4,&local_a8);
            _objc_storeStrong(&local_a0,0);
          }
          _objc_storeStrong(&local_90,0);
        } while (local_94 == 0);
        goto LAB_000dea00;
      }
    }
  }
  local_41 = 1;
LAB_000dea00:
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_120 = PTR___NSConcreteStackBlock_02578660;
  local_118 = 0xc2000000;
  local_114 = 0;
  local_110 = FUN_000df3d8;
  local_108 = &DAT_02579ff0;
  _objc_copyWeak(auStack_f0,param_1 + 0x40);
  puVar4 = local_50;
  local_e8 = *(undefined8 *)(param_1 + 0x50);
  local_e0 = local_3c;
  local_dc = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_38;
  local_100 = puVar4;
  local_d8 = local_41 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = puVar2;
  _dispatch_async(puVar3,&local_120);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_100,0);
  _objc_destroyWeak(auStack_f0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  return;
}

