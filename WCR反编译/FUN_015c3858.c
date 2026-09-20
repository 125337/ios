// FUN_015c3858 @ 015c3858

void FUN_015c3858(double param_1,long param_2,byte param_3)

{
  if (((param_3 & 1) != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_2 + 0x20),PTR_s_alpha_026ca4d8),
     param_1 < DAT_02323d38)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_2 + 0x20),PTR_s_removeFromSuperview_026ca800);
    FUN_015c34d4(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}

