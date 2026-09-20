// FUN_01cd1c30 @ 01cd1c30

void FUN_01cd1c30(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  lVar1 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_startRenameForActionID__026c3678,*(undefined8 *)(param_1 + 0x20));
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

