// FUN_0067b540 @ 0067b540

void FUN_0067b540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  uint local_40;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar4 = local_28;
  _objc_getAssociatedObject(local_28,DAT_026f4518);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_30 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    uVar4 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026f4520);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_48 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_0067d1c8();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar4 = (ulong)((uint)uVar4 & 1);
    FUN_0067d668(uVar4,local_48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setText__026caa88);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_48,0);
  }
  local_40 = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

