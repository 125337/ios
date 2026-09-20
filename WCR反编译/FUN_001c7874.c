// FUN_001c7874 @ 001c7874

void FUN_001c7874(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  double dVar3;
  double local_38;
  undefined *local_30;
  double local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_1;
  local_20 = param_3;
  local_18 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_28;
  dVar3 = local_28;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_msgBannerBeautifyEnabled_026a06b8);
  bVar1 = false;
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_msgBannerStaySeconds_026a07f0);
    bVar1 = 0.0 < dVar3;
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_msgBannerStaySeconds_026a07f0);
    local_38 = dVar3;
  }
  (*DAT_028c8cc0)(local_38,local_18,local_20);
  _objc_storeStrong(&local_30,0);
  return;
}

