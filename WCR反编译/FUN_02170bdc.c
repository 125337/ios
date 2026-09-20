// FUN_02170bdc @ 02170bdc

void FUN_02170bdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_a8;
  ulong local_90;
  ulong local_60;
  ulong local_58;
  byte local_49;
  ulong local_48;
  ulong local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = param_1;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_49 = 0;
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_90 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_description_026ca5f8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_90;
  }
  else {
    local_90 = local_20;
  }
  local_49 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_90;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_a8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_description_026ca5f8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_a8;
  }
  else {
    local_a8 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_a8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((uVar3 != 0) && (local_58 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,local_58,
               local_40);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

