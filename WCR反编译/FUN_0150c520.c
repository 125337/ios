// FUN_0150c520 @ 0150c520

void FUN_0150c520(undefined8 param_1,char param_2)

{
  ulong uVar1;
  ulong uVar2;
  char local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  char local_41;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar1 = local_40;
  local_41 = param_2;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_bytes_026a9630);
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  FUN_0150d184(uVar1,uVar2,0,local_68);
  if ((((uVar1 & 1) == 0) || (local_68[0] != local_41)) ||
     (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     local_50 != uVar1)) {
    local_38 = 0;
  }
  else {
    local_28 = local_60;
    local_30 = local_58;
    local_20 = local_60;
    local_18 = local_58;
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_subdataWithRange__026a9e88,local_60,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

