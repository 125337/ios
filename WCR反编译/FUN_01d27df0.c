// FUN_01d27df0 @ 01d27df0

void FUN_01d27df0(long param_1)

{
  bool bVar1;
  long lVar2;
  long local_40;
  uint local_34;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  bVar1 = lVar2 != 0;
  local_30 = lVar2;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_normalizedNotificationFormat__026c4310,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setRedEnvelopNotificationFormat__026c4348,lVar2
              );
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_saveConfig_0269e5d0)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

