// FUN_0066e134 @ 0066e134

void FUN_0066e134(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 != 0) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88),
     (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setText__026caa88,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

