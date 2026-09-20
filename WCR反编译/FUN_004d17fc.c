// FUN_004d17fc @ 004d17fc

void FUN_004d17fc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  if ((DAT_028cace8 & 1) != 0) {
    FUN_004d211c();
    if ((uVar1 & 1) != 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_addButtonWithTitle__026a1238);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addButtonWithTitle__026a1238,&cf_XSlS);
      }
    }
  }
  (*DAT_028cacd8)(local_18,local_20,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

