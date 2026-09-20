// FUN_0077f64c @ 0077f64c

void FUN_0077f64c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (*DAT_028cc9c8)(param_1,param_2);
  lVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrefine_resetSwipeAnimated__026a8008,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrefine_setupSwipeGestureIfNeed_026a7ff8);
  }
  return;
}

