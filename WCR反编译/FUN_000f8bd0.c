// FUN_000f8bd0 @ 000f8bd0

void FUN_000f8bd0(ulong param_1,undefined8 param_2)

{
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_delegate_0269e808);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  FUN_000f8dac();
  FUN_000f8ec0(local_28,(uint)param_1 & 1);
  if ((param_1 & 1) == 0) {
    FUN_000f902c(local_28);
  }
  (*DAT_028c8448)(local_18,local_20);
  _objc_storeStrong(&local_28,0);
  return;
}

