// FUN_0075ded4 @ 0075ded4

void FUN_0075ded4(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = &cf_wcr_special_original_setPlaceholder_animated_;
  _NSSelectorFromString();
  if (pcVar1 != (cfstringStruct *)0x0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1,local_28,param_4 & 1);
    }
  }
  FUN_00767584(local_18);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

