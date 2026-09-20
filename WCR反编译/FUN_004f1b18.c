// FUN_004f1b18 @ 004f1b18

void FUN_004f1b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_68;
  long local_60;
  ulong local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_58 = 0;
  local_50 = param_1;
  _objc_storeStrong(&local_58);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  if (((local_58 == 0) || (local_60 == 0)) || (local_68 == 0)) {
    local_48 = 0;
  }
  else {
    uVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rangeOfString__0269d838,local_60);
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rangeOfString__0269d838,local_68);
    if (((uVar1 != 0x7fffffffffffffff) && (uVar2 != 0x7fffffffffffffff)) && (uVar1 < uVar2)) {
      lVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      lVar3 = uVar1 + lVar3;
      lVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      lVar4 = (uVar2 - uVar1) - lVar4;
      uVar1 = local_58;
      local_40 = lVar4;
      local_38 = lVar3;
      local_30 = lVar3;
      local_28 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if ((ulong)(lVar3 + lVar4) <= uVar1) {
        uVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_substringWithRange__0269d138,lVar3,lVar4);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar1;
        goto LAB_004f1dec;
      }
    }
    local_48 = 0;
  }
LAB_004f1dec:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

