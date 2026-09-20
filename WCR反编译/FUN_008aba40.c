// FUN_008aba40 @ 008aba40

void FUN_008aba40(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong local_50;
  ulong local_40;
  ulong local_38 [3];
  long local_20;
  long local_18;
  
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (((ulong)puVar5 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    FUN_008ab75c();
    if ((uVar6 & 1) == 0) {
      uVar6 = *(ulong *)(param_1 + 0x20);
      FUN_008ab668(uVar6,PTR_s_cellView_0269e7e8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      bVar1 = false;
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_38[0] = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
      bVar3 = false;
      if ((uVar6 & 1) != 0) {
        local_40 = local_38[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar3 = false;
        if (local_40 != 0) {
          uVar6 = local_38[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38[0],PTR_s_respondsToSelector__026ca818,PTR_s_onVoiceTrans__026a9960);
          bVar3 = false;
          if ((uVar6 & 1) != 0) {
            local_50 = local_38[0];
            FUN_008ab668(local_38[0],PTR_s_viewModel_0269d080);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            bVar3 = local_50 == *(ulong *)(param_1 + 0x20);
          }
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      if (bVar3) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_onVoiceTrans__026a9960,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_translateVoice_026a9968);
      }
      _objc_storeStrong(local_38,0);
    }
  }
  return;
}

