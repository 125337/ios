// FUN_00240f2c @ 00240f2c

void FUN_00240f2c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  
  puVar1 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = *(undefined8 *)(param_1 + 0x28);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_hideIncomingCallUIFromHintView_u_026a0cf0,uVar3,local_40);
  return;
}

