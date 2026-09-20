// FUN_008dd2dc @ 008dd2dc

void FUN_008dd2dc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_78;
  undefined *local_28;
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (lVar2 == 0) {
    pcVar5 = *(cfstringStruct **)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_78 = &cf__eQ1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_hideWeToastAndShowErrorWithText__0269f838,local_78,
               *(undefined8 *)(param_1 + 0x30));
    (*(code *)PTR__objc_release_02578630)(pcVar5);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf___eQ0_);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,local_28,
               *(undefined8 *)(param_1 + 0x30));
    _objc_storeStrong(&local_28,0);
  }
  return;
}

