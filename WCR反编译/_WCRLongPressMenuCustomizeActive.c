// _WCRLongPressMenuCustomizeActive @ 010f4970

uint _WCRLongPressMenuCustomizeActive(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 local_14;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_14 = 0;
  uVar1 = (uint)puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    _WCRLongPressMenuFeatureAllowed();
    local_14 = uVar1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return local_14 & 1;
}

