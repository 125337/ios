// FUN_0101c0dc @ 0101c0dc

void FUN_0101c0dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_58;
  ulong local_50;
  undefined *local_48;
  int local_3c;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  if ((local_20 == 0) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_numberOfRanges_0269ef18),
     uVar2 <= *(ulong *)(param_1 + 0x38))) {
    local_3c = 1;
    goto LAB_0101c310;
  }
  uVar2 = local_20;
  puVar3 = PTR_s_rangeAtIndex__0269ef20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_rangeAtIndex__0269ef20,*(undefined8 *)(param_1 + 0x38));
  local_50 = uVar2;
  local_48 = puVar3;
  if (uVar2 == 0x7fffffffffffffff) {
    local_3c = 1;
    goto LAB_0101c310;
  }
  uVar4 = *(ulong *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringWithRange__0269d138,uVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_unescapeJSONString__026adcb8);
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
LAB_0101c264:
    local_3c = 1;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,local_58);
    if ((uVar2 & 1) != 0) goto LAB_0101c264;
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_http);
    if ((uVar2 & 1) == 0) {
      local_3c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_58);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__0269d180,local_58);
      local_3c = 0;
    }
  }
  _objc_storeStrong(&local_58,0);
  if (local_3c == 0) {
    local_3c = 0;
  }
LAB_0101c310:
  _objc_storeStrong(&local_20,0);
  return;
}

