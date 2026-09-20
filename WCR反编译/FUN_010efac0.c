// FUN_010efac0 @ 010efac0

uint FUN_010efac0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_color);
  local_24 = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_color_);
    local_24 = (uint)uVar1;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_24 & 1;
}

