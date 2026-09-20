// FUN_00119e5c @ 00119e5c

bool FUN_00119e5c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = false;
  if ((DAT_028c85c8 & 1) != 0) {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
    bVar1 = lVar2 != 0;
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

