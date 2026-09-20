// FUN_00051888 @ 00051888

void FUN_00051888(undefined8 param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  double dVar8;
  double dVar9;
  cfstringStruct *local_148;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  ulong local_100;
  undefined8 *local_f8;
  ulong local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  code *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 local_a1;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  int local_7c;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined4 local_4c;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  byte local_31;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_40 = &cf_SS;
  if ((param_3 & 1) == 0) {
    local_40 = &cf_emo_;
  }
  pcVar2 = local_40;
  local_31 = param_3;
  (*(code *)PTR__objc_retain_02578638)();
  if ((local_31 & 1) == 0) {
    local_148 = (cfstringStruct *)0x0;
  }
  else {
    FUN_00051654();
    local_148 = pcVar2;
  }
  uVar1 = (uint)pcVar2;
  local_48 = local_148;
  if (local_30 == 0) {
    local_4c = 1;
    goto LAB_000520e0;
  }
  FUN_0004bf04();
  if ((uVar1 & 1) == 0) {
    local_4c = 1;
    goto LAB_000520e0;
  }
  uVar3 = local_30;
  FUN_00052260();
  if ((uVar3 & 1) == 0) {
    uVar3 = local_30;
    FUN_00052380();
    local_68 = uVar3;
    if (uVar3 == 0) {
      local_4c = 1;
    }
    else {
      if (local_48 != (cfstringStruct *)0x0) {
        local_48->field2_0x10 = local_48->field2_0x10 + 1;
      }
      local_4c = 1;
    }
    goto LAB_000520e0;
  }
  uVar3 = local_28;
  FUN_00052874(local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_30;
  local_70 = uVar3;
  FUN_00052380();
  local_78 = uVar4;
  if (uVar4 == 0) {
    local_4c = 1;
  }
  else {
    if ((local_31 & 1) != 0) {
      uVar3 = local_30;
      FUN_000516c8();
      local_7c = (int)uVar3;
      if (local_7c != 0) {
        dVar8 = (double)NEON_ucvtf(uVar3 & 0xffffffff);
        dVar9 = dVar8;
        FUN_0005217c(uVar3 & 0xffffffff);
        if (dVar8 < dVar9) {
          if (local_48 != (cfstringStruct *)0x0) {
            local_48->field3_0x18 = local_48->field3_0x18 + 1;
          }
          local_4c = 1;
          goto LAB_000520d0;
        }
      }
    }
    uVar3 = local_70;
    FUN_000512a0();
    if ((uVar3 & 1) == 0) {
      if ((local_31 & 1) == 0) {
        FUN_000530d8(local_40,local_28,local_70,local_30,local_78);
      }
      local_4c = 1;
    }
    else {
      puVar5 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
                 PTR_s_stableKeyForSession_wrap__0269d9f0,local_70,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
      if (puVar5 == (undefined *)0x0) {
        if (local_48 != (cfstringStruct *)0x0) {
          local_48[1].field1_0x8 = local_48[1].field1_0x8 + 1;
        }
        local_4c = 1;
      }
      else {
        uVar3 = local_78;
        FUN_00053958();
        if ((uVar3 & 1) == 0) {
          if (local_48 != (cfstringStruct *)0x0) {
            local_48[1].field0_0x0 = local_48[1].field0_0x0 + 1;
          }
          local_4c = 1;
        }
        else {
          puVar5 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
                     PTR_s_estimatedBytesForWrap_kind__0269d9f8,local_30,local_78);
          puVar6 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
          local_90 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
                     PTR_s_localFileBytesForWrap_kind__0269da00,local_30,local_78);
          puVar5 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
          local_98 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
                     PTR_s_metadataBytesForWrap_kind__0269da08,local_30,local_78);
          puVar6 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
          local_a0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
                     PTR_s_isWrapFullyDownloaded_kind__0269da10,local_30,local_78);
          local_a1 = SUB81(puVar6,0);
          if (((ulong)puVar6 & 1) == 0) {
            puVar5 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,PTR_s_isRecordedForKey__0269da18
                       ,local_88);
            if (((ulong)puVar5 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
                         PTR_s_removeRecordForKey__0269da28,local_88);
            }
            puVar5 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
                       PTR_s_wouldExceedQuotaWithAdditionalBy_0269da30,local_90);
            if (((ulong)puVar5 & 1) == 0) {
              puVar5 = local_88;
              FUN_00053ae0();
              if (((ulong)puVar5 & 1) == 0) {
                if (local_48 != (cfstringStruct *)0x0) {
                  local_48->field1_0x8 = local_48->field1_0x8 + 1;
                }
                local_4c = 1;
              }
              else {
                if (local_48 != (cfstringStruct *)0x0) {
                  local_48[1].field3_0x18 = local_48[1].field3_0x18 + 1;
                }
                uVar3 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_copy_0269d150);
                local_d8 = &local_e0;
                local_e0 = 0;
                local_d0 = 0x32000000;
                local_cc = 0x30;
                local_c8 = FUN_00053cfc;
                local_c0 = FUN_00053d50;
                uVar4 = local_70;
                local_b0 = uVar3;
                FUN_00053d7c(local_70,local_30);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = local_b0;
                local_f8 = &local_e0;
                ppuVar7 = &local_120;
                local_120 = PTR___NSConcreteStackBlock_02578660;
                local_118 = 0xc2000000;
                local_114 = 0;
                local_110 = FUN_000541c0;
                local_108 = &DAT_025796c0;
                local_f0 = local_78;
                local_b8 = uVar4;
                (*(code *)PTR__objc_retain_02578638)();
                local_100 = uVar3;
                _objc_retainBlock();
                local_e8 = ppuVar7;
                if ((local_31 & 1) == 0) {
                  FUN_00054a98(ppuVar7);
                }
                else {
                  FUN_00054710(ppuVar7,local_88);
                }
                FUN_00054b94(0x4056800000000000,local_88);
                _objc_storeStrong(&local_e8);
                _objc_storeStrong(&local_100,0);
                __Block_object_dispose(&local_e0,8);
                _objc_storeStrong(&local_b8,0);
                _objc_storeStrong(&local_b0,0);
                local_4c = 0;
              }
            }
            else {
              if (local_48 != (cfstringStruct *)0x0) {
                local_48[1].field2_0x10 = local_48[1].field2_0x10 + 1;
              }
              local_4c = 1;
            }
          }
          else {
            puVar5 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,PTR_s_isRecordedForKey__0269da18
                       ,local_88);
            if (((ulong)puVar5 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
                         PTR_s_recordDownloadForKey_wrap_kind__0269da20,local_88,local_30,local_78);
            }
            if (local_48 != (cfstringStruct *)0x0) {
              local_48->field0_0x0 = local_48->field0_0x0 + 1;
            }
            local_4c = 1;
          }
        }
      }
      _objc_storeStrong(&local_88,0);
    }
  }
LAB_000520d0:
  _objc_storeStrong(&local_70,0);
LAB_000520e0:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

