// FUN_009c4fc4 @ 009c4fc4

void FUN_009c4fc4(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_chat);
  if ((((uVar1 & 1) == 0) &&
      (uVar1 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_image),
      (uVar1 & 1) == 0)) &&
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_video),
     (uVar1 & 1) == 0)) {
    local_18 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

