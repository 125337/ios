// FUN_00243010 @ 00243010

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00243010(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  ulong local_110;
  ulong local_f8;
  uint local_e0;
  long local_a0;
  ulong local_90;
  ulong local_88;
  bool local_79;
  ulong local_78;
  ulong local_70;
  byte local_62;
  byte local_61;
  char *local_60;
  ulong local_48;
  ulong local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar2;
  FUN_00244f18(uVar2,PTR_s_delegate_0269e808);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "EditImageForwardAndEditLogicController";
  local_48 = uVar2;
  _objc_getClass();
  local_60 = pcVar3;
  FUN_00243818();
  local_61 = (byte)pcVar3;
  local_e0 = 0;
  if (local_60 != (char *)0x0) {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,local_60);
    local_e0 = (uint)uVar2;
  }
  local_62 = (byte)local_e0 & 1;
  local_79 = false;
  bVar1 = (local_e0 & 1) == 0;
  if (bVar1) {
    local_f8 = 0;
  }
  else {
    local_f8 = local_48;
    _objc_getAssociatedObject(local_48,&DAT_028c9371);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_f8;
  }
  local_79 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_f8;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  bVar1 = (local_62 & 1) == 0;
  if (bVar1) {
    local_110 = 0;
  }
  else {
    local_110 = local_48;
    _objc_getAssociatedObject(local_48,&DAT_028c9372);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_110;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_110;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if (((local_61 & 1) != 0) && ((local_62 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    bVar1 = local_38 != 0;
    if (bVar1) {
      local_a0 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
    }
    _NSLog(&cf__wcr__edit_image_send_forwardcallbackenteredsession___pendingContact__dwrap___);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
  }
  if (((local_61 & 1) == 0) || (local_70 == 0)) {
    (*DAT_028c9368)(local_28,local_30,local_38);
  }
  else {
    pcVar4 = &cf_ForwardMsg_ToContact_;
    _NSSelectorFromString();
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar4);
    _NSLog(&cf__wcr__edit_image_send_forwardcallbackmatchedpendingdelegate___directSelector__d);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_setAssociatedObject(local_48,&DAT_028c9371,0,1);
    _objc_setAssociatedObject(local_48,&DAT_028c9372,0,3);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar4);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf__wcr__edit_image_send_abortreason_missing_direct_selectorcontroller___);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRHr_gfN_ecS);
      FUN_00247570(local_48);
    }
    else {
      uVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _NSLog(&cf__wcr__edit_image_send_directsendbeginsession___contact___);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar4,local_38,local_70);
      _NSLog(&cf__wcr__edit_image_send_directsendreturnedsession____closingeditor);
      FUN_00247570(local_48);
    }
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

