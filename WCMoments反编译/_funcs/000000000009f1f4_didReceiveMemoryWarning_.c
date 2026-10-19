// didReceiveMemoryWarning: @0x9f1f4

/* Function Stack Size: 0x18 bytes */

void WCMYYAnimatedImageView::didReceiveMemoryWarning_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 local_80;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_18 + (long)_requestQueue),local_80);
  uVar1 = *(undefined8 *)(local_18 + (long)_requestQueue);
  local_30 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_msgSend_addOperationWithBlock_(uVar1,local_80);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

