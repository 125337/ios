// FUN_0069579c @ 0069579c

byte FUN_0069579c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  byte local_7c;
  undefined *local_48 [3];
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (undefined *)0x0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    local_30 = (undefined *)0x0;
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_tag_026cab98);
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
      local_30 = puVar1;
    }
    if ((local_30 == &UNK_00003044) || (local_30 == &DAT_00003046)) {
      local_48[0] = (undefined *)0x0;
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
      if (((ulong)puVar1 & 1) != 0) {
        puVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_delegate_0269e808);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_48[0];
        local_48[0] = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      pcVar3 = "MMPhoneNumberHandler";
      _objc_getClass();
      local_7c = 0;
      if (pcVar3 != (char *)0x0) {
        puVar1 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isKindOfClass__0269cd68,pcVar3);
        local_7c = (byte)puVar1;
      }
      local_11 = local_7c & 1;
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
    else {
      local_11 = 0;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

