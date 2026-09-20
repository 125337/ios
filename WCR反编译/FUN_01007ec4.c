// FUN_01007ec4 @ 01007ec4

void FUN_01007ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  cfstringStruct *local_98;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  long local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  if (local_20 == 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_98 = &cf_g1Y_;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_98;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_finishProgressToastSuccess_text__026ad9e0,0,
               local_38);
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,local_38);
    }
    local_3c = 1;
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkParser_026ce168,PTR_s_ensureDouyinBrowserPlaybackURLFo_026ad9e8,
               local_20);
    uVar2 = *(ulong *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_shouldOfferLinkCardForResult__026ad9f0,local_20);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = &cf__gg0RS_uvbub;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x38),PTR_s_finishProgressToastSuccess_text__026ad9e0,0,
                 &cf__gg0RS_uvbub);
      if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,local_48);
      }
      local_3c = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
        if (lVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x38),PTR_s_sendText_toUsr__026ad9f8,
                     *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
        }
      }
      lVar3 = local_20;
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_01008214;
      local_60 = &DAT_02584190;
      local_50 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_sendLinkCardForResult_toUsr_comp_026ada00,lVar3,uVar6,&local_78);
      _objc_storeStrong(&local_58,0);
      local_3c = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

