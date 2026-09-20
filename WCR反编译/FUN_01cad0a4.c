// FUN_01cad0a4 @ 01cad0a4

void FUN_01cad0a4(long param_1)

{
  if ((*(long *)(param_1 + 0x28) == 3) || (*(long *)(param_1 + 0x28) == 4)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_presentImagePickerForUpload_026c2fc8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_showPermissionAlert_026c2fd0);
  }
  return;
}

