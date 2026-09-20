// FUN_0069ebb4 @ 0069ebb4

byte FUN_0069ebb4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_0069c020(local_20,&cf_cellConfig);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_clickTarget;
  local_28 = pcVar1;
  _NSSelectorFromString();
  pcVar1 = &cf_clickAction;
  local_30 = pcVar2;
  _NSSelectorFromString();
  pcVar2 = local_28;
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,local_30);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,local_38),
     ((ulong)pcVar2 & 1) == 0)) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,local_38);
    pcVar3 = "MoreViewController";
    _objc_getClass();
    local_11 = false;
    if (pcVar3 != (char *)0x0) {
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,pcVar3);
      local_11 = false;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = &cf_pushPluginController;
        _NSSelectorFromString();
        local_11 = pcVar1 == pcVar2;
      }
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

