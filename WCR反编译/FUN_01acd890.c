// FUN_01acd890 @ 01acd890

void FUN_01acd890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0x4040000000000000;
  FUN_01acd34c(*(undefined8 *)(param_5 + 0x20));
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x28),PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x20),PTR_s_setFrame__026ca960)
  ;
  return;
}

