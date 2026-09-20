// height @ 01e55370

/* Function Stack Size: 0x10 bytes */

double WCRefineTelegramTabStripView::height(ID param_1,SEL param_2)

{
  double in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_50;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  _CGRectGetHeight(in_d0,in_d1,in_d2,in_d3);
  local_50 = in_d0;
  if (in_d0 <= 1.0) {
    local_50 = 44.0;
  }
  return local_50;
}

