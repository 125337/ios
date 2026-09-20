// FUN_0183d138 @ 0183d138

void FUN_0183d138(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPreviewAvatarLoading__026b6638,0);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_previewAvatarURL_026b6658);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setPreviewAvatarImage__026b6630,
               *(undefined8 *)(param_1 + 0x30));
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  }
  return;
}

