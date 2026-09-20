// FUN_0086d60c @ 0086d60c

void FUN_0086d60c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *local_a8;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  uint local_60;
  ulong local_50;
  cfstringStruct *local_48;
  ulong local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar2;
  if (local_38 == (cfstringStruct *)0x0) {
    local_a8 = &cf___;
  }
  else {
    local_a8 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_a8;
  uVar2 = local_40;
  _objc_getAssociatedObject(local_40,&DAT_028cd8c9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_40;
  local_50 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tag_026cab98);
  if ((uVar4 != 0x16070) &&
     (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    (*DAT_028cd6f8)(local_28,local_30,local_48);
    local_60 = 1;
    goto LAB_0086dc1c;
  }
  if (((DAT_028cd865 & 1) == 0) &&
     (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    (*DAT_028cd6f8)(local_28,local_30,local_48);
    local_60 = 1;
    goto LAB_0086dc1c;
  }
  uVar4 = local_40;
  FUN_0088bf44(local_40,local_48);
  uVar2 = local_50;
  if ((uVar4 & 1) != 0) {
    uVar2 = local_40;
    FUN_0088c738(local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar2;
    FUN_0088c320();
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      (*DAT_028cd6f8)(local_28,local_30,local_48);
    }
    else {
      (*DAT_028cd6f8)(local_28,local_30,local_90);
    }
    local_60 = (uint)(uVar2 != 0);
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    goto LAB_0086dc1c;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
LAB_0086dac8:
    (*DAT_028cd6f8)(local_28,local_30,local_48);
    local_60 = 1;
  }
  else {
    FUN_00883bb0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = (ulong)DAT_028cd865;
    local_70 = uVar2;
    if ((DAT_028cd865 & 1) == 0) {
LAB_0086d9a8:
      uVar2 = local_68;
      FUN_0088c320(uVar4);
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar2;
      _objc_setAssociatedObject(local_40,&DAT_028cd8c9,0,3);
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if ((pcVar3 == (cfstringStruct *)0x0) ||
         (pcVar3 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_80),
         ((ulong)pcVar3 & 1) != 0)) {
        (*DAT_028cd6f8)(local_28,local_30,local_68);
        local_60 = 1;
      }
      else {
        local_60 = 0;
      }
      _objc_storeStrong(&local_80,0);
    }
    else {
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tag_026cab98);
      uVar4 = uVar4 - 0x16070;
      if ((uVar4 != 0) ||
         (uVar4 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
         uVar4 != 0)) goto LAB_0086d9a8;
      uVar2 = local_68;
      FUN_0088c320();
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      bVar1 = uVar2 != 0;
      if (bVar1) {
        (*DAT_028cd6f8)(local_28,local_30,local_78);
      }
      local_60 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_78,0);
      if (local_60 == 0) {
        uVar4 = 0;
        goto LAB_0086d9a8;
      }
    }
    _objc_storeStrong(&local_70,0);
    if (local_60 == 0) goto LAB_0086dac8;
  }
  _objc_storeStrong(&local_68,0);
LAB_0086dc1c:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

