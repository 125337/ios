// FUN_00394fe0 @ 00394fe0

void FUN_00394fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint local_c8;
  byte local_c4;
  byte local_c0;
  byte local_bc;
  byte local_b8;
  undefined *local_90;
  byte local_87;
  byte local_86;
  byte local_85;
  ushort local_84;
  byte local_82;
  undefined4 local_80;
  undefined4 uStack_7c;
  byte local_73;
  byte bStack_72;
  byte bStack_71;
  byte bStack_70;
  byte local_6f;
  byte local_6e;
  byte local_6d;
  ushort local_6c;
  byte local_6a;
  byte local_69;
  ulong local_68;
  byte local_5a;
  byte local_59;
  ulong local_58;
  int local_4c;
  long local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  lVar3 = *(long *)(param_1 + 0x20);
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_nativeSessionFromObject__026a2c00,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar3;
  if (lVar3 == 0) {
    local_4c = 1;
    goto LAB_003956c4;
  }
  uVar4 = *(ulong *)(param_1 + 0x70);
  (**(code **)(uVar4 + 0x10))(uVar4,lVar3);
  if ((uVar4 & 1) != 0) {
    local_4c = 1;
    goto LAB_003956c4;
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_usernameForNativeObject__026a2c08,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
  if (uVar4 == 0) {
    local_4c = 1;
  }
  else {
    lVar3 = local_48;
    FUN_00394800(local_48,local_58,*(undefined8 *)(param_1 + 0x28));
    local_59 = (byte)lVar3;
    uVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (uVar4 != 0) {
      uVar4 = *(ulong *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsObject__0269cbb8,local_58);
      if ((uVar4 & 1) != 0) {
        local_4c = 1;
        goto LAB_003956b4;
      }
    }
    uVar4 = *(ulong *)(param_1 + 0x78);
    (**(code **)(uVar4 + 0x10))(uVar4,local_48);
    if ((uVar4 & 1) == 0) {
      local_4c = 1;
    }
    else {
      bVar1 = 0;
      if ((local_59 & 1) != 0) {
        bVar1 = *(byte *)(param_1 + 0x88);
      }
      local_5a = (bVar1 ^ 1) & 1;
      uVar4 = local_20;
      FUN_00363ee4(local_20,local_28,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar4;
      if ((*(byte *)(param_1 + 0x89) & 1) != 0) {
        uVar4 = local_58;
        FUN_00395724();
        if ((uVar4 & 1) != 0) {
          FUN_003957f4(local_68,local_58);
        }
      }
      local_b8 = 0;
      if ((*(byte *)(param_1 + 0x8a) & 1) != 0) {
        local_b8 = 0;
        if ((local_5a & 1) != 0) {
          uVar4 = local_58;
          FUN_00395724();
          local_b8 = 0;
          if ((uVar4 & 1) != 0) {
            uVar4 = *(ulong *)(param_1 + 0x38);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsObject__0269cbb8,local_58);
            local_b8 = 0;
            if ((uVar4 & 1) == 0) {
              uVar4 = local_68;
              FUN_00396098();
              local_b8 = (byte)uVar4;
            }
          }
        }
      }
      local_69 = local_b8 & 1;
      local_73 = local_59 & 1;
      bStack_72 = *(byte *)(param_1 + 0x88) & 1;
      bStack_71 = *(byte *)(param_1 + 0x8b) & 1;
      bStack_70 = *(byte *)(param_1 + 0x89) & 1;
      local_bc = 0;
      if ((*(byte *)(param_1 + 0x8b) & 1) != 0) {
        lVar3 = local_48;
        FUN_00363c50();
        local_bc = (byte)lVar3;
      }
      local_6f = local_bc & 1;
      local_c0 = 0;
      if ((*(byte *)(param_1 + 0x89) & 1) != 0) {
        local_c0 = 0;
        if ((local_5a & 1) != 0) {
          uVar4 = local_68;
          FUN_00363cec(local_68,local_58);
          local_c0 = 0;
          if ((uVar4 & 1) != 0) {
            uVar5 = *(undefined8 *)(param_1 + 0x40);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsObject__0269cbb8,local_58);
            local_c0 = (byte)uVar5 ^ 1;
          }
        }
      }
      local_6e = local_c0 & 1;
      local_6d = local_69 & 1;
      uVar2 = CONCAT13(local_69,CONCAT12(local_c0,CONCAT11(local_6f,bStack_70))) & 0x101ffff;
      local_80 = CONCAT13((char)uVar2,CONCAT12(bStack_71,CONCAT11(bStack_72,local_73)));
      uStack_7c._0_3_ = (undefined3)(uVar2 >> 8);
      uVar4 = CONCAT44(uStack_7c,local_80);
      _WCRGroupingProjectSession();
      local_82 = (byte)(uVar4 >> 0x10);
      local_84 = (ushort)uVar4;
      local_c4 = 0;
      local_6c = local_84;
      local_6a = local_82;
      if ((uVar4 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x48);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsObject__0269cbb8,local_58);
        local_c4 = (byte)uVar5 ^ 1;
      }
      local_85 = local_c4 & 1;
      local_86 = local_6a & 1;
      local_c8 = 0;
      if ((local_6c & 0x100) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x50);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsObject__0269cbb8,local_58);
        local_c8 = (uint)uVar5 ^ 1;
      }
      local_87 = (byte)local_c8 & 1;
      if ((((local_85 & 1) == 0) && ((local_c8 & 1) == 0)) && ((local_86 & 1) == 0)) {
        local_4c = 1;
      }
      else {
        puVar6 = PTR_WCRGroupingItem_026ce5c8;
        _objc_alloc_init();
        local_90 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setSession__0269d2e0,local_48);
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setCellData__026a2818,local_28);
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setUsername__026a2510,local_58);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_setOriginalIndexPath__026a2c68,local_30);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_setCanPreserveOnHome__026a2c70,local_30 != 0);
        if ((local_85 & 1) != 0) {
          if ((*(byte *)(param_1 + 0x8c) & 1) == 0) {
            (**(code **)(*(long *)(param_1 + 0x80) + 0x10))(*(long *)(param_1 + 0x80),local_30);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x48),PTR_s_addObject__0269d180,local_58);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x58),PTR_s_addObject__0269d180,local_90);
        }
        if ((local_86 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x40),PTR_s_addObject__0269d180,local_58);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x60),PTR_s_addObject__0269d180,local_90);
        }
        if ((local_87 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x50),PTR_s_addObject__0269d180,local_58);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x68),PTR_s_addObject__0269d180,local_90);
        }
        _objc_storeStrong(&local_90,0);
        local_4c = 0;
      }
      _objc_storeStrong(&local_68,0);
    }
  }
LAB_003956b4:
  _objc_storeStrong(&local_58,0);
LAB_003956c4:
  _objc_storeStrong(&local_48,0);
  if (local_4c == 0) {
    local_4c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

