// FUN_00605038 @ 00605038

void FUN_00605038(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  uint local_44;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_0061d68c(param_1);
  (*DAT_028cb910)(local_18,local_20);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_0232420d);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_0061d7e4();
  local_44 = 0;
  if ((uVar1 & 1) != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_boolValue_026ca540);
    local_44 = (uint)uVar1 ^ 1;
  }
  if ((local_44 & 1) != 0) {
    FUN_006160f0(local_18,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

