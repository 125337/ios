// _WCRefineHomeGroupingReloadGateCache @ 0037e574

void _WCRefineHomeGroupingReloadGateCache(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  uint local_15c;
  undefined *local_e0;
  byte local_d3;
  byte local_d2;
  byte local_d1;
  undefined *local_d0;
  ulong local_c8 [6];
  uint local_94;
  char local_90;
  uint local_88;
  byte local_81;
  ulong local_80;
  uint local_74;
  ulong *local_70;
  ulong local_68;
  uint local_5c;
  ulong *local_58;
  bool local_49;
  code *local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  ulong *local_30;
  ulong local_28;
  
  puVar6 = PTR_WCRefineRemoteUpdateManager_026ce600;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_d1 = 0xa0;
  local_d0 = puVar6;
  FUN_01138c30(&cf_home_session_grouping,0);
  local_80 = 0;
  _objc_storeStrong(&local_80,&cf_home_session_grouping_qq);
  local_81 = 1;
  local_88 = 0x4e9003ac;
  _memset(local_c8,0,0x40);
  uVar7 = local_80;
  FUN_01139098(local_80,local_81 & 1,local_88,local_c8);
  bVar5 = false;
  if ((uVar7 & 1) != 0) {
    local_70 = local_c8;
    local_74 = local_88;
    local_5c = local_88;
    local_58 = local_70;
    if (((local_70 == (ulong *)0x0) || (local_90 == '\0')) || (local_94 != local_88)) {
      local_49 = false;
    }
    else {
      FUN_00a59890(0);
      local_68 = uVar7;
      if (((local_58[5] == uVar7) && (uVar9 = local_58[2], FUN_00a4ec00(), uVar9 == uVar7)) &&
         (uVar9 = local_58[3], FUN_01138c10(), uVar9 == uVar7)) {
        if (((char)local_58[7] == '\x03') && (local_58[5] == 0)) {
          local_49 = false;
        }
        else if ((local_58[4] == 0) ||
                ((local_58[4] + 1 == 0 ||
                 (_mach_continuous_time(local_58[4] + 1), uVar7 < local_58[4])))) {
          local_30 = local_58;
          local_34 = local_5c;
          if (local_58 == (ulong *)0x0) {
            local_28 = 0;
          }
          else {
            local_38 = local_5c & 0x1f;
            if (local_38 == 0) {
              local_15c = (uint)local_58[6];
            }
            else {
              local_15c = (int)local_58[6] << (ulong)local_38 |
                          (uint)local_58[6] >> (ulong)(0x20 - local_38 & 0x1f);
            }
            local_3c = local_15c;
            local_48 = FUN_009dea6c;
            local_28 = (ulong)local_15c ^ 0xc3a5f77e905041d1 ^ (ulong)local_5c << 1 ^ local_58[5] ^
                       local_58[2] ^ local_58[3] << 7 ^ local_58[4] >> 0xb ^
                       (ulong)(byte)local_58[7] << 0x35 ^
                       (ulong)*(byte *)((long)local_58 + 0x39) << 0x2d ^ 0x9dea6c;
          }
          local_49 = (*local_58 ^ local_58[1]) == local_28;
        }
        else {
          local_49 = false;
        }
      }
      else {
        local_49 = false;
      }
    }
    bVar5 = false;
    if (local_49 != false) {
      bVar5 = (char)local_70[7] == '\x03';
    }
  }
  _objc_storeStrong(&local_80,0);
  puVar6 = PTR_WCRefineAuth_026ce2c8;
  local_d2 = bVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAuth_026ce2c8,PTR_s_hasResolvedGroupAuthorizationFor_0269eb80);
  local_d3 = (byte)puVar6;
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_cloudFeatureGateModeForID__026a2e08,&cf_home_session_grouping_qq);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isEqualToString__0269ccc8,&cf_hidden);
  if (((local_d2 & 1) == 0) && (((ulong)puVar6 & 1) == 0)) {
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if ((puVar8 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) &&
       (((local_d3 & 1) == 0 || (FUN_00963008(), ((ulong)puVar8 & 1) != 0)))) {
      local_d2 = 1;
    }
  }
  puVar6 = PTR___dispatch_main_q_02578680;
  bVar2 = DAT_028ca0e3;
LAB_0037ea88:
  do {
    bVar3 = DAT_028ca0e3;
    if (DAT_028ca0e3 == bVar2) {
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x28ca0e3,0x10);
      if (bVar5) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_028ca0e3 = local_d1 & 1;
      }
      if (cVar1 != '\0') goto LAB_0037ea88;
    }
    bVar5 = bVar3 != bVar2;
    bVar2 = bVar3;
  } while (bVar5);
  bVar2 = DAT_028ca0e4;
LAB_0037eb14:
  do {
    bVar4 = DAT_028ca0e4;
    if (DAT_028ca0e4 == bVar2) {
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(0x28ca0e4,0x10);
      if (bVar5) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_028ca0e4 = local_d2 & 1;
      }
      if (cVar1 != '\0') goto LAB_0037eb14;
    }
    bVar5 = bVar4 == bVar2;
    bVar2 = bVar4;
    if (bVar5) {
      if (((bVar3 & 1) != (local_d1 & 1)) || ((bVar4 & 1) != (local_d2 & 1))) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(&local_d0,0);
      return;
    }
  } while( true );
}

