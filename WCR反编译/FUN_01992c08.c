// FUN_01992c08 @ 01992c08

void FUN_01992c08(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_58;
  undefined *local_38;
  undefined *local_28;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_58 = *(undefined **)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  else {
    local_58 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___eQ_O_N0_);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_58;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_58);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

