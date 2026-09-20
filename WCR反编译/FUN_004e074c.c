// FUN_004e074c @ 004e074c

byte FUN_004e074c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_a0;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a0;
  if (local_a0 == 0) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    FUN_004e0b48();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_a0;
    if (local_a0 == 0) {
      local_21 = 0;
    }
    else {
      _CFAbsoluteTimeGetCurrent();
      uVar4 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentOffset_0269dd18);
      uVar3 = local_50;
      FUN_004e0d04();
      uVar2 = local_50;
      if ((uVar3 & 1) == 0) {
        FUN_004e0f3c();
        if ((uVar2 & 1) == 0) {
          local_21 = 0;
        }
        else {
          local_21 = 1;
        }
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSValue_026ce1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,param_2,PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGPoint__0269e328
                  );
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,&DAT_028cadf0,puVar1,1);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        uVar2 = local_50;
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,&DAT_028cadf1,puVar1,1);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_21 = 1;
      }
    }
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

