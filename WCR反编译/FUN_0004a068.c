// FUN_0004a068 @ 0004a068

byte FUN_0004a068(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_50;
  uint local_44;
  undefined *local_40 [3];
  undefined *local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoAcceptTransferReplyEnabled_0269d710);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoAcceptTransferReplyContent_0269d718);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_000370d0();
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
    bVar1 = puVar2 != (undefined *)0x0;
    if (bVar1) {
      local_11 = 1;
    }
    local_44 = (uint)bVar1;
    _objc_storeStrong(bVar1,local_40,0);
    if (local_44 != 0) goto LAB_0004a298;
  }
  uVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_fixedInviteRule);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar4;
  FUN_0004a328();
  local_11 = (byte)uVar4 & 1;
  local_44 = 1;
  _objc_storeStrong(&local_50,0);
LAB_0004a298:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

