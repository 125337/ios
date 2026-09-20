// FUN_005635ec @ 005635ec

undefined1  [16]
FUN_005635ec(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  double dVar3;
  undefined *local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  double local_20;
  double local_18;
  
  local_40 = 0;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  _objc_storeStrong(&local_40,param_5);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsCommentImageEnlarge_026a5238);
  if (((ulong)puVar2 & 1) == 0) {
    dVar3 = local_38;
    (*DAT_028cb500)(local_28,local_30,local_40);
    local_20 = dVar3;
    local_18 = param_2;
  }
  else {
    FUN_00572978(local_48);
    dVar3 = local_38 * param_1;
    (*DAT_028cb500)(local_28,local_30,local_40);
    local_20 = dVar3;
    local_18 = param_1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

