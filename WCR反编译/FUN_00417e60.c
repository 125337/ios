// FUN_00417e60 @ 00417e60

void FUN_00417e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  byte local_a9;
  undefined1 *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  byte local_82;
  byte local_81;
  long local_80;
  ulong local_78;
  ulong local_70;
  undefined1 *local_68;
  uint local_5c;
  byte local_56;
  byte local_55;
  undefined1 *local_48;
  undefined *local_40;
  long local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_5);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_patAutoReplyEnabled_026a3640);
  local_55 = (byte)puVar3;
  puVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_patOtherAutoReplyEnabled_026a3648);
  local_56 = (byte)puVar4;
  if (((local_55 & 1) == 0) && (((ulong)puVar4 & 1) == 0)) {
    local_5c = 1;
    goto LAB_00418a9c;
  }
  FUN_0040c4c4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_28;
  local_68 = puVar4;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_30;
  local_70 = uVar5;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = local_38;
  local_78 = uVar6;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_68;
  local_80 = lVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if ((puVar4 == (undefined1 *)0x0) ||
     (lVar7 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0),
     lVar7 == 0)) {
    local_5c = 1;
  }
  else {
    lVar7 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,local_68);
    local_81 = (byte)lVar7;
    uVar6 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,local_68);
    uVar5 = local_70;
    bVar2 = 0;
    if ((uVar6 & 1) != 0) {
      bVar2 = local_81 ^ 1;
    }
    local_82 = bVar2 & 1;
    if (((local_81 & 1) == 0) && ((bVar2 & 1) == 0)) {
      local_5c = 1;
    }
    else if (((local_81 & 1) == 0) || ((local_55 & 1) != 0)) {
      if (((bVar2 & 1) == 0) || ((local_56 & 1) != 0)) {
        puVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_patAutoReplyGroupMessagesEnabled_026a3650);
        puVar8 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_patAutoReplySelectedGroups_026a3658);
        _objc_retainAutoreleasedReturnValue();
        FUN_00418bd0(uVar5,(ulong)puVar4 & 0xffffffff);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        if ((uVar5 & 1) == 0) {
          local_5c = 1;
        }
        else {
          local_90 = (undefined *)0x0;
          local_98 = (undefined *)0x0;
          local_a0 = (undefined *)0x0;
          local_a8 = (undefined1 *)0x0;
          local_a9 = 0;
          local_b8 = 0;
          local_c0 = 0;
          if ((local_81 & 1) == 0) {
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_patOtherAutoReplyText_026a3688);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar4;
            FUN_0040494c();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_90;
            local_90 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_patOtherAutoReplyRepositoryCode_026a3690);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar4;
            FUN_0040494c();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_98;
            local_98 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_patOtherAutoReplyMultiContent_026a3698);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_a0;
            local_a0 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_patOtherAutoReplyCountMode_026a36a0);
            puVar8 = local_48;
            local_a8 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_patOtherAutoReplyRandomOneFromMu_026a36a8);
            local_a9 = (byte)puVar8;
            _objc_storeStrong(&local_b8);
            _objc_storeStrong(&local_c0,&cf_pat_other);
          }
          else {
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_patAutoReplyText_026a3660);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar4;
            FUN_0040494c();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_90;
            local_90 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_patAutoReplyRepositoryCode_026a3668);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar4;
            FUN_0040494c();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_98;
            local_98 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_patAutoReplyMultiContent_026a3670);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_a0;
            local_a0 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_patAutoReplyCountMode_026a3678);
            puVar8 = local_48;
            local_a8 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_patAutoReplyRandomOneFromMulti_026a3680);
            local_a9 = (byte)puVar8;
            _objc_storeStrong(&local_b8);
            _objc_storeStrong(&local_c0,&cf_pat);
          }
          if (local_a8 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
            puVar3 = local_a0;
            FUN_00418e40(0);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (puVar4 == (undefined1 *)0x0) {
              local_5c = 1;
            }
            else {
LAB_00418754:
              puVar9 = local_40;
              FUN_0040494c();
              _objc_retainAutoreleasedReturnValue();
              local_c8 = puVar9;
              (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_length_0269cca0);
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              if (puVar9 == (undefined *)0x0) {
                puVar10 = PTR__OBJC_CLASS___NSDate_026cdf88;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_stringWithFormat__0269cca8,&cf____________0f);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = local_c8;
                local_c8 = puVar3;
                (*(code *)PTR__objc_release_02578630)(puVar9);
                (*(code *)PTR__objc_release_02578630)(puVar10);
              }
              puVar11 = PTR__OBJC_CLASS___NSString_026cdfe8;
              uVar12 = local_c0;
              uVar6 = local_70;
              uVar13 = local_78;
              lVar7 = local_80;
              puVar14 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_______________);
              _objc_retainAutoreleasedReturnValue();
              local_d0 = puVar11;
              FUN_00418ed4();
              uVar5 = local_70;
              puVar10 = local_90;
              puVar9 = local_98;
              puVar3 = local_a0;
              puVar4 = local_a8;
              bVar2 = local_a9;
              bVar1 = ((ulong)puVar11 & 1) != 0;
              if (bVar1) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_48,PTR_s_patAutoReplyDelaySeconds_026a36b0);
                FUN_004194e4(param_1,puVar10,puVar9,puVar3,puVar4,bVar2 & 1,uVar5,local_b8,0,uVar12,
                             uVar6,uVar13,lVar7,puVar14);
              }
              local_5c = (uint)!bVar1;
              _objc_storeStrong(&local_d0);
              _objc_storeStrong(&local_c8,0);
            }
          }
          else {
            puVar3 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
            if ((puVar3 != (undefined1 *)0x0) ||
               (puVar3 = local_98,
               (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
               puVar3 != (undefined1 *)0x0)) goto LAB_00418754;
            local_5c = 1;
          }
          _objc_storeStrong(&local_c0);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_a0,0);
          _objc_storeStrong(&local_98,0);
          _objc_storeStrong(&local_90,0);
        }
      }
      else {
        local_5c = 1;
      }
    }
    else {
      local_5c = 1;
    }
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
LAB_00418a9c:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

