// FUN_001acfa0 @ 001acfa0

void FUN_001acfa0(undefined8 param_1)

{
  undefined **ppuVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  ppuVar1 = &PTR___tlv_bootstrap_028c78f0;
  (*(code *)PTR___tlv_bootstrap_028c78f0)();
  uVar3 = local_18;
  if (((ulong)*ppuVar1 & 1) == 0) {
    pcVar2 = &cf_ContactsViewController;
    _NSClassFromString();
    _objc_msgSend(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
    if ((uVar3 & 1) != 0) {
      ppuVar1 = &PTR___tlv_bootstrap_028c78f0;
      (*(code *)PTR___tlv_bootstrap_028c78f0)();
      *(undefined1 *)ppuVar1 = 1;
      FUN_001ad6dc(local_18);
      FUN_001aa81c(local_18);
      ppuVar1 = &PTR___tlv_bootstrap_028c78f0;
      (*(code *)PTR___tlv_bootstrap_028c78f0)();
      *(undefined1 *)ppuVar1 = 0;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

