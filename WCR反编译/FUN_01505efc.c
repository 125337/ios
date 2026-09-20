// FUN_01505efc @ 01505efc

void FUN_01505efc(ulong param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  ulong local_50;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  FUN_0150d4c8();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  if (param_1 == 0) {
    uVar1 = *(ulong *)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_24 = 1;
    local_18 = uVar1;
  }
  else {
    pcVar2 = "entitlements";
    _sel_registerName("entitlements");
    (*(code *)PTR__objc_msgSend_02578628)(param_1,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((param_1 & 1) == 0) {
      local_50 = *(ulong *)PTR____NSDictionary0___02578288;
    }
    else {
      local_50 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

