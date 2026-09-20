// FUN_003bcd48 @ 003bcd48

void FUN_003bcd48(long param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte local_230;
  uint local_22c;
  long local_220;
  byte local_1fc;
  ulong local_1d8;
  ulong local_1d0;
  uint local_1a8;
  uint local_1a4;
  uint local_194;
  byte local_174;
  undefined *local_170;
  byte local_162;
  byte local_161;
  long local_160;
  long local_158;
  long local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined4 local_100;
  byte local_f9;
  undefined8 local_f8;
  byte local_ea;
  byte local_e9;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  byte local_c9;
  long local_c8;
  byte local_bb;
  byte local_ba;
  byte local_b9;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b9 = 0;
  local_ba = 0;
  local_bb = 1;
  lVar3 = *(long *)(param_1 + 0x20);
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar3,PTR_s_groupIdsContainingMember__026a2ee8,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_c8 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d9 = 0;
  local_e9 = 0;
  local_174 = 0;
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_174 = (byte)puVar5;
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_c9 = local_174 & 1;
  local_f9 = 0;
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x71) & 1) == 0) {
      lVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_containsObject__0269cbb8,*(undefined8 *)(param_1 + 0x38));
      local_1a8 = (uint)lVar3;
    }
    else {
      lVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      local_1a4 = 0;
      if (lVar3 == 0) {
        local_1a4 = local_c9 ^ 1;
      }
      local_1a8 = local_1a4 & 1;
    }
    local_194 = local_1a8;
  }
  else {
    local_194 = (uint)*(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    local_f9 = 1;
    local_f8 = uVar6;
    FUN_003bcb18();
  }
  bVar2 = local_194 != 0;
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  local_ea = bVar2;
  if ((*(byte *)(param_1 + 0x71) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
      if (bVar2) {
        uVar7 = *(ulong *)(param_1 + 0x48);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x38));
        if ((uVar7 & 1) == 0) {
          FUN_00373608(*(undefined8 *)(param_1 + 0x40));
          FUN_00368c14(*(undefined8 *)(param_1 + 0x40),&cf_homeLongPressAlreadyInGroup);
          puVar4 = PTR_WCRefineHelper_026ce000;
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___W);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_100 = 1;
          goto LAB_003bda20;
        }
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,PTR_s_removeMember_fromGroup__0269ea70,*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x38));
        local_bb = (byte)uVar6;
        FUN_003b9f28(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),0);
        local_b9 = 1;
      }
      else {
        uVar7 = *(ulong *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_addMember_toGroup__0269ea78,*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x38));
        local_bb = (byte)uVar7;
        if ((uVar7 & 1) != 0) {
          FUN_003bdbf8(*(undefined8 *)(param_1 + 0x28),0);
          lVar3 = *(long *)(param_1 + 0x48);
          (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
          local_161 = 0;
          if (lVar3 == 0) {
LAB_003bd628:
            local_220 = 0;
          }
          else {
            uVar7 = *(ulong *)(param_1 + 0x48);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x38));
            if ((uVar7 & 1) != 0) goto LAB_003bd628;
            local_220 = *(long *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_220,PTR_s_groupForId__026a27e0,*(undefined8 *)(param_1 + 0x48));
            _objc_retainAutoreleasedReturnValue();
            local_161 = 1;
            local_160 = local_220;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_158 = local_220;
          if ((local_161 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_160);
          }
          local_22c = 0;
          if (local_158 != 0) {
            lVar3 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_kind_026a27e8);
            local_22c = 0;
            if (lVar3 == 0) {
              lVar3 = local_158;
              FUN_00396ad8();
              local_22c = (uint)lVar3 ^ 1;
            }
          }
          local_162 = (byte)local_22c & 1;
          if ((local_22c & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_removeMember_fromGroup__0269ea70,
                       *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48));
          }
          local_ba = local_162 & 1;
          local_230 = 1;
          if ((local_162 & 1) == 0) {
            uVar6 = *(undefined8 *)(param_1 + 0x48);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x58));
            local_230 = (byte)uVar6;
          }
          local_b9 = local_230 & 1;
          _objc_storeStrong(&local_158,0);
        }
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      FUN_003bde7c(uVar6,!bVar2);
      local_bb = (byte)uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_removeMember_fromGroup__0269ea70,
                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
      if (((local_bb & 1) != 0) && ((local_ea & 1) == 0)) {
        FUN_003bdbf8(*(undefined8 *)(param_1 + 0x28),0);
      }
      FUN_003b9f28(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),0);
      local_1fc = 0;
      if ((local_ea & 1) != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x48);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x38));
        local_1fc = (byte)uVar6;
      }
      local_b9 = local_1fc & 1;
    }
  }
  else if (bVar2) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    FUN_003bda5c();
    if ((uVar7 & 1) != 0) {
      FUN_003bdb54(*(undefined8 *)(param_1 + 0x40));
      local_100 = 1;
      goto LAB_003bda20;
    }
    FUN_003bdbf8(*(undefined8 *)(param_1 + 0x28),1);
    lVar3 = *(long *)(param_1 + 0x48);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    local_b9 = lVar3 != 0;
  }
  else {
    _memset(auStack_148,0,0x40);
    uVar7 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,PTR_s_groupIdsContainingMember__026a2ee8,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1d0 != 0) {
      lVar3 = *local_138;
      local_1d8 = 0;
      do {
        do {
          if (*local_138 - lVar3 != 0) {
            _objc_enumerationMutation(*local_138 - lVar3,uVar7);
          }
          local_108 = *(undefined8 *)(local_140 + local_1d8 * 8);
          uVar8 = *(ulong *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,PTR_s_removeMember_fromGroup__0269ea70,*(undefined8 *)(param_1 + 0x28),
                     local_108);
          bVar1 = 0;
          if ((uVar8 & 1) != 0) {
            bVar1 = local_bb;
          }
          local_bb = bVar1 & 1;
          local_1d8 = local_1d8 + 1;
        } while (local_1d8 < local_1d0);
        local_1d0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_1d8 = 0;
      } while (local_1d0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar7);
    FUN_003bdbf8(*(undefined8 *)(param_1 + 0x28),0);
    lVar3 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar3,PTR_s_groupForId__026a27e0,*(undefined8 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    local_150 = lVar3;
    bVar2 = false;
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_kind_026a27e8);
      bVar2 = lVar3 == 0;
    }
    local_b9 = bVar2;
    _objc_storeStrong(&local_150,0);
  }
  if ((local_bb & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_fe1Y_);
    local_100 = 1;
  }
  else {
    FUN_00373608(*(undefined8 *)(param_1 + 0x40));
    if ((local_b9 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x48);
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
      if (lVar3 != 0) {
        FUN_003b9f28(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48),0);
      }
    }
    if (((local_b9 & 1) == 0) || (*(long *)(param_1 + 0x60) == 0)) {
      if (*(long *)(param_1 + 0x68) != 0) {
        (**(code **)(*(long *)(param_1 + 0x68) + 0x10))();
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x60) + 0x10))();
    }
    FUN_00368c14(*(undefined8 *)(param_1 + 0x40),&cf_homeLongPressToggleGroup);
    local_170 = (undefined *)0x0;
    if (((*(byte *)(param_1 + 0x71) & 1) == 0) || ((local_ea & 1) == 0)) {
      if ((local_ea & 1) == 0) {
        if ((local_ba & 1) == 0) {
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__6e_0R
                    );
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_170;
          local_170 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__y0R);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_170;
          local_170 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__N);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_170;
        local_170 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
    }
    else {
      _objc_storeStrong(&local_170,&cf___NN6e_);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_170);
    _objc_storeStrong(&local_170,0);
    local_100 = 0;
  }
LAB_003bda20:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

