// done @0x2d388

/* Function Stack Size: 0x10 bytes */

void WCMCacheController::done(ID param_1,SEL param_2)

{
  undefined8 local_68;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  local_28 = (*(code *)PTR__objc_retain_00110460)(param_1);
  _objc_msgSend_dismissViewControllerAnimated_completion_(param_1,local_68,1);
  _objc_storeStrong(&local_28,0);
  return;
}

