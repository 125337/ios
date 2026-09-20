// FUN_0018cb98 @ 0018cb98

void FUN_0018cb98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_integerValue_026ca750);
  if (((-1 < lVar1) && (lVar1 < *(long *)(param_1 + 0x28))) &&
     (uVar2 = local_28, FUN_0018cce0(lVar1 - *(long *)(param_1 + 0x28)), (uVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addIndex__0269fc98,lVar1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

