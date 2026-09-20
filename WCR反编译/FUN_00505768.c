// FUN_00505768 @ 00505768

void FUN_00505768(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar4;
  ulong local_18;
  ulong *puVar3;
  
  puVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  if (((local_18 != 0) &&
      (FUN_005055f8(), puVar1 = PTR_s_setInspectable__026a45f0, (uVar2 & 1) != 0)) &&
     (uVar4 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setInspectable__026a45f0),
     (uVar4 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,puVar1,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

