// wcr_refreshGroupGender: @ 01556e08

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_refreshGroupGender_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c5f20);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  FUN_01556e8c(uVar1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

