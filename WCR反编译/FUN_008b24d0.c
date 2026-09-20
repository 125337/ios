// FUN_008b24d0 @ 008b24d0

/* WARNING: Removing unreachable block (ram,0x008b25fc) */

void FUN_008b24d0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  ulong local_168;
  ulong local_c8;
  byte local_b9;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  ulong local_68;
  byte local_59;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = &local_40;
  local_40 = 0;
  _objc_storeStrong(puVar2,param_4);
  local_48 = param_5;
  FUN_008b4e10();
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028cdfb8)(local_28,local_30,local_38,local_40,local_48);
    local_58 = 1;
    goto LAB_008b2ddc;
  }
  FUN_008c0c98();
  if (((ulong)puVar2 & 1) != 0) {
    FUN_008c08b4();
    local_59 = 0;
    (*DAT_028cdfb8)(local_28,local_30,local_38,local_40,local_48);
    local_58 = 0;
    FUN_008c0ca8(0x4008000000000000);
    if ((local_59 & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x8b25ec);
      (*pcVar1)();
    }
    local_58 = 1;
    goto LAB_008b2ddc;
  }
  if ((DAT_028ce015 & 1) != 0) {
    (*DAT_028cdfb8)(local_28,local_30,local_38,local_40,local_48);
    local_58 = 1;
    goto LAB_008b2ddc;
  }
  local_68 = 0;
  local_70 = 0;
  bVar6 = DAT_028ce028;
  if ((DAT_028ce028 & 1) == 0) {
LAB_008b28e8:
    _objc_storeStrong(bVar6,&local_68);
    _objc_storeStrong(&local_70,0);
    uVar3 = local_38;
    FUN_008c5274();
    _objc_retainAutoreleasedReturnValue();
    local_98 = local_68;
    local_a0 = local_70;
    local_90 = uVar3;
    FUN_008c0508(uVar3,&local_98,&local_a0);
    _objc_storeStrong(&local_68,local_98);
    _objc_storeStrong(&local_70,local_a0);
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028ce013);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_68;
    local_a8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
    if ((((uVar4 == 0) && (uVar3 = local_38, FUN_008c5548(), (uVar3 & 1) != 0)) && (local_a8 != 0))
       && (uVar3 = local_a8, FUN_008b50d8(), (uVar3 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addObject__0269d180,local_a8);
    }
    uVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
    if (uVar3 == 0) {
LAB_008b2d70:
      (*DAT_028cdfb8)(local_28,local_30,local_38,local_40,local_48);
      local_58 = 0;
    }
    else {
      local_b9 = 0;
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
      lVar5 = uVar3 - 1;
      if ((lVar5 == 0) &&
         (lVar5 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0),
         lVar5 == 0)) {
        uVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_b9 = 1;
        local_b8 = uVar3;
        FUN_008c38d0();
        local_168 = (ulong)(int)(uint)((uVar3 & 1) != 0);
      }
      else {
        local_168 = local_68;
        FUN_008c0db0(lVar5,local_68,local_40);
      }
      if ((local_b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      local_b0 = local_168;
      lVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
      if ((lVar5 == 0) && (local_b0 != 0)) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_onForwardMessageSend_026a9b58);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onForwardMessageSend_026a9b58);
        }
        uVar3 = local_28;
        _objc_getAssociatedObject(local_28,&DAT_028ce012);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_wcr_closeFavoritePage_026a99c8);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_wcr_closeFavoritePage_026a99c8);
        }
        local_58 = 1;
        _objc_storeStrong(&local_c8,0);
      }
      else {
        lVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
        if (lVar5 == 0) goto LAB_008b2d70;
        (*DAT_028cdfb8)(local_28,local_30,local_70,local_40,local_48);
        local_58 = 1;
      }
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_90,0);
  }
  else {
    local_78 = 0;
    local_80 = 0;
    FUN_008c0508(local_38,&local_78,&local_80);
    _objc_storeStrong(&local_68,local_78);
    _objc_storeStrong(&local_70,local_80);
    uVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
    if (uVar3 == 0) {
      bVar6 = 0;
      goto LAB_008b28e8;
    }
    lVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    if (lVar5 == 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_onForwardMessageSend_026a9b58);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onForwardMessageSend_026a9b58);
      }
    }
    else {
      (*DAT_028cdfb8)(local_28,local_30,local_70,local_40,local_48);
    }
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028ce012);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_wcr_closeFavoritePage_026a99c8);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_wcr_closeFavoritePage_026a99c8);
    }
    if (DAT_028ce030 != 0) {
      DAT_028ce030 = DAT_028ce030 + -1;
    }
    if (DAT_028ce030 == 0) {
      DAT_028ce028 = 0;
    }
    local_58 = 1;
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
LAB_008b2ddc:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

