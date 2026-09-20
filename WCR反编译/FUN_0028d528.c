// FUN_0028d528 @ 0028d528

void FUN_0028d528(undefined8 param_1,byte param_2,undefined8 param_3)

{
  cfstringStruct *local_60;
  cfstringStruct *local_28;
  byte local_19;
  undefined8 local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == (cfstringStruct *)0x0) {
    local_60 = &cf__OX_0RvQ;
    if ((local_19 & 1) == 0) {
      local_60 = &cf_OX_1Y_;
    }
  }
  else {
    local_60 = local_28;
  }
  FUN_00276c80(local_19 & 1,local_60,0);
  _objc_storeStrong(&local_28,0);
  return;
}

