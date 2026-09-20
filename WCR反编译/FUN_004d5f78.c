// FUN_004d5f78 @ 004d5f78

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004d5f78(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_308;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2c0;
  uint local_284;
  uint local_258;
  uint local_244;
  uint local_220;
  uint local_1f4;
  uint local_1e0;
  uint local_1bc;
  cfstringStruct *local_198;
  bool local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  byte local_101;
  cfstringStruct *local_100;
  undefined *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  byte local_9a;
  byte local_99;
  cfstringStruct *local_98;
  byte local_89;
  undefined *local_88;
  cfstringStruct *local_80;
  long local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  undefined8 *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 *puVar2;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  puVar2 = &local_38;
  local_38 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  local_40 = param_3;
  FUN_004d7600();
  if (((uVar1 & 1) != 0) && (local_30 != (cfstringStruct *)0x0)) {
    uVar1 = (uint)local_30;
    FUN_004d76d4();
    if ((uVar1 & 1) == 0) {
      pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_30;
      local_58 = pcVar3;
      FUN_004d77e8(local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
      local_60 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,pcVar4);
      local_61 = (byte)puVar5;
      pcVar3 = local_30;
      FUN_004d7b10(local_30,local_60);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_30;
      local_70 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiMessageType_0269d0a8);
      local_78 = (long)(int)pcVar4;
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsContent_0269d0a0);
      _objc_retainAutoreleasedReturnValue();
      local_198 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_198 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_198;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageBlockSupport_026ce0f8,
                 PTR_s_typeKeyForMessageType_content__026a41a0,local_78,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar5;
      if (local_40 != (undefined8 *)0x0) {
        _objc_retainAutorelease();
        *local_40 = puVar5;
      }
      local_99 = 0;
      puVar6 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
      local_1bc = 0;
      if (puVar6 != (undefined *)0x0) {
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockTypes_026a41a8);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_types_containsTypeKey__026a41b0,pcVar3,local_88);
        local_1bc = (uint)puVar5;
      }
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      local_89 = (byte)local_1bc & 1;
      local_9a = 0;
      if ((local_61 & 1) == 0) {
        local_d9 = 0;
        local_e9 = 0;
        local_244 = 0;
        if ((local_1bc & 1) != 0) {
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_messageBlockContactEnabledIDs_026a0b10);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 1;
          local_d8 = pcVar3;
          FUN_004d7be4();
          local_258 = 1;
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_messageBlockContactEnabledIDs_026a0b10);
            _objc_retainAutoreleasedReturnValue();
            local_e9 = 1;
            local_e8 = pcVar3;
            FUN_004d7be4();
            local_258 = (uint)pcVar3;
          }
          local_244 = local_258;
        }
        if ((local_e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e8);
        }
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        if ((local_244 & 1) != 0) {
          local_9a = 1;
        }
      }
      else if (((local_1bc & 1) == 0) ||
              (pcVar3 = local_58,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_messageBlockGroupRuleBlocksGroup_026a41b8,local_60),
              ((ulong)pcVar3 & 1) == 0)) {
        local_a9 = 0;
        local_1e0 = 0;
        if ((local_89 & 1) != 0) {
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockGroupEnabledIDs_026a41c0)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_a9 = 1;
          local_a8 = pcVar3;
          FUN_004d7be4();
          local_1e0 = (uint)pcVar3;
        }
        if ((local_a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        if ((local_1e0 & 1) == 0) {
          local_b9 = 0;
          local_1f4 = 0;
          if ((local_89 & 1) != 0) {
            pcVar3 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
            puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
            local_1f4 = 0;
            if (pcVar3 != (cfstringStruct *)0x0) {
              pcVar3 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_messageBlockGroupMemberEnabledID_026a0b00);
              _objc_retainAutoreleasedReturnValue();
              local_b9 = 1;
              local_b8 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_groupMemberList_containsGroup_me_026a0b08,pcVar3,local_60,
                         local_70);
              local_1f4 = (uint)puVar5;
            }
          }
          if ((local_b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          if ((local_1f4 & 1) == 0) {
            local_c9 = 0;
            pcVar3 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_messageBlockAlsoGroupEnabled_026a41c8);
            local_220 = 0;
            if ((((ulong)pcVar3 & 1) != 0) && (local_220 = 0, (local_89 & 1) != 0)) {
              pcVar3 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
              local_220 = 0;
              if (pcVar3 != (cfstringStruct *)0x0) {
                puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,
                           local_70);
                local_220 = 0;
                if (((ulong)puVar5 & 1) == 0) {
                  pcVar3 = local_58;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_58,PTR_s_messageBlockContactEnabledIDs_026a0b10);
                  _objc_retainAutoreleasedReturnValue();
                  local_c9 = 1;
                  local_c8 = pcVar3;
                  FUN_004d7be4();
                  local_220 = (uint)pcVar3;
                }
              }
            }
            if ((local_c9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_c8);
            }
            if ((local_220 & 1) != 0) {
              local_9a = 1;
            }
          }
          else {
            local_9a = 1;
          }
        }
        else {
          local_9a = 1;
        }
      }
      else {
        local_9a = 1;
      }
      if (((local_9a & 1) == 0) &&
         (pcVar3 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockAlsoReferEnabled_026a41d0)
         , ((ulong)pcVar3 & 1) != 0)) {
        puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_referredUserFromContent__026a41d8,
                   local_80);
        _objc_retainAutoreleasedReturnValue();
        local_101 = 0;
        local_f8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
        local_284 = 0;
        if (puVar5 != (undefined *)0x0) {
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_messageBlockContactEnabledIDs_026a0b10);
          _objc_retainAutoreleasedReturnValue();
          local_101 = 1;
          local_100 = pcVar3;
          FUN_004d7be4();
          local_284 = (uint)pcVar3;
        }
        if ((local_101 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_100);
        }
        if ((local_284 & 1) != 0) {
          local_9a = 1;
          if (local_88 == (undefined *)0x0) {
            _objc_storeStrong(&local_88,_kWCRMessageBlockTypeRefer);
          }
          puVar5 = local_88;
          if (local_40 != (undefined8 *)0x0) {
            _objc_retainAutorelease();
            *local_40 = puVar5;
          }
        }
        _objc_storeStrong(&local_f8,0);
      }
      if ((local_9a & 1) == 0) {
        local_28 = (cfstringStruct *)0x0;
        local_50 = 1;
      }
      else {
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockShowTipEnabled_026a41e0);
        if (((ulong)pcVar3 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf___;
          local_50 = 1;
        }
        else {
          pcVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_2c0 = &cf___;
          }
          else {
            local_2c0 = local_70;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_110 = local_2c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2c0,PTR_s_length_0269cca0);
          if (((local_2c0 == (cfstringStruct *)0x0) ||
              (puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8,
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,
                         local_110), ((ulong)puVar5 & 1) != 0)) &&
             (puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,
                        local_60), ((ulong)puVar5 & 1) == 0)) {
            _objc_storeStrong(&local_110,local_60);
          }
          pcVar3 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_2e8 = local_60;
          }
          else {
            local_2e8 = local_110;
          }
          FUN_004d7d54();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_88;
          local_118 = local_2e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
          if (puVar5 == (undefined *)0x0) {
            local_308 = &cf_mo_;
          }
          else {
            local_308 = (cfstringStruct *)PTR_WCRefineMessageBlockSupport_026ce0f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_titleForTypeKey__026a41e8,
                       local_88);
            _objc_retainAutoreleasedReturnValue();
            local_128 = local_308;
          }
          local_129 = puVar5 != (undefined *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_308;
          if (local_129) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_messageBlockTipText_026a41f0);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          FUN_004d8380();
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          local_50 = 1;
          _objc_storeStrong(&local_120);
          _objc_storeStrong(&local_118,0);
          _objc_storeStrong(&local_110,0);
        }
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      goto LAB_004d7144;
    }
  }
  local_28 = (cfstringStruct *)0x0;
  local_50 = 1;
LAB_004d7144:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

