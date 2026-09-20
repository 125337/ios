// FUN_0011cea8 @ 0011cea8

byte FUN_0011cea8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((DAT_028c85c8 & 1) == 0) ||
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = 0;
  }
  else if (DAT_026df8e0 == 1) {
    uVar2 = DAT_028c8538;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8538,PTR_s_containsObject__0269cbb8,local_20);
    local_11 = (byte)uVar2 & 1;
  }
  else {
    uVar2 = DAT_028c8540;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8540,PTR_s_containsObject__0269cbb8,local_20);
    local_11 = ((byte)uVar2 ^ 1) & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

