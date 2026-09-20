// FUN_01577f90 @ 01577f90

void FUN_01577f90(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UISwitch_026cea90;
    _objc_alloc_init();
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setOn__0269dc80,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),local_28);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

