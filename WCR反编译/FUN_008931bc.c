// FUN_008931bc @ 008931bc

void FUN_008931bc(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_0089ccc0();
  puVar1 = PTR____NSArray0___02578280;
  if ((uVar2 & 1) == 0) {
    (*DAT_028cd9b0)(param_1,param_2);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setJailbreakModules__026a92e8,*(undefined8 *)PTR____NSArray0___02578280
              );
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setSuspiciousModules__026a92d8,*(undefined8 *)puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setIsAlreadyGet__026a9698,1);
  }
  return;
}

