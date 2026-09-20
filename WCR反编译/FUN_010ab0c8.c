// FUN_010ab0c8 @ 010ab0c8

void FUN_010ab0c8(ulong param_1)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  ulong uVar3;
  cfstringStruct *local_70;
  ulong local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_38 = 1;
  local_40 = local_20;
  if (local_20 < 2) {
    local_68 = 1;
  }
  else {
    local_68 = local_20;
  }
  local_48 = local_68;
  local_30 = local_68;
  do {
    bVar2 = local_30 != 1;
    if (bVar2) {
      local_70 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_M);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_70;
    }
    else {
      local_70 = &cf_M;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_70;
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsObject__0269cbb8,local_50);
    pcVar1 = local_50;
    bVar2 = (uVar3 & 1) != 0;
    if (bVar2) {
      local_30 = local_30 + 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    _objc_storeStrong(&local_50,0);
  } while (bVar2);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

