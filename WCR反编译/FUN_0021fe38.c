// FUN_0021fe38 @ 0021fe38

uint FUN_0021fe38(undefined8 param_1)

{
  undefined8 uVar1;
  uint local_38;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_18 = &DAT_028c91b8;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ae88);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  local_38 = 0;
  if (DAT_028c91b0 != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,DAT_028c91b0);
    local_38 = (uint)uVar1;
  }
  _objc_storeStrong(&local_28,0);
  return local_38 & 1;
}

