// FUN_008a99a4 @ 008a99a4

void FUN_008a99a4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong local_60;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewModel_0269d080);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar4;
  FUN_008ab668(uVar4,PTR_s_messageWrap_0269d070);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  bVar1 = false;
  puVar5 = PTR_WCRefineConfig_026cdf58;
  local_48[0] = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar3 = false;
  if (((ulong)puVar6 & 1) != 0) {
    local_50 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028cde79);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    bVar3 = false;
    if (local_50 != 0) {
      uVar4 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_respondsToSelector__026ca818,PTR_s_IsSameMsg__026a99b8);
      bVar3 = false;
      if ((uVar4 & 1) != 0) {
        uVar4 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_IsSameMsg__026a99b8,local_28);
        bVar3 = false;
        if ((uVar4 & 1) != 0) {
          local_60 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          bVar3 = local_60 != 0;
        }
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setShouldAutoScrollUp__026a99c0,1);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  (*DAT_028cde18)(local_18,local_20,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

