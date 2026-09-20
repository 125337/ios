// FUN_00252580 @ 00252580

void FUN_00252580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *local_58;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  _objc_setAssociatedObject(local_18,DAT_026dfbc0,local_28,3);
  if (local_30 == (cfstringStruct *)0x0) {
    local_58 = &cf___;
  }
  else {
    local_58 = local_30;
  }
  FUN_00257bf8(&cf__TTR_,&cf_eQeTy,local_58,0x14,local_18,
               PTR_s_WCRefine_handleRenameGroupFromHe_026a0eb8,1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

