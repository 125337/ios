// FUN_000323ec @ 000323ec

void FUN_000323ec(long param_1)

{
  char *pcVar1;
  char *local_c8;
  char *local_98;
  bool local_61;
  char *local_60;
  char *local_58;
  undefined4 local_50;
  byte local_49;
  char *local_48;
  char *local_40 [3];
  char *local_28;
  long local_20;
  char *local_18;
  
  local_20 = param_1;
  if (param_1 == 0) {
    local_18 = (char *)0x0;
    goto LAB_0003275c;
  }
  pcVar1 = "MMContext";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_currentContext_0269d5f8);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_28 = pcVar1;
  if (pcVar1 == (char *)0x0) {
LAB_000324f4:
    local_98 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar1 & 1) == 0) goto LAB_000324f4;
    local_98 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getService__0269d170,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_98;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = local_98;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  pcVar1 = local_40[0];
  if (local_40[0] == (char *)0x0) {
    local_c8 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_61 = local_c8 == (char *)0x0;
    local_58 = local_c8;
    if (local_61) {
      local_c8 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_getService__0269d170,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_c8;
    }
    local_61 = !local_61;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_c8;
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    local_50 = 1;
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_50 = 1;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
LAB_0003275c:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

