// FUN_0086e568 @ 0086e568

void FUN_0086e568(undefined8 param_1,undefined8 param_2)

{
  (*DAT_028cd710)(param_1,param_2);
  if ((DAT_028cd85a & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setHidden__026ca970,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),param_1,PTR_s_setFrame__026ca960);
  }
  return;
}

