// FUN_00180bc8 @ 00180bc8

void FUN_00180bc8(undefined4 *param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_30;
  double local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_3);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  _memset(param_1,0,0x30);
  uVar2 = local_18;
  FUN_00180ae0();
  *param_1 = (int)uVar2;
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(long *)(param_1 + 4) = (long)(local_28 / 86400.0);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contactsRecentAddedSectionEnable_0269faa8);
  *(char *)((long)param_1 + 0x29) = (char)puVar1;
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contactsEarliestAddedSectionEnab_0269fab0);
  *(char *)((long)param_1 + 0x2a) = (char)puVar1;
  if (((*(byte *)((long)param_1 + 0x29) & 1) != 0) || ((*(byte *)((long)param_1 + 0x2a) & 1) != 0))
  {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contactsRecentAddedSectionDays_0269fab8);
    *(undefined **)(param_1 + 6) = puVar1;
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contactsEarliestAddedSectionCoun_0269fac0);
    *(undefined **)(param_1 + 8) = puVar1;
    FUN_00181c38();
    *(char *)(param_1 + 10) = (char)puVar1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

