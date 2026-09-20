// FUN_004cbcb0 @ 004cbcb0

void FUN_004cbcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_4 + 0x20),PTR_s_frame_026ca640);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,param_2,param_3,DAT_02323d38,*(undefined8 *)(param_4 + 0x20),
             PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_4 + 0x20),PTR_s_setHidden__026ca970,1)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(0,*(undefined8 *)(param_4 + 0x20),PTR_s_setAlpha__026ca860);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_4 + 0x20),PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_4 + 0x28),PTR_s_setTableHeaderView__0269ea10,
             *(undefined8 *)(param_4 + 0x20));
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_4 + 0x28),PTR_s_layoutIfNeeded_026ca790);
  return;
}

