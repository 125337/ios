// FUN_0002d5e0 @ 0002d5e0

byte FUN_0002d5e0(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_100;
  undefined *local_78;
  undefined *local_70;
  ulong local_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  char *local_48;
  undefined4 local_40;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if ((local_30 == 0) ||
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiMessageType_0269d0a8), (int)uVar1 != 1
     )) {
    local_21 = 0;
    local_40 = 1;
  }
  else {
    pcVar2 = "SettingUtil";
    _objc_getClass(0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getLocalUsrName__0269ce98,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_48 = pcVar2;
    FUN_0002e9e8(local_30,pcVar2);
    if ((uVar1 & 1) == 0) {
      local_21 = 0;
      local_40 = 1;
    }
    else {
      local_50 = 0;
      uVar1 = local_30;
      FUN_00011dac();
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_50;
      local_58 = uVar1;
      FUN_00021e10(uVar1,&local_60);
      _objc_storeStrong(&local_50,local_60);
      if ((uVar1 & 1) == 0) {
        local_21 = 0;
        local_40 = 1;
      }
      else {
        puVar3 = PTR_WCRefineAIStore_026ce048;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (((ulong)puVar4 & 1) == 0) {
          local_21 = 0;
          local_40 = 1;
        }
        else {
          uVar1 = local_30;
          FUN_00010240(local_30,local_48);
          _objc_retainAutoreleasedReturnValue();
          local_68 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
          if (uVar1 == 0) {
            local_21 = 0;
            local_40 = 1;
          }
          else {
            uVar1 = local_30;
            FUN_0002b248(local_30,local_68,local_58);
            if ((uVar1 & 1) == 0) {
              local_21 = 1;
              local_40 = 1;
            }
            else {
              uVar1 = local_68;
              FUN_000228b8();
              if ((uVar1 & 1) == 0) {
                local_21 = 1;
                local_40 = 1;
              }
              else {
                puVar3 = PTR_WCRefineHelper_026ce000;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
                _objc_retainAutoreleasedReturnValue();
                pcVar2 = "BaseMsgContentViewController";
                local_70 = puVar3;
                _objc_getClass();
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
                if (((ulong)puVar3 & 1) == 0) {
                  local_100 = (undefined *)0x0;
                }
                else {
                  local_100 = local_70;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_78 = local_100;
                FUN_00022aa4(local_100,local_68,local_50);
                local_21 = 1;
                local_40 = 1;
                _objc_storeStrong(&local_78);
                _objc_storeStrong(&local_70,0);
              }
            }
          }
          _objc_storeStrong(&local_68,0);
        }
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

