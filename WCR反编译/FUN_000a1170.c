// FUN_000a1170 @ 000a1170

void FUN_000a1170(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_instancesRespondToSelector__0269da90,param_2);
    if ((uVar1 & 1) != 0) {
      _MSHookMessageEx(param_1,param_2,param_3,param_4);
    }
  }
  return;
}

