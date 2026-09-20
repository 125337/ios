// presentFromViewController:halfScreen: @ 01e4a894

/* Function Stack Size: 0x1c bytes */

void WCRefineTelegramGroupingViewController::presentFromViewController_halfScreen_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  ID local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  IVar1 = local_18;
  _objc_alloc_init();
  local_38 = IVar1;
  FUN_01e4a928(local_28,IVar1,&cf_u5ubR_,local_29 & 1);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

