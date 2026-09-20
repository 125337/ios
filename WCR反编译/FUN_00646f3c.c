// FUN_00646f3c @ 00646f3c

byte FUN_00646f3c(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  byte local_7c;
  byte local_78;
  ulong local_50;
  ulong local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_11 = 0;
    local_38 = 1;
    goto LAB_0064717c;
  }
  pcVar2 = &cf_MiniTaskViewController;
  _NSClassFromString();
  local_40 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_11 = 0;
    local_38 = 1;
    goto LAB_0064717c;
  }
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_topViewController_0269e588);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_48 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_visibleViewController_0269d460);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar3;
  if (local_48 == 0) {
LAB_006470b8:
    local_7c = 0;
    if (local_50 != 0) {
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_40);
      local_7c = (byte)uVar1;
    }
    local_78 = local_7c;
  }
  else {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,local_40);
    local_78 = 1;
    if ((uVar1 & 1) == 0) goto LAB_006470b8;
  }
  local_11 = local_78 & 1;
  local_38 = 1;
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
LAB_0064717c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

