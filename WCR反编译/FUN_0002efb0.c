// FUN_0002efb0 @ 0002efb0

void FUN_0002efb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_78;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (lVar2 == 0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_78 = &cf_A;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showWeToastErrorWithText__0269ced8,local_78);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

