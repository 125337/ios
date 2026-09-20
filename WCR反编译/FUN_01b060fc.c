// FUN_01b060fc @ 01b060fc

void FUN_01b060fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_80;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_1;
  local_20 = param_3;
  local_18 = param_4;
  _objc_storeStrong(&local_30);
  puVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_40 = param_1;
  local_38 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_51 = 0;
  bVar1 = ((ulong)puVar3 & 1) == 0;
  if (bVar1) {
    local_80 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402b000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_80;
  }
  else {
    local_80 = local_30;
  }
  local_51 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_80;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  puVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),local_48,PTR_s_fontWithSize__026bb268);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_48;
  local_60 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_fontDescriptor_026a1d50);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((uint)puVar3 >> 1 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)PTR__UIFontWeightBold_02578140,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_60;
    local_60 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addAttribute_value_range__026a1d88,
             *(undefined8 *)PTR__NSFontAttributeName_02578068,local_60,local_20,local_18);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  return;
}

