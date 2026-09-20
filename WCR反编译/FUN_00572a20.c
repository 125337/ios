// FUN_00572a20 @ 00572a20

void FUN_00572a20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = "WCTimeLineCellView";
  _objc_getClass();
  puVar1 = PTR_s_initPrivacyButton__026a5258;
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initPrivacyButton__026a5258);
    if (((ulong)pcVar4 & 1) != 0) {
      _MSHookMessageEx(pcVar3,puVar1,FUN_00572e14,&DAT_028cb560);
    }
    puVar1 = PTR_s_layoutSubviews_0269de80;
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_instancesRespondToSelector__0269da90,PTR_s_layoutSubviews_0269de80);
    if (((ulong)pcVar4 & 1) != 0) {
      _MSHookMessageEx(pcVar3,puVar1,FUN_00572f04,&DAT_028cb568);
    }
  }
  pcVar3 = "WCDataItem";
  _objc_getClass();
  puVar1 = PTR_s_hasSharedGroup_026a5260;
  if ((pcVar3 != (char *)0x0) &&
     (pcVar4 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar3,PTR_s_instancesRespondToSelector__0269da90,PTR_s_hasSharedGroup_026a5260),
     ((ulong)pcVar4 & 1) != 0)) {
    _MSHookMessageEx(pcVar3,puVar1,FUN_00573004,&DAT_028cb570);
  }
  pcVar3 = "WCListBaseCellView";
  _objc_getClass();
  puVar1 = PTR_s_layoutStatusIconImageView_026a5268;
  if ((pcVar3 != (char *)0x0) &&
     (pcVar4 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar3,PTR_s_instancesRespondToSelector__0269da90,
                PTR_s_layoutStatusIconImageView_026a5268), ((ulong)pcVar4 & 1) != 0)) {
    _MSHookMessageEx(pcVar3,puVar1,FUN_005730d0,&DAT_028cb578);
  }
  pcVar3 = "WCListSightCellView";
  _objc_getClass();
  if ((pcVar3 != (char *)0x0) &&
     (pcVar4 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_instancesRespondToSelector__0269da90,puVar1)
     , ((ulong)pcVar4 & 1) != 0)) {
    _MSHookMessageEx(pcVar3,puVar1,FUN_00573150,&DAT_028cb580);
  }
  pcVar3 = "WCListCellStatusInfo";
  _objc_getClass();
  puVar1 = PTR_s_showsPrivateStatus_026a5270;
  if ((pcVar3 != (char *)0x0) &&
     (pcVar4 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar3,PTR_s_instancesRespondToSelector__0269da90,PTR_s_showsPrivateStatus_026a5270)
     , ((ulong)pcVar4 & 1) != 0)) {
    _MSHookMessageEx(pcVar3,puVar1,FUN_005731d0,&DAT_028cb588);
  }
  puVar2 = PTR_s_showSharedStatus__026a5280;
  puVar1 = PTR_s_showLockStatus__026a5278;
  pcVar3 = "WCImageView";
  _objc_getClass();
  if ((pcVar3 != (char *)0x0) &&
     (pcVar4 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_instancesRespondToSelector__0269da90,puVar1)
     , ((ulong)pcVar4 & 1) != 0)) {
    _MSHookMessageEx(pcVar3,puVar1,FUN_0057329c,&DAT_028cb590);
  }
  if ((pcVar3 != (char *)0x0) &&
     (pcVar4 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_instancesRespondToSelector__0269da90,puVar2)
     , ((ulong)pcVar4 & 1) != 0)) {
    _MSHookMessageEx(pcVar3,puVar2,FUN_00573318,&DAT_028cb598);
  }
  pcVar3 = "WCPuzzleImageView";
  _objc_getClass();
  if ((pcVar3 != (char *)0x0) &&
     (pcVar4 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_instancesRespondToSelector__0269da90,puVar1)
     , ((ulong)pcVar4 & 1) != 0)) {
    _MSHookMessageEx(pcVar3,puVar1,FUN_00573394,&DAT_028cb5a0);
  }
  if ((pcVar3 != (char *)0x0) &&
     (pcVar4 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_instancesRespondToSelector__0269da90,puVar2)
     , ((ulong)pcVar4 & 1) != 0)) {
    _MSHookMessageEx(pcVar3,puVar2,FUN_00573410,&DAT_028cb5a8);
  }
  return;
}

