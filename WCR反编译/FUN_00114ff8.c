// FUN_00114ff8 @ 00114ff8

void FUN_00114ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long local_50 [3];
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
  if (1 < uVar1) {
    lVar3 = *(long *)(param_1 + 0x20);
    uVar1 = local_20;
    puVar2 = PTR_s_rangeAtIndex__0269ef20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeAtIndex__0269ef20,1);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_substringWithRange__0269d138,uVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
      if (lVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x28),PTR_s_appendString__0269ccb0,&cf_space_s_);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_appendString__0269ccb0,local_50[0]);
    }
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

