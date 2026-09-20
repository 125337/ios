// FUN_004f6134 @ 004f6134

void FUN_004f6134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_c8;
  undefined *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     pcVar1 = local_30, lVar2 == 0)) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_c8 = &cf___;
    }
    else {
      local_c8 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_c8;
    local_60 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = pcVar1;
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_escapedPatternForString__0269ef40,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = &cf___0_9A_Fa_f__6___0_9A_Fa_f__8__;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_68;
    local_80 = puVar3;
    FUN_004fa764(local_68,puVar3,local_40,local_48,local_50);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_68;
    local_68 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_60 = 1;
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
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

