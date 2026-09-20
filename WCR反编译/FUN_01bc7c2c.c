// FUN_01bc7c2c @ 01bc7c2c

void FUN_01bc7c2c(undefined8 param_1)

{
  qword qVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct local_58;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  FUN_01bc758c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gw_YS;
    local_2c = 1;
  }
  else {
    FUN_01bd7a1c();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_38;
    if (local_38 == (cfstringStruct *)0x0) {
      pcVar2 = local_28;
      FUN_01be3704();
      _objc_retainAutoreleasedReturnValue();
      local_58.field3_0x18 = (long)pcVar2;
      FUN_01be3454(pcVar2,&cf_m_nsRemark);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_01be33a4();
      _objc_retainAutoreleasedReturnValue();
      local_58.field2_0x10 = (undefined *)pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = (cfstringStruct *)local_58.field3_0x18;
      FUN_01be3454(local_58.field3_0x18,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_01be33a4();
      _objc_retainAutoreleasedReturnValue();
      local_58.field1_0x8 = (qword)pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = (cfstringStruct *)local_58.field2_0x10;
      (*(code *)PTR__objc_msgSend_02578628)(local_58.field2_0x10,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = (cfstringStruct *)local_58.field1_0x8;
        (*(code *)PTR__objc_msgSend_02578628)(local_58.field1_0x8,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_90 = (cfstringStruct *)0x0;
        }
        else {
          local_90 = (cfstringStruct *)local_58.field1_0x8;
        }
        local_88 = local_90;
      }
      else {
        local_88 = (cfstringStruct *)local_58.field2_0x10;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58.field0_0x0 = (qword)local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (local_88 == (cfstringStruct *)0x0) {
        pcVar2 = local_20;
        FUN_01be3454(local_20,&cf_nickname);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_01be33a4();
        _objc_retainAutoreleasedReturnValue();
        qVar1 = local_58.field0_0x0;
        local_58.field0_0x0 = (qword)pcVar3;
        (*(code *)PTR__objc_release_02578630)(qVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = (cfstringStruct *)local_58.field0_0x0;
      (*(code *)PTR__objc_msgSend_02578628)(local_58.field0_0x0,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = &local_58;
        _objc_storeStrong(pcVar2,local_28);
      }
      FUN_01bd7a1c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      qVar1 = local_58.field0_0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = (cfstringStruct *)qVar1;
      local_2c = 1;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_58.field1_0x8,0);
      _objc_storeStrong(&local_58.field2_0x10,0);
      _objc_storeStrong(&local_58.field3_0x18,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

