// FUN_000df0a8 @ 000df0a8

byte FUN_000df0a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_c8;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  long local_38;
  undefined *local_30;
  byte local_21;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if ((local_30 == (undefined *)0x0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     puVar3 = local_30, lVar1 == 0)) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    pcVar2 = &cf_m_uiMessageType;
    _NSSelectorFromString();
    FUN_000d8bac(puVar3,pcVar2);
    puVar4 = local_30;
    local_50 = puVar3;
    if ((puVar3 == &DAT_00002710) || (puVar3 == &UNK_00002712)) {
      local_21 = 0;
      local_48 = 1;
    }
    else {
      pcVar2 = &cf_m_nsRealChatUsr;
      _NSSelectorFromString();
      FUN_000d8fe0(puVar4,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
      local_c8 = local_30;
      if (puVar4 == (undefined *)0x0) {
        pcVar2 = &cf_m_nsFromUsr;
        _NSSelectorFromString();
        FUN_000d8fe0(local_c8,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_c8;
      }
      else {
        local_c8 = local_58;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_c8;
      if (puVar4 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_38);
      local_21 = (byte)puVar3 & 1;
      local_48 = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

