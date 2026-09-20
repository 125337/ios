// FUN_0213fe84 @ 0213fe84

void FUN_0213fe84(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  double local_88;
  double local_80;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  uVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_80 = param_1;
  if (param_1 <= -20.0) {
    local_80 = -20.0;
  }
  if (local_80 <= 20.0) {
    local_88 = local_80;
  }
  else {
    local_88 = 20.0;
  }
  FUN_020b3fdc(local_88);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,local_20);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

