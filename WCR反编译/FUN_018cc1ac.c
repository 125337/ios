// FUN_018cc1ac @ 018cc1ac

void FUN_018cc1ac(double param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  undefined *local_60;
  undefined *local_50;
  undefined *local_40;
  undefined *local_38;
  double local_30;
  ulong local_28;
  double local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28,param_2);
  dVar4 = local_20;
  FUN_018cd42c();
  bVar1 = DAT_02323c88 <= ABS(dVar4 - (double)(long)dVar4);
  local_60 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = dVar4;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_60;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_60;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf__);
  local_18 = local_38;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

