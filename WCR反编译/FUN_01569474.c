// FUN_01569474 @ 01569474

void FUN_01569474(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_60;
  undefined *local_58;
  char *local_50;
  undefined *local_48;
  char *local_40;
  char *local_38;
  uint local_2c;
  long local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = (char *)0x0;
    local_2c = 1;
    goto LAB_015696c4;
  }
  pcVar3 = "CContact";
  _objc_getClass();
  local_38 = pcVar3;
  FUN_0152b7ec();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar3;
  if ((pcVar3 == (char *)0x0) || (local_38 == (char *)0x0)) {
    local_18 = (char *)0x0;
    local_2c = 1;
  }
  else {
    local_48 = PTR_s_getContactByName__0269d178;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_48,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,local_38);
      pcVar3 = local_50;
      bVar1 = ((ulong)pcVar4 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
      }
      local_2c = (uint)bVar1;
      _objc_storeStrong(&local_50,0);
      if (local_2c != 0) goto LAB_015696b4;
    }
    local_58 = PTR_s_getContactForSearchByName__0269f828;
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getContactForSearchByName__0269f828
              );
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_58,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,local_38);
      pcVar3 = local_60;
      bVar1 = ((ulong)pcVar4 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
      }
      local_2c = (uint)bVar1;
      _objc_storeStrong(&local_60,0);
      if (local_2c != 0) goto LAB_015696b4;
    }
    local_18 = (char *)0x0;
    local_2c = 1;
  }
LAB_015696b4:
  _objc_storeStrong(&local_40,0);
LAB_015696c4:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

