// FUN_0154b960 @ 0154b960

void FUN_0154b960(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_20, FUN_01564574(), ((ulong)pcVar1 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    pcVar1 = local_20;
    FUN_01533df4(local_20,PTR_s_m_nsRemark_0269d760);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_20;
    FUN_01533df4(local_20,PTR_s_m_nsNickName_0269d758);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    uVar3 = local_28;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_48),
       pcVar1 = local_38, ((ulong)pcVar2 & 1) != 0)) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if ((pcVar1 == (cfstringStruct *)0x0) ||
         (pcVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_48),
         local_18 = local_40, ((ulong)pcVar1 & 1) != 0)) {
        pcVar1 = local_20;
        FUN_01582d08();
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        if ((pcVar1 == (cfstringStruct *)0x0) ||
           (pcVar2 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_48),
           pcVar1 = local_50, ((ulong)pcVar2 & 1) != 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf___;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
        }
        local_2c = 1;
        _objc_storeStrong(&local_50,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_2c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_2c = 1;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

