// FUN_01e8e71c @ 01e8e71c

void FUN_01e8e71c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,DAT_028e47d8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,DAT_028e47e0);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isLoading_026ae188);
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      if ((uVar2 & 1) == 0) {
        local_48 = PTR___NSConcreteStackBlock_02578660;
        local_40 = 0xc2000000;
        local_3c = 0;
        local_38 = FUN_01e8e864;
        local_30 = &DAT_0257a800;
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323c70,puVar1,PTR_s_animateWithDuration_animations__026ca4e0,&local_48);
        _objc_storeStrong(&local_28,0);
      }
    }
  }
  return;
}

