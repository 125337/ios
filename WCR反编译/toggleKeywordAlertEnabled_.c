// toggleKeywordAlertEnabled: @ 01b3e8b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertViewController::toggleKeywordAlertEnabled_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint local_114;
  undefined8 local_e0;
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
  
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  local_78 = 0;
  _objc_storeStrong(&local_78,&cf_keyword_alert);
  local_79 = 1;
  local_80 = 0x3c9e17a4;
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
      if (((local_58[5] == uVar1) && (uVar4 = local_58[2], FUN_00a4ec00(), uVar4 == uVar1)) &&
         (uVar4 = local_58[3], FUN_01138c10(), uVar4 == uVar1)) {
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
              local_114 = (uint)local_58[6];
            }
            else {
              local_114 = (int)local_58[6] << (ulong)local_38 |
                          (uint)local_58[6] >> (ulong)(0x20 - local_38 & 0x1f);
            }
            local_3c = local_114;
            local_48 = FUN_009dea6c;
            local_28 = (ulong)local_114 ^ 0xc3a5f77e905041d1 ^ (ulong)local_5c << 1 ^ local_58[5] ^
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
      goto LAB_01b3ec48;
    }
  }
  local_69 = '\x01';
LAB_01b3ec48:
  local_c4 = 1;
  _objc_storeStrong(&local_78,0);
  if (local_69 == '\x03') {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isOn_0269d560);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_reloadTableData_0269dca8);
  }
  else if (local_69 == '\x02') {
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setOn__0269dc80,0);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_yN_6Rf_g);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_reloadTableData_0269dca8);
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setOn__0269dc80,puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_e0,0);
  return;
}

