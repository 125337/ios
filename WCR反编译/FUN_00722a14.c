// FUN_00722a14 @ 00722a14

void FUN_00722a14(undefined8 param_1)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    _objc_setAssociatedObject(local_18,&DAT_0232427b,0,1);
    FUN_00720de4(&cf_com_qimiao_wcrefine_capture_preview_did_appear,local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

