// FUN_01817328 @ 01817328

void FUN_01817328(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPreviewSelfAvatarLoading__026b60d8,0);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_previewSelfAvatarURL_026b60c8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setPreviewSelfAvatarImage__026b60e0,
               *(undefined8 *)(param_1 + 0x30));
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  }
  return;
}

