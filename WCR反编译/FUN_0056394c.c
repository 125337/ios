// FUN_0056394c @ 0056394c

undefined1  [16]
FUN_0056394c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined *local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  double local_20;
  double local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  _objc_storeStrong(&local_48,param_5);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsCommentImageEnlarge_026a5238);
  if (((ulong)puVar2 & 1) == 0) {
    dVar3 = local_38;
    dVar4 = local_40;
    (*DAT_028cb510)(local_28,local_30,local_48);
    local_20 = dVar3;
    local_18 = dVar4;
  }
  else {
    FUN_00572978(local_50);
    dVar3 = local_38 * param_1;
    param_1 = local_40 * param_1;
    (*DAT_028cb510)(local_28,local_30,local_48);
    local_20 = dVar3;
    local_18 = param_1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

