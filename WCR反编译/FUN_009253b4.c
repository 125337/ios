// FUN_009253b4 @ 009253b4

void FUN_009253b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_58;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  long local_20;
  long local_18;
  
  if ((DAT_028ce368 & 1) != 0) {
    puVar1 = PTR_WCNavigationMonitor_026cea60;
    local_20 = param_1;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isMonitoring_026aa5a0);
    if (((ulong)puVar1 & 1) == 0) {
      local_2c = 1;
    }
    else {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_shouldIgnoreViewController__026aa5a8,*(undefined8 *)(param_1 + 0x20)
                );
      if (((ulong)puVar1 & 1) == 0) {
        puVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_formattedNameForViewController__026aa598,
                   *(undefined8 *)(param_1 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_28;
        lVar3 = *(long *)(param_1 + 0x30);
        local_38 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
        if (puVar2 == (undefined *)0x0) {
          local_58 = *(undefined **)(param_1 + 0x28);
        }
        else {
          local_58 = local_38;
        }
        (**(code **)(lVar3 + 0x10))(lVar3,puVar1,local_58);
        _objc_storeStrong(&local_38,0);
        local_2c = 0;
      }
      else {
        local_2c = 1;
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

