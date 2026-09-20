// FUN_00310b74 @ 00310b74

byte FUN_00310b74(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    pcVar1 = &cf_NewContactsItemCell;
    _NSClassFromString();
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (uVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1),
       (uVar2 & 1) == 0)) {
      pcVar1 = &cf_MMTableViewCell;
      _NSClassFromString();
      if ((pcVar1 == (cfstringStruct *)0x0) ||
         (uVar2 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1),
         (uVar2 & 1) == 0)) {
        local_11 = 0;
      }
      else {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_reuseIdentifier_026a2038);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_11 = (byte)uVar3 & 1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

