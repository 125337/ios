// FUN_003c598c @ 003c598c

void FUN_003c598c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  _objc_setAssociatedObject(local_18,&DAT_028ca293,0,1);
  if (DAT_028ca240 != (code *)0x0) {
    (*DAT_028ca240)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

