// FUN_0012070c @ 0012070c

void FUN_0012070c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_100;
  cfstringStruct *local_c0;
  cfstringStruct *local_78;
  long local_70;
  cfstringStruct *local_68;
  undefined4 local_60;
  undefined8 local_50;
  long local_48;
  cfstringStruct *local_40;
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_c0 = &cf___;
    }
    else {
      local_c0 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_c0;
    local_60 = 1;
  }
  else {
    pcVar1 = local_30;
    FUN_00121848(local_30,local_38,local_40,local_48,local_50);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_48;
    local_68 = pcVar1;
    FUN_00121400();
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      if (local_40 == (cfstringStruct *)0x0) {
        local_100 = &cf___;
      }
      else {
        local_100 = local_40;
      }
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,local_38,local_100);
      _objc_retainAutoreleasedReturnValue();
      local_60 = 1;
      local_28 = pcVar1;
    }
    else {
      pcVar1 = local_40;
      FUN_001220d8(local_40,local_70,local_50);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_68;
      local_78 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,local_38,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_60 = 1;
      local_28 = pcVar3;
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

