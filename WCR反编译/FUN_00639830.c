// FUN_00639830 @ 00639830

void FUN_00639830(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    uVar3 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026f44d0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_18;
    local_30 = uVar3;
    _objc_getAssociatedObject(local_18,DAT_026f44d8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_applyChatTopBarNameplateOnTitleV_026a5f50,
               local_18,uVar4,local_30,0x769);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  local_28 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

