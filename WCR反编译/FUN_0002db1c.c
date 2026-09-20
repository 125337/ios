// FUN_0002db1c @ 0002db1c

byte FUN_0002db1c(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char *local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     ((uVar1 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8),
      (int)uVar1 != 1 &&
      (uVar1 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8),
      (int)uVar1 != 0x31)))) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    pcVar2 = "SettingUtil";
    _objc_getClass(0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getLocalUsrName__0269ce98,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_38 = pcVar2;
    FUN_0002e9e8(local_20,pcVar2);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      local_40 = 0;
      local_48 = 0;
      local_50 = 0;
      uVar1 = local_20;
      FUN_00011dac();
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_40;
      local_68 = local_48;
      local_70 = local_50;
      local_58 = uVar1;
      FUN_00022eb0(uVar1,&local_60,&local_68,&local_70);
      _objc_storeStrong(&local_40,local_60);
      _objc_storeStrong(&local_48,local_68);
      _objc_storeStrong(&local_50,local_70);
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
        local_30 = 1;
      }
      else {
        uVar1 = local_20;
        FUN_00010240(local_20,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          local_11 = 0;
        }
        else {
          uVar1 = local_78;
          FUN_00023f48();
          if ((uVar1 & 1) == 0) {
            local_11 = 1;
          }
          else {
            uVar1 = local_20;
            FUN_0002b248(local_20,local_78,local_58);
            if ((uVar1 & 1) == 0) {
              local_11 = 1;
            }
            else {
              FUN_00024134(local_40,local_48,local_50,local_78,local_20);
              local_11 = 1;
            }
          }
        }
        local_30 = 1;
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

