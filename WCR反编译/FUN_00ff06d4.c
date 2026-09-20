// FUN_00ff06d4 @ 00ff06d4

/* WARNING: Removing unreachable block (ram,0x00ff0730) */

byte FUN_00ff06d4(undefined8 param_1)

{
  long lVar1;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInterfaceStyle_026cabc8);
  local_11 = lVar1 == 2;
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

