// FUN_014caccc @ 014caccc

void FUN_014caccc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableData_0269dca8);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_performSelector__026ca7b8,
               PTR_s_reloadTableData_0269dca8);
  }
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

