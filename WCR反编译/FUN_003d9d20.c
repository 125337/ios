// FUN_003d9d20 @ 003d9d20

void FUN_003d9d20(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  double local_110;
  cfstringStruct *local_f8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d0;
  char *local_68;
  undefined4 local_5c;
  char *local_58;
  double local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  pcVar1 = "FakeMainFrameCellData";
  local_50 = param_1;
  _objc_getClass();
  local_58 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_5c = 1;
  }
  else {
    _objc_alloc_init();
    local_68 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_28 = (char *)0x0;
    }
    else {
      uVar2 = local_30;
      FUN_00355e04();
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(pcVar1,&cf_userName);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_38 == (cfstringStruct *)0x0) {
        local_d0 = &cf___;
      }
      else {
        local_d0 = local_38;
      }
      FUN_00367110(local_68,&cf_textForNameLabel,local_d0);
      pcVar1 = local_68;
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_e0 = &cf_0;
      }
      else {
        local_e0 = local_40;
      }
      FUN_00367110(pcVar1,&cf_textForMessageLabel,local_e0);
      if (local_48 == (cfstringStruct *)0x0) {
        local_f8 = &cf___;
      }
      else {
        local_f8 = local_48;
      }
      FUN_00367110(local_68,&cf_textForTimeLabel,local_f8);
      pcVar1 = local_68;
      if (local_50 <= 0.0) {
        local_110 = 0.0;
      }
      else {
        local_110 = local_50;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(pcVar1,&cf_widthForNameLabel);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar1 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(pcVar1,&cf_bNormalCell);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar1 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(pcVar1,&cf_bTopCell);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar1 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
    }
    local_5c = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

