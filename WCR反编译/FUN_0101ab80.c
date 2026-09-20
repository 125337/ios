// FUN_0101ab80 @ 0101ab80

void FUN_0101ab80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_90;
  ulong local_68;
  ulong local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_68 = 0;
  }
  else {
    local_68 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_68;
  if (((*(byte *)(param_1 + 0x48) & 1) != 0) && (local_68 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_URL_026a1c90);
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar2;
    if (uVar2 == 0) {
      local_90 = *(ulong *)(param_1 + 0x20);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_storeTikTokCookiesFromResponse_U_026adc98,local_68,local_90);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),local_20,local_40,local_30);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_finishTasksAndInvalidate_026a15a8);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

