// FUN_003fcc18 @ 003fcc18

void FUN_003fcc18(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  
  uVar1 = param_1;
  FUN_003fe19c();
  if (((uVar1 & 1) == 0) && (FUN_00400c3c(), (uVar1 & 1) != 0)) {
    pcVar2 = &cf_WCAccountBackDeviceFirstViewController;
    _NSClassFromString();
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       (uVar1 = param_1,
       (*(code *)PTR__objc_msgSend_02578628)
                 (param_1,PTR_s_respondsToSelector__026ca818,
                  PTR_s_setRootviewController_withData__026a35a8), (uVar1 & 1) == 0)) {
      (*DAT_028ca640)(param_1,param_2);
    }
    else {
      FUN_00400d94();
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_setRootviewController_withData__026a35a8,pcVar2,0);
    }
  }
  else {
    (*DAT_028ca640)(param_1,param_2);
  }
  return;
}

