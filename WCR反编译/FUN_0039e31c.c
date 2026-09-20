// FUN_0039e31c @ 0039e31c

void FUN_0039e31c(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (0.0 < param_1) {
    dVar2 = param_1;
    _CACurrentMediaTime();
    _WCRHomeScrollPerfRecordCellForRow((dVar2 - param_1) * 1000.0);
  }
  uVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

