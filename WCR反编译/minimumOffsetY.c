// minimumOffsetY @ 00066e1c

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRAutoScrollDriver::minimumOffsetY(WCRAutoScrollDriver *this,ID param_1,SEL param_2)

{
  double in_d0;
  ID local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_18 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentInset_0269dcc8);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_adjustedContentInset_0269dcd0);
    local_18 = -in_d0;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

