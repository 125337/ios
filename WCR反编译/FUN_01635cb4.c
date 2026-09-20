// FUN_01635cb4 @ 01635cb4

void FUN_01635cb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long local_48;
  int local_3c;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_numberOfRanges_0269ef18);
  if (uVar1 < 2) {
    local_3c = 1;
    goto LAB_01635e44;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = local_20;
  puVar2 = PTR_s_rangeAtIndex__0269ef20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeAtIndex__0269ef20,1);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_substringWithRange__0269d138,uVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
LAB_01635dcc:
    local_3c = 1;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_48);
    if ((uVar1 & 1) != 0) goto LAB_01635dcc;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__0269d180,local_48);
    local_3c = 0;
  }
  _objc_storeStrong(&local_48,0);
  if (local_3c == 0) {
    local_3c = 0;
  }
LAB_01635e44:
  _objc_storeStrong(&local_20,0);
  return;
}

