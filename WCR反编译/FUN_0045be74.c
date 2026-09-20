// FUN_0045be74 @ 0045be74

void FUN_0045be74(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  uint local_38;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar3 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_28 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar2 = local_28;
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layoutIfNeeded_026ca790);
    FUN_00459e94(local_28);
    uVar3 = local_28;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_68 = PTR___NSConcreteGlobalBlock_02578658;
    local_60 = 0xd0800000;
    local_5c = 0;
    local_58 = FUN_0045c088;
    local_50 = &DAT_0257a9d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_performWithoutAnimation__0269e7e0,&local_68);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  local_38 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

