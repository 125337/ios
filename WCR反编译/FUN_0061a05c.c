// FUN_0061a05c @ 0061a05c

void FUN_0061a05c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_58 [3];
  long local_40;
  int local_34;
  ulong local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if ((local_28 == 0) || (local_30 == 0)) {
    local_34 = 1;
  }
  else {
    lVar4 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_0232420e);
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = 0;
    uVar1 = local_30;
    local_40 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_sections);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_58[0];
    local_58[0] = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_58[0];
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      if ((local_40 != 0) &&
         (uVar3 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_removeSectionAt__026a6000),
         (uVar3 & 1) != 0)) {
        uVar3 = local_30;
        FUN_0061a9b4();
        local_88 = uVar3;
        for (local_90 = 0; local_90 < local_88; local_90 = local_90 + 1) {
          uVar3 = local_30;
          FUN_0061abe0(local_90 - local_88,local_30,local_90);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = uVar3 - local_40;
          local_98 = uVar3;
          if (lVar4 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeSectionAt__026a6000,local_90)
            ;
            lVar4 = 6;
            local_34 = 6;
          }
          else {
            local_34 = 0;
          }
          _objc_storeStrong(lVar4,&local_98,0);
          if (local_34 != 0) break;
        }
      }
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_removeSectionAt__026a6000);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_30;
        FUN_0061a9b4();
        local_a0 = uVar3;
        local_a8 = uVar3;
        while (local_a8 = local_a8 - 1, -1 < (long)local_a8) {
          uVar3 = local_30;
          FUN_0061abe0(local_30,local_a8);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = uVar3;
          if ((uVar3 - local_40 != 0) && (FUN_0061ae80(uVar3 - local_40), (uVar3 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeSectionAt__026a6000,local_a8)
            ;
          }
          _objc_storeStrong(&local_b0,0);
        }
      }
      _objc_setAssociatedObject(local_28,&DAT_0232420e,0,1);
      local_34 = 0;
    }
    else {
      if (((local_40 != 0) &&
          (uVar3 = local_58[0],
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58[0],PTR_s_indexOfObjectIdenticalTo__0269e160,local_40),
          local_68 = uVar3, uVar3 != 0x7fffffffffffffff)) &&
         (uVar3 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_removeSectionAt__026a6000),
         (uVar3 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeSectionAt__026a6000,local_68);
      }
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_removeSectionAt__026a6000);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_30;
        FUN_0061a9b4();
        local_70 = uVar3;
        local_78 = uVar3;
        while (local_78 = local_78 - 1, -1 < (long)local_78) {
          uVar3 = local_30;
          FUN_0061abe0(local_30,local_78);
          _objc_retainAutoreleasedReturnValue();
          local_80 = uVar3;
          if ((uVar3 - local_40 != 0) && (FUN_0061ae80(uVar3 - local_40), (uVar3 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeSectionAt__026a6000,local_78)
            ;
          }
          _objc_storeStrong(&local_80,0);
        }
      }
      _objc_setAssociatedObject(local_28,&DAT_0232420e,0,1);
      local_34 = 1;
    }
    _objc_storeStrong(local_58);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

