// FUN_0052b50c @ 0052b50c

void FUN_0052b50c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *local_78;
  bool local_49;
  undefined *local_48;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = &cf_id;
  _NSSelectorFromString();
  if ((local_20 == 0) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1),
     (uVar2 & 1) == 0)) {
    local_18 = (undefined *)0x0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1);
    if (uVar2 == 0) {
      local_78 = (undefined *)0x0;
    }
    else {
      local_78 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__llu);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_78;
    }
    local_49 = uVar2 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

