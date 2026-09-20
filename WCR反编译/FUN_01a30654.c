// FUN_01a30654 @ 01a30654

void FUN_01a30654(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_01a76058();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = &cf_yyyy_MM_ddHH_mm_ss;
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,local_28);
  uVar3 = (ulong)(lVar1 != 0);
  FUN_01a76140(uVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

