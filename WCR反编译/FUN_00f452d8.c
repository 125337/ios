// FUN_00f452d8 @ 00f452d8

void FUN_00f452d8(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_70;
  ulong local_48 [3];
  uint local_2c;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar2);
  bVar1 = (*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) & 1) == 0;
  if (bVar1) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  }
  local_2c = (uint)!bVar1;
  _objc_sync_exit(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_2c == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_removeObject__0269d678,
               *(undefined8 *)(param_1 + 0x20));
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setCompleteBlock__026ac2c0);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setCompleteBlock__026ac2c0,0);
    }
    uVar3 = local_20;
    puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      local_70 = 0;
    }
    else {
      local_70 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    _NSLog(&cf__wcr__emoticon_videoofficialconvertcompletedbytes__lu);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),local_48[0]);
    _objc_storeStrong(local_48,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

