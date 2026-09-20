// FUN_00243e28 @ 00243e28

void FUN_00243e28(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  char *local_c8;
  ulong local_a0;
  bool local_51;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  char *local_30;
  ulong local_28;
  char *local_20;
  char *local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = "WCActionSheetItem";
  _objc_getClass();
  local_30 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithTitle__0269d2f8),
     ((ulong)pcVar1 & 1) == 0)) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    if (uVar3 == 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_a0;
    }
    local_51 = uVar3 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_a0;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    uVar3 = local_48;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((uVar3 & 1) == 0) && (local_48 != 0)) {
      local_c8 = (char *)0x0;
    }
    else {
      local_c8 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_c8;
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    pcVar1 = local_30;
    _objc_alloc();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_40 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

