// FUN_01ac1600 @ 01ac1600

void FUN_01ac1600(long param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *local_58;
  undefined8 local_40;
  int local_34;
  cfstringStruct *local_30;
  long local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if (local_20 == (cfstringStruct *)0x0) {
    local_58 = &cf___;
  }
  else {
    local_58 = local_20;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(local_58);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_34 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_copy_0269d150);
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setName__0269e0c8,local_30);
    puVar1 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    if (lVar5 != 0) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      lVar4 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

