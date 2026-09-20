// FUN_008b1b3c @ 008b1b3c

/* WARNING: Removing unreachable block (ram,0x008b1c54) */

void FUN_008b1b3c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  ulong local_60;
  byte local_51;
  undefined4 local_50;
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
  FUN_008b4e10();
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028cdfb0)(local_28,local_30,local_38,local_40);
    local_50 = 1;
    goto LAB_008b2434;
  }
  FUN_008c0c98();
  if (((ulong)puVar2 & 1) != 0) {
    FUN_008c08b4();
    local_51 = 0;
    (*DAT_028cdfb0)(local_28,local_30,local_38,local_40);
    local_50 = 0;
    FUN_008c0ca8(0x4008000000000000);
    if ((local_51 & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x8b1c44);
      (*pcVar1)();
    }
    local_50 = 1;
    goto LAB_008b2434;
  }
  if ((DAT_028ce015 & 1) != 0) {
    (*DAT_028cdfb0)(local_28,local_30,local_38,local_40);
    local_50 = 1;
    goto LAB_008b2434;
  }
  local_60 = 0;
  local_68 = 0;
  bVar6 = DAT_028ce028;
  if ((DAT_028ce028 & 1) == 0) {
LAB_008b1f44:
    _objc_storeStrong(bVar6,&local_60);
    _objc_storeStrong(&local_68,0);
    uVar3 = local_38;
    FUN_008c5274();
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_60;
    local_98 = local_68;
    local_88 = uVar3;
    FUN_008c0508(uVar3,&local_90,&local_98);
    _objc_storeStrong(&local_60,local_90);
    _objc_storeStrong(&local_68,local_98);
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028ce013);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_60;
    local_a0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    if ((((uVar4 == 0) && (uVar3 = local_38, FUN_008c5548(), (uVar3 & 1) != 0)) && (local_a0 != 0))
       && (uVar3 = local_a0, FUN_008b50d8(), (uVar3 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_a0);
    }
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    if (uVar3 == 0) {
LAB_008b23cc:
      (*DAT_028cdfb0)(local_28,local_30,local_38,local_40);
      local_50 = 0;
    }
    else {
      local_a8 = 0;
      uVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      lVar5 = uVar3 - 1;
      if ((lVar5 == 0) &&
         (lVar5 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0),
         lVar5 == 0)) {
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        FUN_008c38d0();
        local_a8 = (ulong)(int)(uint)((uVar4 & 1) != 0);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        uVar3 = local_60;
        FUN_008c0db0(lVar5,local_60,local_40);
        local_a8 = uVar3;
      }
      _objc_setAssociatedObject(local_28,&DAT_028ce013,0,1);
      lVar5 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
      if ((lVar5 == 0) && (local_a8 != 0)) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_onForwardMessageSend_026a9b58);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onForwardMessageSend_026a9b58);
        }
        uVar3 = local_28;
        _objc_getAssociatedObject(local_28,&DAT_028ce012);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_wcr_closeFavoritePage_026a99c8);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_closeFavoritePage_026a99c8);
        }
        local_50 = 1;
        _objc_storeStrong(&local_b0,0);
      }
      else {
        lVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
        if (lVar5 == 0) goto LAB_008b23cc;
        (*DAT_028cdfb0)(local_28,local_30,local_68,local_40);
        local_50 = 1;
      }
    }
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_88,0);
  }
  else {
    local_70 = 0;
    local_78 = 0;
    FUN_008c0508(local_38,&local_70,&local_78);
    _objc_storeStrong(&local_60,local_70);
    _objc_storeStrong(&local_68,local_78);
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    if (uVar3 == 0) {
      bVar6 = 0;
      goto LAB_008b1f44;
    }
    lVar5 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
    if (lVar5 == 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_onForwardMessageSend_026a9b58);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onForwardMessageSend_026a9b58);
      }
    }
    else {
      (*DAT_028cdfb0)(local_28,local_30,local_68,local_40);
    }
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028ce012);
    _objc_retainAutoreleasedReturnValue();
    local_80 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_wcr_closeFavoritePage_026a99c8);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_wcr_closeFavoritePage_026a99c8);
    }
    if (DAT_028ce030 != 0) {
      DAT_028ce030 = DAT_028ce030 + -1;
    }
    if (DAT_028ce030 == 0) {
      DAT_028ce028 = 0;
    }
    local_50 = 1;
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
LAB_008b2434:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

