// FUN_01562c04 @ 01562c04

void FUN_01562c04(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_reloadInputViews_026b05f0);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadInputViews_026b05f0);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_becomeFirstResponder_0269d108);
  local_48 = *(long *)(param_1 + 0x28);
  bVar1 = local_48 == 0;
  if (bVar1) {
    FUN_01562e38();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar3;
    local_28 = lVar3;
  }
  FUN_01562d20(local_48,1);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

