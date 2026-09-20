// FUN_01aa5660 @ 01aa5660

void FUN_01aa5660(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  pcVar1 = &cf_setSectionHeaderTopPadding_;
  _NSSelectorFromString();
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,pcVar1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

