// FUN_008a953c @ 008a953c

void FUN_008a953c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 local_3c;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_3c = 0;
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = param_1;
    FUN_008ab75c();
    local_3c = (uint)uVar3;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_3c & 1) == 0) {
    (*DAT_028cde08)(param_1,param_2);
  }
  else {
    uVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_setBShowingQuickTranTips__026a99a0);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setBShowingQuickTranTips__026a99a0,0);
    }
  }
  return;
}

