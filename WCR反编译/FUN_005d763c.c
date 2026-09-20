// FUN_005d763c @ 005d763c

byte FUN_005d763c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong local_40;
  int local_38;
  cfstringStruct *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = &cf_WCTimeLineCellView;
  _NSClassFromString();
  uVar2 = local_20;
  local_28 = pcVar1;
  if ((pcVar1 == (cfstringStruct *)0x0) || (local_20 == 0)) {
    iVar4 = 1;
    local_11 = 0;
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar2;
    while (local_40 != 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,local_28);
      if ((uVar2 & 1) != 0) {
        local_11 = 1;
        local_38 = 1;
        goto LAB_005d77a0;
      }
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_38 = 2;
LAB_005d77a0:
    _objc_storeStrong(&local_40,0);
    iVar4 = local_38 + -2;
    if (iVar4 == 0) {
      iVar4 = 1;
      local_11 = 0;
      local_38 = 1;
    }
  }
  _objc_storeStrong(iVar4,&local_20,0);
  return local_11 & 1;
}

