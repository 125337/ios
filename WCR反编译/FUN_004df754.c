// FUN_004df754 @ 004df754

void FUN_004df754(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (*DAT_028cada0)(param_1,param_2);
  lVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrefine_removeDoubleTapGesture_026a42b8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrefine_setupDoubleTapGestureIf_026a42b0);
  }
  return;
}

