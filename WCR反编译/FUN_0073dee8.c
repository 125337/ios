// FUN_0073dee8 @ 0073dee8

byte FUN_0073dee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong local_48 [3];
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    FUN_0073f088();
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
    uVar5 = 0;
    if (uVar3 == 0) {
LAB_0073e030:
      bVar1 = false;
    }
    else {
      uVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_containsObject__0269cbb8,local_30);
      uVar5 = uVar3 & 0xffffffff;
      if ((uVar3 & 1) == 0) goto LAB_0073e030;
      uVar5 = 1;
      local_11 = 0;
      bVar1 = true;
    }
    _objc_storeStrong(uVar5,local_48,0);
    if (bVar1) goto LAB_0073e08c;
  }
  uVar4 = local_20;
  (*DAT_028cc5e0)(local_20,local_28,local_30);
  local_11 = (byte)uVar4 & 1;
LAB_0073e08c:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

