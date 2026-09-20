// FUN_002da5b0 @ 002da5b0

void FUN_002da5b0(long param_1)

{
  ulong uVar1;
  cfstringStruct *local_40 [3];
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  FUN_002da398(*(undefined8 *)(param_1 + 0x20),0,&cf_MMTabBarBase_interactivePop_end);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isCancelled_026a1c20);
  local_40[0] = &cf_MMTabBarBase_interactivePop_cancelled;
  if ((uVar1 & 1) == 0) {
    local_40[0] = &cf_MMTabBarBase_interactivePop_settle;
  }
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_002da738(uVar1,local_40[0]);
  if ((uVar1 & 1) == 0) {
    FUN_002b7184(*(undefined8 *)(param_1 + 0x20),&cf_MMTabBarBase_interactivePop_finished);
    FUN_002d77c4(*(undefined8 *)(param_1 + 0x28),0,&cf_MMTabBarBase_interactivePop_finished);
  }
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_20,0);
  return;
}

