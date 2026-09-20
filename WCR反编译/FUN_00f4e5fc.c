// FUN_00f4e5fc @ 00f4e5fc

void FUN_00f4e5fc(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_50 = *(undefined **)(param_1 + 0x28);
  bVar1 = local_50 == (undefined *)0x0;
  if (bVar1) {
    local_50 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_presentEmoticonForwardWithPrepar_026ac4b0,uVar3,local_50);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

