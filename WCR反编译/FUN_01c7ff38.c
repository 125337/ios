// FUN_01c7ff38 @ 01c7ff38

void FUN_01c7ff38(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char *local_78;
  char *local_60;
  char *local_40;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  char *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_2);
  pcVar2 = "WCColor";
  _objc_getClass();
  uVar3 = local_18;
  local_28 = pcVar2;
  _NSSelectorFromString();
  pcVar2 = local_28;
  local_30 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,uVar3);
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_60 = (char *)0x0;
  }
  else {
    local_60 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_60;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar2 = local_38;
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)pcVar2 & 1) == 0) {
    local_78 = local_20;
  }
  else {
    local_78 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_78);
  return;
}

