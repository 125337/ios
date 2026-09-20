// FUN_001253cc @ 001253cc

void FUN_001253cc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    if (((uVar2 & 1) != 0) &&
       (puVar3 = PTR_WCRefineAnonymousAtHelper_026ce0e0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefineAnonymousAtHelper_026ce0e0,
                  PTR_s_sendAnonymousAtMessage_atUserLis_0269d3d8,*(undefined8 *)(param_1 + 0x30),
                  local_28,*(undefined8 *)(param_1 + 0x28),0), ((ulong)puVar3 & 1) != 0))
    goto LAB_001254f0;
  }
  FUN_0011e168(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
LAB_001254f0:
  _objc_storeStrong(&local_28,0);
  return;
}

