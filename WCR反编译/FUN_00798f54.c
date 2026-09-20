// FUN_00798f54 @ 00798f54

void FUN_00798f54(undefined8 param_1,uint param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = &cf_setSectionFootersPinToVisibleBounds_;
  _NSSelectorFromString();
  if ((local_18 != 0) &&
     (uVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1),
     (uVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1,param_2 & 1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

