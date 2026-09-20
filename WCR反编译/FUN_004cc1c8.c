// FUN_004cc1c8 @ 004cc1c8

void FUN_004cc1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_4 + 0x20),PTR_s_frame_026ca640);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,param_2,param_3,*(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x20)
             ,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_4 + 0x20),PTR_s_setHidden__026ca970,0)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,*(undefined8 *)(param_4 + 0x20),PTR_s_setAlpha__026ca860);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_4 + 0x20),PTR_s_setUserInteractionEnabled__026caad8,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_4 + 0x28),PTR_s_setTableHeaderView__0269ea10,
             *(undefined8 *)(param_4 + 0x20));
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_4 + 0x28),PTR_s_layoutIfNeeded_026ca790);
  return;
}

