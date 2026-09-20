// FUN_01788718 @ 01788718

void FUN_01788718(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int local_44;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UISwitch_026cea90;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UISwitch_026cea90,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_44 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
    local_44 = (int)uVar2;
  }
  FUN_017888a0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),local_44 != 0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_017892e0(uVar3,*(undefined8 *)(param_1 + 0x28));
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UISwitch_026cea90;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UISwitch_026cea90,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
    if ((uint)uVar2 != ((byte)uVar3 & 1)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,(byte)uVar3 & 1);
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

