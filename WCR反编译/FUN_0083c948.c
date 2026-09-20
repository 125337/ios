// FUN_0083c948 @ 0083c948

byte FUN_0083c948(undefined8 param_1)

{
  uint uVar1;
  ulong *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong uVar6;
  double local_60;
  ulong local_20;
  byte local_11;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_0083a3a8();
  if ((uVar1 & 1) == 0) {
    local_60 = DAT_026f4850;
  }
  else {
    local_60 = DAT_026f4848;
  }
  if (((((DAT_028cd232 & 1) == 0) && ((DAT_028cd233 & 1) == 0 || DAT_02324348 <= local_60)) &&
      (_WCRFrostedBubbleEnabled(), (uVar1 & 1) == 0)) || (local_20 == 0)) {
    local_11 = 0;
  }
  else {
    pcVar3 = &cf_RichTextView;
    _NSClassFromString();
    pcVar4 = &cf_TextMessageCellView;
    _NSClassFromString();
    if ((pcVar3 == (cfstringStruct *)0x0) || (pcVar4 == (cfstringStruct *)0x0)) {
      local_11 = 0;
    }
    else {
      uVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar3);
      if ((uVar5 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar5 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        FUN_0083cbd8();
        local_11 = (byte)uVar6 & 1;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

