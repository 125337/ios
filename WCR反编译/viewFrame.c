// viewFrame @ 00fa0050

/* WARNING: Removing unreachable block (ram,0x00fa0280) */
/* Function Stack Size: 0x10 bytes */

CGRect WCRefineHelper::viewFrame(ID param_1,SEL param_2)

{
  CGRect CVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 in_d2;
  double in_d3;
  double dVar7;
  double local_d0;
  undefined *local_88;
  undefined *local_80;
  double local_78;
  undefined8 local_60;
  double local_58;
  SEL local_50;
  ID local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  double local_28;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_60 = in_d2;
  local_58 = in_d3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_78 = 0.0;
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_80;
  puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  puVar3 = local_80;
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_statusBarManager_026acdb8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = in_d3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_80,0);
  local_d0 = 44.0;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    local_d0 = 3.0;
  }
  local_d0 = local_78 + local_d0;
  dVar7 = local_58 - local_d0;
  uVar6 = 0;
  FUN_00f9ba24();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_40 = uVar6;
  local_38 = local_d0;
  local_30 = local_60;
  local_28 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    local_28 = local_28 - 44.0;
  }
  CVar1.field0_0x0.field1_0x8 = local_38;
  CVar1.field0_0x0.field0_0x0 = (double)local_40;
  CVar1.field1_0x10.field0_0x0 = (double)local_30;
  CVar1.field1_0x10.field1_0x8 = local_28;
  return CVar1;
}

