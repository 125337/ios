// FUN_014bb1cc @ 014bb1cc

void FUN_014bb1cc(undefined8 param_1)

{
  long lVar1;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_kind_026a27e8);
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_hQ;
      goto LAB_014bb2f0;
    }
    if (lVar1 == 2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__Q_;
      goto LAB_014bb2f0;
    }
    if (lVar1 == 3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__wc;
      goto LAB_014bb2f0;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf__;
LAB_014bb2f0:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

