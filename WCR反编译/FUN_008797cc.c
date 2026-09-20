// FUN_008797cc @ 008797cc

void FUN_008797cc(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_40 [3];
  cfstringStruct *local_28;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    pcVar2 = &cf_searchBar;
    _NSSelectorFromString();
    uVar3 = local_18;
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) == 0) {
      local_1c = 1;
    }
    else {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_28);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_40[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      bVar1 = (uVar3 & 1) != 0;
      if (bVar1) {
        FUN_00879978(local_40[0]);
        FUN_00879a88(local_40[0]);
      }
      local_1c = (uint)!bVar1;
      _objc_storeStrong(local_40,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

