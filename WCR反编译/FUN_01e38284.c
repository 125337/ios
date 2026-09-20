// FUN_01e38284 @ 01e38284

ulong FUN_01e38284(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar1 = local_20;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasPrefix__0269d320,local_28);
  uVar3 = local_30;
  if ((uVar1 & 1) == 0) {
    local_18 = 0x7fffffffffffffff;
    local_34 = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_substringFromIndex__0269d120,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasSuffix__0269d018,&cf__);
    uVar1 = local_40;
    if ((uVar3 & 1) != 0) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringToIndex__0269d6c0,uVar3 - 1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_40;
      local_40 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_integerValue_026ca750);
    local_34 = 1;
    local_18 = uVar3;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

