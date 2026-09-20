// FUN_00563ce4 @ 00563ce4

undefined8 FUN_00563ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_18 = local_20;
  pcVar1 = DAT_028cb520;
  local_38 = param_4;
  if (local_30 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    (*pcVar1)(local_18,local_28,local_30,local_38);
    local_48 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    if ((puVar2 == (undefined *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsCommentImageEnlarge_026a5238),
       uVar3 = local_20, pcVar1 = DAT_028cb520, ((ulong)puVar2 & 1) == 0)) {
      uVar3 = local_20;
      pcVar1 = DAT_028cb520;
      (*(code *)PTR__objc_retain_02578638)();
      (*pcVar1)(uVar3,local_28,local_30,local_38);
      local_18 = uVar3;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      (*pcVar1)(uVar3,local_28,local_30,2);
      local_18 = uVar3;
    }
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

