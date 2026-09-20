// setBackgroundVideoActive: @ 01e7c860

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoCardView::setBackgroundVideoActive_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  ID IVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setBackgroundVideoPausedByVisibi_026be680,(param_3 & 0xff ^ 1) & 1);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundPlayer_026be668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 != 0) {
    bVar1 = false;
    if ((param_3 & 1) != 0) {
      IVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = IVar2 != 0;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundPlayer_026be668);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundPlayer_026be668);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
  }
  return;
}

