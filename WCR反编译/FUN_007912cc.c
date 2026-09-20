// FUN_007912cc @ 007912cc

void FUN_007912cc(long param_1,undefined8 param_2,byte param_3,byte param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  (*DAT_028cca80)(param_1,param_2,param_3 & 1,param_4 & 1);
  lVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_st_switchThemes_026a80b0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_st_switchThemes_026a80b0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (uint)lVar4 != (param_3 & 1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (bVar1) {
    lVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_st_switchThemes_026a80b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_st_switchThemes_026a80b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_st_switchThemes_026a80b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

