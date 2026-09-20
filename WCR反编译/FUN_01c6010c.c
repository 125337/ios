// FUN_01c6010c @ 01c6010c

void FUN_01c6010c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  float fVar4;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  double local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = local_20;
  fVar4 = 0.0;
  local_30 = 0.0;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_whitespaceCharacterSet_0269d768);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_Q);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_q),
     (uVar2 & 1) == 0)) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__Q);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__q),
       (uVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatValue_026a5b48);
      local_30 = (double)fVar4;
      if (local_30 < -20.0) {
        local_30 = -20.0;
      }
      if (20.0 < local_30) {
        local_30 = 20.0;
      }
    }
    else {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringFromIndex__0269d120,2);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_floatValue_026a5b48);
      local_30 = (double)fVar4;
      if (local_30 < -20.0) {
        local_30 = -20.0;
      }
      if (20.0 < local_30) {
        local_30 = 20.0;
      }
      local_30 = -local_30 - 1000.0;
      _objc_storeStrong(&local_48,0);
    }
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringFromIndex__0269d120,1);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_floatValue_026a5b48);
    local_30 = (double)fVar4;
    if (local_30 < -20.0) {
      local_30 = -20.0;
    }
    if (20.0 < local_30) {
      local_30 = 20.0;
    }
    iVar3 = 1000;
    if (local_30 < 0.0) {
      iVar3 = -1000;
    }
    local_30 = local_30 + (double)iVar3;
    _objc_storeStrong(&local_40,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,*(undefined8 *)(param_1 + 0x20),
             PTR_s_setTqqOnlineTextHorizontalOffset_026c1e50);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_saveSettings_026b9548)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  return;
}

