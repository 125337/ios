// FUN_0086ef74 @ 0086ef74

void FUN_0086ef74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if ((DAT_028cd85b & 1) == 0) {
    (*DAT_028cd730)(param_4,param_5);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_4,PTR_s_setHidden__026ca970,1);
    (*(code *)PTR__objc_msgSend_02578628)(param_4,PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,0,param_4,PTR_s_setFrame__026ca960);
  }
  return;
}

