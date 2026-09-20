// visibleActionIDsForGroupContact:savedOrder:hiddenIDs: @ 01cc6c08

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x24 bytes */

ID WCRefineProfileCardActionCatalog::visibleActionIDsForGroupContact_savedOrder_hiddenIDs_
             (ID param_1,SEL param_2,bool param_3,ID param_4,ID param_5)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint local_374;
  uint local_36c;
  uint local_340;
  uint local_334;
  ulong local_2f0;
  ulong local_2e8;
  undefined *local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  ulong local_248;
  byte local_239;
  undefined *local_238;
  ID local_230;
  ID local_228;
  undefined8 local_220;
  undefined8 local_218;
  byte local_209;
  SEL local_208;
  ID local_200;
  ulong local_1f8 [6];
  uint local_1c4;
  char local_1c0;
  uint local_1b8;
  byte local_1b1;
  ulong local_1b0;
  ulong local_1a8 [6];
  uint local_174;
  char local_170;
  uint local_168;
  byte local_161;
  ulong local_160;
  uint local_154;
  ulong *local_150;
  uint local_144;
  ulong *local_140;
  ulong local_138;
  uint local_12c;
  ulong *local_128;
  bool local_119;
  ulong local_118;
  uint local_10c;
  ulong *local_108;
  bool local_f9;
  code *local_f8;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  ulong *local_e0;
  ulong local_d8;
  code *local_d0;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  ulong *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_209 = (byte)param_3;
  local_218 = 0;
  local_208 = param_2;
  local_200 = param_1;
  _objc_storeStrong(&local_218,param_4);
  local_220 = 0;
  _objc_storeStrong(&local_220,param_5);
  IVar2 = local_200;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_200,PTR_s_normalizedOrderFromSavedOrder__026c3550,local_218);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_200;
  local_228 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_200,PTR_s_normalizedHiddenIDsFromSavedIDs__026c3558,local_220);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_230 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_WCRefineConfig_026cdf58;
  local_238 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  local_239 = (byte)puVar4;
  _memset(auStack_288,0,0x40);
  IVar2 = local_228;
  (*(code *)PTR__objc_retain_02578638)();
  local_2e8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_a8,0x10);
  if (local_2e8 != 0) {
    lVar7 = *local_278;
    local_2f0 = 0;
    do {
      do {
        if (*local_278 - lVar7 != 0) {
          _objc_enumerationMutation(*local_278 - lVar7,IVar2);
        }
        local_248 = *(ulong *)(local_280 + local_2f0 * 8);
        IVar3 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_containsObject__0269cbb8,local_248);
        if (((IVar3 & 1) == 0) &&
           ((uVar6 = local_248,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_248,PTR_s_isEqualToString__0269ccc8,&cf_custom_avatar),
            (uVar6 & 1) == 0 || ((local_239 & 1) != 0)))) {
          uVar6 = local_248;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_248,PTR_s_isEqualToString__0269ccc8,&cf_message_block);
          if ((uVar6 & 1) != 0) {
            local_160 = 0;
            _objc_storeStrong(&local_160,&cf_message_block);
            local_161 = 0;
            local_168 = 0xc91a47b2;
            _memset(local_1a8,0,0x40);
            uVar6 = local_160;
            FUN_01139098(local_160,local_161 & 1,local_168,local_1a8);
            bVar1 = false;
            if ((uVar6 & 1) != 0) {
              local_150 = local_1a8;
              local_154 = local_168;
              local_10c = local_168;
              local_108 = local_150;
              if (((local_150 == (ulong *)0x0) || (local_170 == '\0')) || (local_174 != local_168))
              {
                local_f9 = false;
              }
              else {
                FUN_00a59890(0);
                local_118 = uVar6;
                if (((local_108[5] == uVar6) &&
                    (uVar8 = local_108[2], FUN_00a4ec00(), uVar8 == uVar6)) &&
                   (uVar8 = local_108[3], FUN_01138c10(), uVar8 == uVar6)) {
                  if (((char)local_108[7] == '\x03') && (local_108[5] == 0)) {
                    local_f9 = false;
                  }
                  else if ((local_108[4] == 0) ||
                          ((local_108[4] + 1 == 0 ||
                           (_mach_continuous_time(local_108[4] + 1), uVar6 < local_108[4])))) {
                    local_e0 = local_108;
                    local_e4 = local_10c;
                    if (local_108 == (ulong *)0x0) {
                      local_d8 = 0;
                    }
                    else {
                      local_e8 = local_10c & 0x1f;
                      if (local_e8 == 0) {
                        local_334 = (uint)local_108[6];
                      }
                      else {
                        local_334 = (int)local_108[6] << (ulong)local_e8 |
                                    (uint)local_108[6] >> (ulong)(0x20 - local_e8 & 0x1f);
                      }
                      local_ec = local_334;
                      local_f8 = FUN_009dea6c;
                      local_d8 = (ulong)local_334 ^ 0xc3a5f77e905041d1 ^ (ulong)local_10c << 1 ^
                                 local_108[5] ^ local_108[2] ^ local_108[3] << 7 ^
                                 local_108[4] >> 0xb ^ (ulong)(byte)local_108[7] << 0x35 ^
                                 (ulong)*(byte *)((long)local_108 + 0x39) << 0x2d ^ 0x9dea6c;
                    }
                    local_f9 = (*local_108 ^ local_108[1]) == local_d8;
                  }
                  else {
                    local_f9 = false;
                  }
                }
                else {
                  local_f9 = false;
                }
              }
              bVar1 = false;
              if (local_f9 != false) {
                bVar1 = (char)local_150[7] == '\x03';
              }
            }
            _objc_storeStrong(&local_160,0);
            if (!bVar1) goto LAB_01cc7738;
          }
          uVar6 = local_248;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_248,PTR_s_isEqualToString__0269ccc8,&cf_fake_red_envelope);
          bVar1 = false;
          local_340 = 0;
          if ((uVar6 & 1) != 0) {
            local_1b0 = 0;
            _objc_storeStrong(&local_1b0,&cf_entertainment_red_envelop);
            local_1b1 = 1;
            local_1b8 = 0x5c70d3a9;
            _memset(local_1f8,0,0x40);
            uVar6 = local_1b0;
            FUN_01139098(local_1b0,local_1b1 & 1,local_1b8,local_1f8);
            bVar1 = false;
            if ((uVar6 & 1) != 0) {
              local_140 = local_1f8;
              local_144 = local_1b8;
              local_12c = local_1b8;
              local_128 = local_140;
              if (((local_140 == (ulong *)0x0) || (local_1c0 == '\0')) || (local_1c4 != local_1b8))
              {
                local_119 = false;
              }
              else {
                FUN_00a59890(0);
                local_138 = uVar6;
                if (((local_128[5] == uVar6) &&
                    (uVar8 = local_128[2], FUN_00a4ec00(), uVar8 == uVar6)) &&
                   (uVar8 = local_128[3], FUN_01138c10(), uVar8 == uVar6)) {
                  if (((char)local_128[7] == '\x03') && (local_128[5] == 0)) {
                    local_119 = false;
                  }
                  else if ((local_128[4] == 0) ||
                          ((local_128[4] + 1 == 0 ||
                           (_mach_continuous_time(local_128[4] + 1), uVar6 < local_128[4])))) {
                    local_b8 = local_128;
                    local_bc = local_12c;
                    if (local_128 == (ulong *)0x0) {
                      local_b0 = 0;
                    }
                    else {
                      local_c0 = local_12c & 0x1f;
                      if (local_c0 == 0) {
                        local_36c = (uint)local_128[6];
                      }
                      else {
                        local_36c = (int)local_128[6] << (ulong)local_c0 |
                                    (uint)local_128[6] >> (ulong)(0x20 - local_c0 & 0x1f);
                      }
                      local_c4 = local_36c;
                      local_d0 = FUN_009dea6c;
                      local_b0 = (ulong)local_36c ^ 0xc3a5f77e905041d1 ^ (ulong)local_12c << 1 ^
                                 local_128[5] ^ local_128[2] ^ local_128[3] << 7 ^
                                 local_128[4] >> 0xb ^ (ulong)(byte)local_128[7] << 0x35 ^
                                 (ulong)*(byte *)((long)local_128 + 0x39) << 0x2d ^ 0x9dea6c;
                    }
                    local_119 = (*local_128 ^ local_128[1]) == local_b0;
                  }
                  else {
                    local_119 = false;
                  }
                }
                else {
                  local_119 = false;
                }
              }
              bVar1 = false;
              if (local_119 != false) {
                bVar1 = (char)local_140[7] == '\x03';
              }
            }
            _objc_storeStrong(&local_1b0,0);
            local_374 = 1;
            if (bVar1) {
              local_290 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = local_290;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_374 = (uint)puVar4 ^ 1;
            }
            local_340 = local_374;
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_290);
          }
          if (((local_340 & 1) == 0) &&
             (IVar3 = local_200,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_200,PTR_s_isActionAvailableForGroupContact_026c3560,local_209 & 1,
                        local_248), (IVar3 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_addObject__0269d180,local_248);
          }
        }
LAB_01cc7738:
        local_2f0 = local_2f0 + 1;
      } while (local_2f0 < local_2e8);
      local_2e8 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_a8,0x10);
      local_2f0 = 0;
    } while (local_2e8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar4 = local_238;
  (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_238);
  _objc_storeStrong(&local_230,0);
  _objc_storeStrong(&local_228,0);
  _objc_storeStrong(&local_220,0);
  _objc_storeStrong(&local_218,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

