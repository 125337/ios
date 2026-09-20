// FUN_01c52dc4 @ 01c52dc4

void FUN_01c52dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_5 + 0x30);
  FUN_01c52ab4(*(undefined8 *)(param_5 + 0x20));
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x28),PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x20),PTR_s_setFrame__026ca960)
  ;
  return;
}

