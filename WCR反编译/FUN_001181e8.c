// FUN_001181e8 @ 001181e8

void FUN_001181e8(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (((lVar2 == 0) ||
      (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
      pcVar5 = DAT_028c8550, lVar2 == 0)) || (DAT_028c8550 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    local_40 = (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(pcVar5);
    pcVar3 = DAT_028c8550;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028c8550,PTR_s_objectForKeyedSubscript__0269d098,local_20);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_40;
    local_40 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    _objc_sync_exit(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = local_40;
    FUN_0010ee50();
    _objc_retainAutoreleasedReturnValue();
    local_38 = 1;
    local_18 = pcVar5;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

