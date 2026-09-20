// FUN_00884260 @ 00884260

/* WARNING: Type propagation algorithm not settling */

void FUN_00884260(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long local_28 [3];
  
  local_28[2] = 0;
  _objc_storeStrong(local_28 + 2,param_1);
  local_28[1] = 0;
  _objc_storeStrong(local_28 + 1,param_2);
  lVar1 = local_28[2];
  FUN_00883a30();
  _objc_retainAutoreleasedReturnValue();
  local_28[0] = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if ((lVar1 != 0) &&
     (uVar2 = DAT_028cd4e0,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd4e0,PTR_s_isEqualToString__0269ccc8,local_28[0])
     , (uVar2 & 1) == 0)) {
    _objc_storeStrong(&DAT_028cd4e0,local_28[0]);
  }
  _objc_storeStrong(local_28);
  _objc_storeStrong(local_28 + 1,0);
  _objc_storeStrong(local_28 + 2,0);
  return;
}

