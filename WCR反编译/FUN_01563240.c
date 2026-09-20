// FUN_01563240 @ 01563240

void FUN_01563240(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_updateToolViewHeight__0269f4d8);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_updateToolViewHeight__0269f4d8,
               *(byte *)(param_1 + 0x28) & 1);
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutIfNeeded_026ca790);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

