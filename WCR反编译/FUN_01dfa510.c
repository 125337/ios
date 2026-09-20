// FUN_01dfa510 @ 01dfa510

void FUN_01dfa510(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (char *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = "WCColor";
  _objc_getClass();
  uVar3 = local_20;
  local_30 = pcVar2;
  _NSSelectorFromString();
  pcVar2 = local_30;
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,uVar3);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    pcVar2 = local_40;
    bVar1 = ((ulong)pcVar4 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_40,0);
    if (bVar1) goto LAB_01dfa664;
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = pcVar2;
LAB_01dfa664:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

