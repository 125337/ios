// FUN_01509968 @ 01509968

void FUN_01509968(ulong param_1)

{
  char *pcVar1;
  undefined *puVar2;
  ulong local_48;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  FUN_0150d4c8();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  if (param_1 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = "groupContainerURLs";
    _sel_registerName("groupContainerURLs");
    (*(code *)PTR__objc_msgSend_02578628)(param_1,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((param_1 & 1) == 0) {
      local_48 = 0;
    }
    else {
      local_48 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_48;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

