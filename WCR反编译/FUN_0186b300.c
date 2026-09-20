// FUN_0186b300 @ 0186b300

void FUN_0186b300(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_30;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_sheet_026aa728);
  _objc_retainAutoreleasedReturnValue();
  local_30 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_sheet_026aa728);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = (uint)uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if ((local_30 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_sheet_026aa728);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  return;
}

