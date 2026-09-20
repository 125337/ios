// FUN_01525a60 @ 01525a60

byte FUN_01525a60(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *local_80;
  ulong local_68 [4];
  cfstringStruct *local_48;
  ulong local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = (cfstringStruct *)PTR_WCRefineGroupDataProvider_026ce540;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_usernameForNativeObject__026a2c08,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_80 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_80;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  FUN_01520f2c(local_30,local_20);
  if (((ulong)pcVar1 & 1) == 0) {
    uVar2 = local_20;
    FUN_0152119c(local_20,&cf_m_isFolding);
    if ((uVar2 & 1) == 0) {
      FUN_01526adc();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = &cf_isContactInChatBox_;
      local_40 = uVar2;
      _NSSelectorFromString();
      pcVar3 = local_30;
      local_48 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if ((((pcVar3 == (cfstringStruct *)0x0) || (local_40 == 0)) ||
          (uVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_respondsToSelector__026ca818,local_48), (uVar2 & 1) == 0)) ||
         (uVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,local_48,local_30),
         (uVar2 & 1) == 0)) {
        local_68[0] = 0;
        uVar2 = local_20;
        FUN_015267b8(local_20,&cf_m_contact);
        if ((uVar2 & 1) != 0) {
          uVar4 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_contact);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_68[0];
          local_68[0] = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        uVar2 = local_68[0];
        FUN_0152119c(local_68[0],&cf_isChatBoxContact);
        local_11 = (byte)uVar2 & 1;
        local_34 = 1;
        _objc_storeStrong(local_68,0);
      }
      else {
        local_11 = 1;
        local_34 = 1;
      }
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_11 = 1;
      local_34 = 1;
    }
  }
  else {
    local_11 = 1;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

