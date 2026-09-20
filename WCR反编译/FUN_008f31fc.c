// FUN_008f31fc @ 008f31fc

void FUN_008f31fc(undefined8 param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (((local_18 != 0) && (param_2 != 0)) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,param_2),
     (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,param_2,param_3);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

