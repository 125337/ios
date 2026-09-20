// FUN_0042adb0 @ 0042adb0

void FUN_0042adb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_c8;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  undefined8 local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_uiMesLocalID_0269d238);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((int)uVar1 == 0) {
    pcVar2 = local_30;
    FUN_00422aac(0,local_30,&cf_m_nsTicket);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_30;
    local_58 = pcVar2;
    FUN_00420fa0();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_c8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_c8;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    uVar1 = local_40;
    FUN_00411268();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_stringWithFormat__0269cca8,&cf_user____ticket____text___);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_50 = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_uiMesLocalID_0269d238);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_local__u);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 1;
    local_28 = puVar4;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

