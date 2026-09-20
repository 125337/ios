// FUN_017b5ac4 @ 017b5ac4

void FUN_017b5ac4(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_38 [3];
  undefined1 local_19;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_19 = SUB81(puVar3,0);
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_38[0] == (undefined *)0x0) ||
       (puVar3 = local_38[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0),
       puVar2 = local_38[0], puVar3 == (undefined *)0x0)) {
      uVar4 = 0;
      bVar1 = false;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      uVar4 = 1;
      bVar1 = true;
    }
    _objc_storeStrong(uVar4,local_38,0);
    if (bVar1) goto LAB_017b5d20;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
LAB_017b5d20:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

