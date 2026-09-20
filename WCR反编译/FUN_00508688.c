// FUN_00508688 @ 00508688

void FUN_00508688(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar3 = *(ulong *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_40 = param_1;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_wcrefine_findSearchFieldInView__026a4630);
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_48 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setText__026caa88,*(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_sendActionsForControlEvents__026a4650,0x20000);
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uVar2 & 1) != 0) {
      local_28 = 0;
      local_30 = 0;
      local_20 = 0;
      local_18 = 0;
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  _objc_storeStrong(&local_48,0);
  return;
}

