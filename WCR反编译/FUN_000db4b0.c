// FUN_000db4b0 @ 000db4b0

byte FUN_000db4b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte local_b8;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  long local_28;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == (undefined *)0x0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     puVar3 = local_20, lVar1 == 0)) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    pcVar2 = &cf_m_uiMessageType;
    _NSSelectorFromString();
    FUN_000d8bac(puVar3,pcVar2);
    puVar4 = local_20;
    local_40 = puVar3;
    if ((puVar3 == &DAT_00002710) || (puVar3 == &UNK_00002712)) {
      local_11 = 0;
      local_38 = 1;
    }
    else {
      pcVar2 = &cf_m_nsFromUsr;
      _NSSelectorFromString();
      FUN_000d8fe0(puVar4,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_20;
      pcVar2 = &cf_m_nsToUsr;
      local_48 = puVar4;
      _NSSelectorFromString();
      FUN_000d8fe0(puVar3,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_48;
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_28);
      local_b8 = 1;
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_28);
        local_b8 = (byte)puVar3;
      }
      local_11 = local_b8 & 1;
      local_38 = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

