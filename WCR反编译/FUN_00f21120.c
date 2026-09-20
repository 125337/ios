// FUN_00f21120 @ 00f21120

void FUN_00f21120(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *local_a0;
  cfstringStruct *local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_40 = 0;
  local_38 = param_1;
  _objc_storeStrong(&local_40);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_3);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsString__0269d0b0,local_40);
  uVar1 = local_40;
  if ((uVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (local_48 == (cfstringStruct *)0x0) {
      local_a0 = &cf___;
    }
    else {
      local_a0 = local_48;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    local_28 = 0;
    local_20 = 0;
    local_30 = uVar3;
    local_18 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_replaceOccurrencesOfString_withS_026a1e00,uVar1,local_a0,0,0,uVar3);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

