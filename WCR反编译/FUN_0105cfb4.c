// FUN_0105cfb4 @ 0105cfb4

void FUN_0105cfb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long local_70;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasMedia_026ada58);
  if ((uVar1 & 1) == 0) {
    if (local_28 == 0) {
      local_70 = *(long *)(param_1 + 0x30);
    }
    else {
      local_70 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_parseTikTokEmbedFallback_sourceU_026ae0d8,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),local_70,
               *(undefined8 *)(param_1 + 0x38));
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),local_20,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

