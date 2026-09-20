// FUN_0065020c @ 0065020c

void FUN_0065020c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long local_20;
  ulong local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar2 != 0) &&
     (uVar3 = local_18, FUN_006527b0(), uVar1 = local_18, lVar2 = local_20, (uVar3 & 1) != 0)) {
    uVar3 = local_18;
    FUN_0065e928(local_18,local_20);
    FUN_006527fc(uVar1,lVar2,uVar3);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

