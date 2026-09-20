// FUN_00435074 @ 00435074

void FUN_00435074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_5c;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_5c = 0;
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = param_1;
    FUN_00436dfc(param_1,"m_arrSelectMsgLocalID");
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_00438174();
    local_5c = (uint)uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_5c & 1) == 0) {
    (*DAT_028ca908)(param_1,param_2);
  }
  else {
    (*DAT_028ca908)(param_1,param_2);
  }
  return;
}

