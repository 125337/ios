// setOnDismiss: @ 021ce6c8

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatFanMenuView::setOnDismiss_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  code *local_50;
  undefined *local_48;
  
  pvVar1 = __Block_copy((void *)param_3);
  (*(code *)PTR__objc_retain_02578638)(param_1);
  if (pvVar1 == (void *)0x0) {
    local_50 = (code *)0x0;
    local_48 = (undefined *)0x0;
  }
  else {
    local_48 = &DAT_0258dd60;
    _swift_allocObject(&DAT_0258dd60,0x18,7);
    *(void **)(local_48 + 0x10) = pvVar1;
    local_50 = FUN_021ce894;
  }
  __s8WCRefine24WCRSuperFloatFanMenuViewC9onDismissyycSgvs(local_50,local_48);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

