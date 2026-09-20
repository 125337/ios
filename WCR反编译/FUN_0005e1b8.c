// FUN_0005e1b8 @ 0005e1b8

byte FUN_0005e1b8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  byte local_168;
  undefined *local_120;
  ulong local_100;
  undefined *local_98;
  undefined1 *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  undefined *local_58 [3];
  undefined4 local_3c;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  undefined8 *puVar2;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar2 = &local_38;
  local_38 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  if ((DAT_028c7c70 & 1) == 0) {
    FUN_0005ed44();
    uVar4 = local_30;
    if ((uVar1 & 1) == 0) {
      local_21 = 0;
      local_3c = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((uVar4 & 1) == 0) ||
         (uVar4 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
         uVar4 == 0)) {
        local_21 = 0;
        local_3c = 1;
      }
      else {
        puVar3 = PTR_WCRefineLinkParser_026ce168;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLinkParser_026ce168,PTR_s_extractSupportedURLFromText__0269db90,
                   local_30);
        _objc_retainAutoreleasedReturnValue();
        local_58[0] = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
        if (puVar3 == (undefined *)0x0) {
          local_69 = 0;
          uVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
          if (uVar4 < 0x51) {
            local_100 = local_30;
          }
          else {
            local_100 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringToIndex__0269d6c0,0x50);
            _objc_retainAutoreleasedReturnValue();
            local_69 = 1;
            local_68 = local_100;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_60 = local_100;
          if ((local_69 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_68);
          }
          local_21 = 0;
          local_3c = 1;
          _objc_storeStrong(&local_60,0);
        }
        else {
          puVar3 = PTR_WCRefineLinkMediaSender_026ce170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLinkMediaSender_026ce170,
                     PTR_s_usernameFromLogicController__0269db98,local_38);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 0;
          local_120 = puVar3;
          if (puVar3 == (undefined *)0x0) {
            local_120 = PTR_WCRefineLinkMediaSender_026ce170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_currentChatUsername_0269dba0);
            _objc_retainAutoreleasedReturnValue();
            local_80 = local_120;
          }
          local_81 = puVar3 == (undefined *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_78 = local_120;
          if ((local_81 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_80);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_78;
          FUN_0005ee18();
          if (((ulong)puVar3 & 1) == 0) {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_90 = puVar5;
            if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
              local_21 = 0;
              local_3c = 1;
            }
            else if (puVar5 + -1 == (undefined1 *)0x0) {
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              local_98 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_autoParseLinkDefaultSendCardEnab_0269dbb8);
              local_168 = 0;
              if (((ulong)puVar3 & 1) != 0) {
                puVar3 = PTR_WCRefineLinkMediaSender_026ce170;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineLinkMediaSender_026ce170,
                           PTR_s_shouldOfferLinkCardForText__0269dbc0,local_30);
                local_168 = (byte)puVar3;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineLinkMediaSender_026ce170,
                         PTR_s_parseAndSendText_toUsr_keepOrigi_0269dba8,local_30,local_78,0,
                         local_168 & 1 ^ 1,0);
              local_21 = 1;
              local_3c = 1;
              _objc_storeStrong(&local_98,0);
            }
            else {
              FUN_0005f05c(puVar5 + -1,local_30,local_38);
              local_21 = 1;
              local_3c = 1;
            }
          }
          else {
            puVar3 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
            if (puVar3 == (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elnx_J_Y_a)
              ;
              local_21 = 1;
              local_3c = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineLinkMediaSender_026ce170,
                         PTR_s_parseAndSendText_toUsr_keepOrigi_0269dba8,local_30,local_78,0,0,0);
              local_21 = 1;
              local_3c = 1;
            }
          }
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(local_58,0);
      }
    }
  }
  else {
    local_21 = 0;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

