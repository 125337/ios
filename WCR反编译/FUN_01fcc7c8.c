// FUN_01fcc7c8 @ 01fcc7c8

void FUN_01fcc7c8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_a0;
  ulong local_88;
  ulong local_70;
  long local_58;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  long local_28;
  long local_20;
  long local_18;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(long *)(param_1 + 0x20);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  uVar2 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_70 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  else {
    local_70 = *(ulong *)(param_1 + 0x20);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_70;
  FUN_01fccab8();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((local_70 & 1) == 0) {
    local_88 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  else {
    local_88 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_88;
  if (local_28 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeAllObjects_0269d508);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addEntriesFromDictionary__026a2e30,local_40);
  }
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
  local_a0 = uVar2;
  if (uVar2 == 0) {
    local_a0 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  _objc_storeStrong(&DAT_028e4908,local_a0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  DAT_028e4944 = 0;
  DAT_028e4929 = 1;
  FUN_01fcc320(DAT_028e4908);
  FUN_01fcc414(DAT_028e4908);
  FUN_01fcb5e8();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

