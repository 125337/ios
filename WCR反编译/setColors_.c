// setColors: @ 01d8f6d0

/* Function Stack Size: 0x18 bytes */

void WCRSSDonutView::setColors_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
  uVar2 = *(undefined8 *)(local_18 + (long)_colors);
  *(undefined8 *)(local_18 + (long)_colors) = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_rebuild_026c4db8);
  _objc_storeStrong(&local_28,0);
  return;
}

