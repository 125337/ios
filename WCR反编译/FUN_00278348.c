// FUN_00278348 @ 00278348

void FUN_00278348(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  int local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_00274abc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_18 = 0;
    local_38 = 1;
    goto LAB_0027864c;
  }
  uVar2 = local_20;
  FUN_00274fd4(local_20,local_28);
  if ((uVar2 & 1) != 0) {
    local_18 = 0;
    local_38 = 1;
    goto LAB_0027864c;
  }
  uVar2 = local_20;
  FUN_0027a0e4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
LAB_00278604:
    uVar2 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_38 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_002798dc(uVar2,local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    FUN_0027a1c0(uVar1,&cf_codingFormat);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    uVar2 = 0;
    if (uVar1 == 0) {
LAB_002785c0:
      local_38 = 0;
    }
    else {
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_40);
      uVar2 = uVar1 & 0xffffffff;
      if ((uVar1 & 1) != 0) goto LAB_002785c0;
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_h265);
      uVar2 = uVar1 & 0xffffffff;
      if ((uVar1 & 1) != 0) goto LAB_002785c0;
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_h264);
      uVar2 = uVar1 & 0xffffffff;
      if ((uVar1 & 1) != 0) goto LAB_002785c0;
      local_18 = 0;
      uVar2 = 1;
      local_38 = 1;
    }
    _objc_storeStrong(uVar2,&local_50);
    _objc_storeStrong(&local_48,0);
    if (local_38 == 0) goto LAB_00278604;
  }
  _objc_storeStrong(&local_40,0);
LAB_0027864c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

