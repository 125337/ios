// openMomentsLocalCache @ 01c1a6ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::openMomentsLocalCache(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  uint local_11c;
  ID local_e8;
  undefined *local_e0;
  SEL local_d8;
  ID local_d0;
  undefined4 local_c4;
  ulong local_c0 [6];
  uint local_8c;
  char local_88;
  uint local_80;
  byte local_79;
  ulong local_78;
  char local_69;
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
  
  local_78 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_78,&cf_moments_local_cache);
  local_79 = 1;
  local_80 = 0xe82aad46;
  _memset(local_c0,0,0x40);
  uVar1 = local_78;
  FUN_01139098(local_78,local_79 & 1,local_80,local_c0);
  if ((uVar1 & 1) != 0) {
    local_58 = local_c0;
    local_5c = local_80;
    if (((local_58 == (ulong *)0x0) || (local_88 == '\0')) || (local_8c != local_80)) {
      local_49 = false;
    }
    else {
      FUN_00a59890(0);
      local_68 = uVar1;
      if (((local_58[5] == uVar1) && (uVar5 = local_58[2], FUN_00a4ec00(), uVar5 == uVar1)) &&
         (uVar5 = local_58[3], FUN_01138c10(), uVar5 == uVar1)) {
        if (((char)local_58[7] == '\x03') && (local_58[5] == 0)) {
          local_49 = false;
        }
        else if ((local_58[4] == 0) ||
                ((local_58[4] + 1 == 0 ||
                 (_mach_continuous_time(local_58[4] + 1), uVar1 < local_58[4])))) {
          local_30 = local_58;
          local_34 = local_5c;
          if (local_58 == (ulong *)0x0) {
            local_28 = 0;
          }
          else {
            local_38 = local_5c & 0x1f;
            if (local_38 == 0) {
              local_11c = (uint)local_58[6];
            }
            else {
              local_11c = (int)local_58[6] << (ulong)local_38 |
                          (uint)local_58[6] >> (ulong)(0x20 - local_38 & 0x1f);
            }
            local_3c = local_11c;
            local_48 = FUN_009dea6c;
            local_28 = (ulong)local_11c ^ 0xc3a5f77e905041d1 ^ (ulong)local_5c << 1 ^ local_58[5] ^
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
    if (local_49 != false) {
      if ((local_88 == '\x03') || (local_88 == '\x02')) {
        local_69 = local_88;
      }
      else {
        local_69 = '\x01';
      }
      goto LAB_01c1aa28;
    }
  }
  local_69 = '\x01';
LAB_01c1aa28:
  local_c4 = 1;
  _objc_storeStrong(&local_78,0);
  if (local_69 == '\x02') {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&cf_ROS_Nf_g,&cf_bwSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_WCRefineMomentsCacheViewController_026cf470;
    _objc_alloc_init();
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    IVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_PushViewController_animated_;
    local_e8 = IVar3;
    _NSSelectorFromString();
    IVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_respondsToSelector__026ca818,pcVar4);
    if ((IVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_pushViewController_animated__0269d590,local_e0,1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,pcVar4,local_e0,1);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
  }
  return;
}

