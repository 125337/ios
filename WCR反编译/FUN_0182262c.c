// FUN_0182262c @ 0182262c

void FUN_0182262c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_reloadTableData_0269dca8);
  return;
}

