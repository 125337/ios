// FUN_00878f24 @ 00878f24

void FUN_00878f24(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  ulong local_40;
  undefined1 local_32;
  byte local_31;
  ulong local_30;
  int local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar5 = local_18;
  FUN_008793e0();
  if ((uVar5 & 1) == 0) {
    local_28 = 1;
  }
  else {
    uVar5 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cd88a);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    if ((uVar6 & 1) == 0) {
      uVar6 = local_18;
      FUN_0087952c();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_18;
      local_30 = uVar6;
      if (uVar6 == 0) {
        iVar8 = 1;
        local_28 = 1;
      }
      else {
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar5,&DAT_028cd88a,puVar7,1);
        (*(code *)PTR__objc_release_02578630)();
        uVar4 = (uint)puVar7;
        local_31 = 0;
        FUN_008796f4();
        uVar5 = local_30;
        local_32 = (undefined1)uVar4;
        if ((uVar4 & 1) == 0) {
          local_40 = 0;
          puVar7 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
          if ((uVar5 & 1) != 0) {
            uVar6 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_image_026ca678);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_40;
            local_40 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          bVar3 = local_40 != 0;
          uVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768);
          if ((uint)uVar5 == (uint)bVar3) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHidden__026ca970,!bVar3);
          }
          _objc_storeStrong(&local_40,0);
          local_28 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768);
          if ((uVar5 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHidden__026ca970,1);
          }
          local_28 = 1;
        }
        iVar1 = local_28;
        _objc_setAssociatedObject(local_18,&DAT_028cd88a,0,1);
        if ((local_31 & 1) != 0) {
          _objc_exception_rethrow();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x87930c);
          (*pcVar2)();
        }
        if (iVar1 == 0) {
          local_28 = 0;
          iVar8 = 0;
        }
        else {
          iVar8 = iVar1 + -2;
          local_28 = iVar1;
          if (iVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x8793e0);
            (*pcVar2)();
          }
        }
      }
      _objc_storeStrong(iVar8,&local_30,0);
    }
    else {
      local_28 = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

