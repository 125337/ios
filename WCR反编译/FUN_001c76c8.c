// FUN_001c76c8 @ 001c76c8

void FUN_001c76c8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  double dVar3;
  double local_50;
  undefined *local_38;
  double local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_3;
  local_18 = param_2;
  _objc_storeStrong(&local_28,param_4);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = local_30;
  dVar3 = local_30;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_msgBannerBeautifyEnabled_026a06b8);
  bVar1 = false;
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerStaySeconds_026a07f0);
    bVar1 = 0.0 < dVar3;
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerStaySeconds_026a07f0);
    local_50 = dVar3;
  }
  (*DAT_028c8cb8)(local_50,local_18,local_20,local_28);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

