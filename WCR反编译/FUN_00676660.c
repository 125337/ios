// FUN_00676660 @ 00676660

void FUN_00676660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_00676e5c(local_28,&cf_WCTableViewSectionManager_addCell);
  if ((uVar1 & 1) == 0) {
    (*DAT_028cbc98)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

