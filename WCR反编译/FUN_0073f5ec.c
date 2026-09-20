// FUN_0073f5ec @ 0073f5ec

byte FUN_0073f5ec(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long local_48;
  undefined4 local_40;
  long *local_30;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  plVar1 = &local_28;
  local_28 = 0;
  _objc_storeStrong(plVar1,param_2);
  FUN_0073f088();
  _objc_retainAutoreleasedReturnValue();
  local_30 = plVar1;
  (*(code *)PTR__objc_msgSend_02578628)(plVar1,PTR_s_count_0269cfe0);
  if (plVar1 == (long *)0x0) {
    local_11 = 0;
    local_40 = 1;
    goto LAB_0073f82c;
  }
  lVar2 = local_28;
  FUN_0073f25c();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
LAB_0073f75c:
    uVar4 = local_20;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) != 0) {
      plVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsObject__0269cbb8,local_20);
      if (((ulong)plVar1 & 1) != 0) {
        local_11 = 1;
        goto LAB_0073f81c;
      }
    }
    local_11 = 0;
  }
  else {
    plVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsObject__0269cbb8,local_48);
    if (((ulong)plVar1 & 1) == 0) goto LAB_0073f75c;
    local_11 = 1;
  }
LAB_0073f81c:
  local_40 = 1;
  _objc_storeStrong(&local_48,0);
LAB_0073f82c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

