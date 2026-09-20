// FUN_001640e4 @ 001640e4

void FUN_001640e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_e8;
  cfstringStruct *local_d0;
  cfstringStruct *local_b8;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60 [3];
  undefined4 local_44;
  long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = PTR_WCRefineHelper_026ce000;
  if (local_40 == 0) {
    local_44 = 1;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_b8 = &cf_Smn_v;
    }
    else {
      local_b8 = local_28;
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_d0 = &cf_nxSmn_v;
    }
    else {
      local_d0 = local_30;
    }
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    local_60[0] = local_40;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_e8 = &cf_nxSm;
    }
    else {
      local_e8 = local_38;
    }
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_00164b7c;
    local_68 = &DAT_0257a6b0;
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,local_b8,local_d0,&cf_Q__,0,
               local_e8,&local_80);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
    _objc_storeStrong(local_60,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

