// FUN_017fff74 @ 017fff74

void FUN_017fff74(float param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  if ((local_20 != 0) &&
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_floatValue_026a5b48);
    dVar4 = (double)param_1;
    if ((dVar4 < 0.0) || (1.0 < dVar4)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_f_V0);
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_setValue_forKey__0269d300,puVar2,*(undefined8 *)(param_2 + 0x28));
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_2 + 0x20),PTR_s_saveConfig_0269e5d0);
      param_2 = param_2 + 0x30;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_2);
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

