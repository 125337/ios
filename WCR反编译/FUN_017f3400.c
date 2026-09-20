// FUN_017f3400 @ 017f3400

void FUN_017f3400(float param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_floatValue_026a5b48);
    puVar1 = PTR_WCRefineHelper_026ce000;
    dVar4 = (double)param_1;
    if ((dVar4 < *(double *)(param_2 + 0x30)) || (*(double *)(param_2 + 0x38) < dVar4)) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_V_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      if (*(long *)(param_2 + 0x20) != 0) {
        (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(dVar4);
      }
      param_2 = param_2 + 0x28;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_2);
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

