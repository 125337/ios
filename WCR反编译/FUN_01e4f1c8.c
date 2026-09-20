// FUN_01e4f1c8 @ 01e4f1c8

void FUN_01e4f1c8(long param_1)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  long local_18;
  
  if (0 < param_1) {
    local_20 = 0;
    if (param_1 == 3) {
      local_20 = 1;
    }
    else if (3 < param_1) {
      local_20 = 2;
    }
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
    local_18 = param_1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_impactOccurred_026ca6a0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

