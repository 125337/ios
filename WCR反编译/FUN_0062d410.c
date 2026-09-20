// FUN_0062d410 @ 0062d410

void FUN_0062d410(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = &cf_handleOtherAvatarTap_;
  _NSSelectorFromString();
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_performSelector_withObject__026ca7c0,pcVar1,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

