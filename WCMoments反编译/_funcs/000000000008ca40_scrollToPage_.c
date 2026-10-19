// scrollToPage: @0x8ca40

/* Function Stack Size: 0x18 bytes */

void WCMYBIBCollectionView::scrollToPage_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double in_d2;
  undefined8 local_60;
  
  _objc_msgSend_bounds(param_1);
  uVar2 = 0;
  uVar1 = _CGPointMake(in_d2 * (double)(long)param_3);
  _objc_msgSend_setContentOffset_(uVar1,uVar2,param_1,local_60);
  return;
}

