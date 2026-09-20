// FUN_004c4ef0 @ 004c4ef0

void FUN_004c4ef0(long param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  pcVar1 = &cf_setTableHeaderTopViewHiddenIfNotLimitedMode_;
  local_20 = param_1;
  local_18 = param_1;
  _NSSelectorFromString();
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),local_28,0);
  }
  pcVar1 = &cf_startDragToShow;
  _NSSelectorFromString();
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),local_30);
  }
  local_38 = 0;
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_valueForKey__0269d128,&cf_m_taskBarView);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_38 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_38 != 0) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setVisible__026a3ff8);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVisible__026a3ff8,1);
    }
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reloadData_0269e400);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),1);
  FUN_004c5174(*(undefined8 *)(param_1 + 0x20));
  _objc_storeStrong(&local_38,0);
  return;
}

