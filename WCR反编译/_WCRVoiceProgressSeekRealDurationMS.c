// _WCRVoiceProgressSeekRealDurationMS @ 015c1788

int _WCRVoiceProgressSeekRealDurationMS(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_48;
  uint local_40;
  int local_3c;
  undefined *local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  int local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar4 = local_20;
  FUN_015c1a34();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_28 = uVar4;
  FUN_015c1b14(local_20,uVar4);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0,
               local_30,1,0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    FUN_015c1e10();
    local_3c = (int)puVar3;
    uVar4 = (ulong)puVar3 & 0xffffffff;
    if (local_3c != 0) {
      uVar4 = 1;
      local_14 = local_3c;
    }
    local_40 = (uint)(local_3c != 0);
    _objc_storeStrong(uVar4,&local_38,0);
    if (local_40 != 0) goto LAB_015c19f4;
  }
  local_48 = 0;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_dtVoice);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_48;
  local_48 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_48;
  FUN_015c1e10();
  iVar1 = (int)uVar4;
  if ((int)uVar4 == 0) {
    uVar4 = local_28;
    FUN_015c2118(0);
    iVar1 = (int)uVar4;
    if ((int)uVar4 == 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiVoiceTime_026a9da0);
      if ((uVar4 & 1) == 0) {
        local_14 = 0;
        iVar1 = local_14;
      }
      else {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_uiVoiceTime_026a9da0);
        iVar1 = (int)uVar4;
      }
    }
  }
  local_14 = iVar1;
  local_40 = 1;
  _objc_storeStrong(&local_48,0);
LAB_015c19f4:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

