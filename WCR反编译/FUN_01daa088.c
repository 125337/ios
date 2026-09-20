// FUN_01daa088 @ 01daa088

void FUN_01daa088(long param_1)

{
  undefined8 local_18;
  
  if (param_1 == 0) {
    FUN_01d8eb78();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else if (param_1 == 1) {
    FUN_01dbac6c(0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else if (param_1 + -2 == 0) {
    FUN_01dbacb4();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    FUN_01da0980(param_1 + -2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

