// FUN_01b94b2c @ 01b94b2c

void FUN_01b94b2c(undefined8 param_1,cfstringStruct *param_2,undefined8 param_3,undefined8 *param_4,
                 long *param_5)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_b8;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long *local_38;
  undefined8 *local_30;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_18;
  local_38 = param_5;
  local_30 = param_4;
  FUN_01b92980();
  _objc_retainAutoreleasedReturnValue();
  local_48 = local_20;
  lVar2 = local_28;
  local_40 = pcVar1;
  FUN_01b92980();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    _objc_storeStrong(&local_50,&cf____);
  }
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar3 = local_40;
    puVar5 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf__);
    pcVar1 = local_40;
    local_60 = pcVar3;
    local_58 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = pcVar1;
    if (local_60 != (cfstringStruct *)0x7fffffffffffffff) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringToIndex__0269d6c0,local_60);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_01b92980();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_68;
      local_68 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_substringFromIndex__0269d120,
                 (undefined1 *)((long)&local_60->field0_0x0 + 1));
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar1;
      FUN_01b92980();
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_b8 = &cf____;
      }
      else {
        local_b8 = local_70;
      }
      _objc_storeStrong(&local_50,local_b8);
      _objc_storeStrong(&local_70,0);
    }
    pcVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_integerValue_026ca750);
      local_48 = pcVar1;
    }
    _objc_storeStrong(&local_68,0);
  }
  lVar2 = local_50;
  if ((long)local_48 < 0) {
    local_48 = (cfstringStruct *)0x0;
  }
  if (local_30 != (undefined8 *)0x0) {
    *local_30 = local_48;
  }
  if (local_38 != (long *)0x0) {
    _objc_retainAutorelease();
    *local_38 = lVar2;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

