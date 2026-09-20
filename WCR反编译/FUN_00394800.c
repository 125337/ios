// FUN_00394800 @ 00394800

byte FUN_00394800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsObject__0269cbb8,local_28);
    if ((uVar2 & 1) != 0) {
      local_11 = 1;
      goto LAB_003948f8;
    }
  }
  FUN_003d22c8();
  if ((uVar2 & 1) == 0) {
    uVar3 = local_20;
    FUN_0037a830(local_20,&cf_m_bIsTop);
    local_11 = (byte)uVar3 & 1;
  }
  else {
    local_11 = 0;
  }
LAB_003948f8:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

