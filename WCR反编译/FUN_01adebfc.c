// FUN_01adebfc @ 01adebfc

void FUN_01adebfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0x4042000000000000;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_5 + 0x20),PTR_s_wcr_forceAvatarGeometry_size__026be218,
             *(undefined8 *)(param_5 + 0x28));
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x30),PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x28),PTR_s_setFrame__026ca960)
  ;
  return;
}

