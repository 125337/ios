// FUN_004f6d40 @ 004f6d40

void FUN_004f6d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_60;
  long local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_3);
  uVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (((uVar1 == 0) ||
      (lVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
      lVar2 == 0)) ||
     (lVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_48 = 0;
  }
  else {
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,local_58);
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,local_60);
    if (((uVar1 == 0x7fffffffffffffff) || (uVar3 == 0x7fffffffffffffff)) || (uVar3 <= uVar1)) {
      local_48 = 0;
    }
    else {
      lVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      lVar2 = uVar1 + lVar2;
      lVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      lVar4 = (uVar3 - uVar1) - lVar4;
      uVar1 = local_50;
      local_40 = lVar4;
      local_38 = lVar2;
      local_30 = lVar2;
      local_28 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (uVar1 < (ulong)(lVar2 + lVar4)) {
        local_48 = 0;
      }
      else {
        uVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_substringWithRange__0269d138,lVar2,lVar4);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar1;
      }
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

