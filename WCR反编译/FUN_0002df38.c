// FUN_0002df38 @ 0002df38

byte FUN_0002df38(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong local_1d8;
  uint local_f4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  byte local_51;
  ulong local_50;
  char *local_48;
  undefined4 local_40;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if ((local_30 == 0) ||
     ((uVar2 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiMessageType_0269d0a8),
      (int)uVar2 != 1 &&
      (uVar2 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiMessageType_0269d0a8),
      (int)uVar2 != 0x31)))) {
    local_21 = 0;
    local_40 = 1;
  }
  else {
    pcVar3 = "SettingUtil";
    _objc_getClass(0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getLocalUsrName__0269ce98,0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    local_f4 = 1;
    if (pcVar3 != (char *)0x0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsFromUsr_0269d088);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_f4 = (uint)uVar2 ^ 1;
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_f4 & 1) == 0) {
      uVar2 = local_30;
      FUN_00011dac();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_30;
      local_60 = uVar2;
      FUN_00010240(local_30,local_48);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_60;
      local_68 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (((uVar2 == 0) ||
          (uVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
          uVar2 == 0)) ||
         (puVar5 = PTR_WCRefineHelper_026ce000,
         (*(code *)PTR__objc_msgSend_02578628)
                   (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                    local_68), ((ulong)puVar5 & 1) != 0)) {
        local_21 = 0;
        local_40 = 1;
      }
      else {
        puVar5 = PTR_WCRefineAIStore_026ce048;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_effectiveSessionOptionsForID__0269cea0,local_68);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_70;
        local_78 = puVar5;
        FUN_0001065c(local_70,puVar5);
        if ((((ulong)puVar6 & 1) == 0) ||
           (puVar5 = local_70,
           (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isChatProviderConfigured_0269ce90),
           ((ulong)puVar5 & 1) == 0)) {
          local_21 = 0;
          local_40 = 1;
        }
        else {
          puVar5 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_chatReplyCommand_0269d4f0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          FUN_0001a2e4();
          _objc_retainAutoreleasedReturnValue();
          local_80 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
          if ((puVar5 == (undefined *)0x0) ||
             (uVar2 = local_60,
             (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,local_80),
             (uVar2 & 1) == 0)) {
            local_21 = 0;
            local_40 = 1;
          }
          else {
            uVar2 = local_60;
            FUN_0002ad64(local_60,local_80);
            if ((uVar2 & 1) == 0) {
              uVar4 = local_30;
              FUN_00011760();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = local_60;
              puVar5 = local_80;
              local_88 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringFromIndex__0269d120,puVar5)
              ;
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar2;
              FUN_0001a2e4();
              _objc_retainAutoreleasedReturnValue();
              local_90 = uVar4;
              (*(code *)PTR__objc_release_02578630)(uVar2);
              uVar2 = local_90;
              FUN_0002b6d0(local_90,local_88);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = local_88;
              local_98 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
              if ((uVar4 == 0) ||
                 (uVar2 = local_98,
                 (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0), uVar2 == 0))
              {
                local_21 = 0;
                local_40 = 1;
              }
              else {
                uVar2 = local_30;
                FUN_0002b248(local_30,local_68,local_60);
                if ((uVar2 & 1) == 0) {
                  local_21 = 1;
                  local_40 = 1;
                }
                else {
                  uVar2 = local_30;
                  FUN_0002edac();
                  _objc_retainAutoreleasedReturnValue();
                  local_1d8 = uVar2;
                  if (uVar2 == 0) {
                    local_1d8 = local_30;
                  }
                  uVar4 = local_98;
                  local_a0 = uVar2;
                  FUN_00012158(local_98,local_1d8,local_68,local_48,0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = local_98;
                  local_98 = uVar4;
                  (*(code *)PTR__objc_release_02578630)(uVar2);
                  puVar6 = PTR_WCRefineHelper_026ce000;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,
                             &cf_ck_WubVY_);
                  _objc_retainAutoreleasedReturnValue();
                  uVar1 = local_68;
                  puVar5 = local_78;
                  uVar4 = local_98;
                  uVar2 = local_a0;
                  local_d0 = PTR___NSConcreteStackBlock_02578660;
                  local_c8 = 0xc2000000;
                  local_c4 = 0;
                  local_c0 = FUN_0002efb0;
                  local_b8 = &DAT_02579190;
                  local_a8 = puVar6;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = puVar6;
                  FUN_0002b88c(uVar4,uVar1,uVar2,puVar5,&local_d0);
                  local_21 = 1;
                  local_40 = 1;
                  _objc_storeStrong(&local_b0);
                  _objc_storeStrong(&local_a8,0);
                  _objc_storeStrong(&local_a0,0);
                }
              }
              _objc_storeStrong(&local_98);
              _objc_storeStrong(&local_90,0);
              _objc_storeStrong(&local_88,0);
            }
            else {
              local_21 = 0;
              local_40 = 1;
            }
          }
          _objc_storeStrong(&local_80,0);
        }
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_21 = 0;
      local_40 = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

