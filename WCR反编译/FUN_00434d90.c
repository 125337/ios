// FUN_00434d90 @ 00434d90

float FUN_00434d90(float param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  float local_5c;
  
  uVar1 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_m_scene_026a3a18);
  uVar2 = param_2;
  (*DAT_028ca8f0)(param_2,param_3);
  FUN_00437f68();
  local_5c = param_1;
  if (((uVar2 & 1) != 0) && (uVar2 = uVar1, FUN_00438004(), (uVar2 & 1) != 0)) {
    local_5c = 18000.0;
  }
  FUN_0043808c((double)param_1,(double)local_5c,param_2,&cf_toolbar_capture,uVar1,1);
  return local_5c;
}

