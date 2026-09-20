// FUN_017d78f4 @ 017d78f4

void FUN_017d78f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_40;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_titleLabel_026caba0);
  if ((uVar2 & 1) == 0) {
    local_34 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setNumberOfLines__026ca9d8,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setLineBreakMode__026ca988,1);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
    if (local_34 == 0) {
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

