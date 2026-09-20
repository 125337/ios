// FUN_0055756c @ 0055756c

byte FUN_0055756c(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  byte local_78;
  ulong local_40;
  undefined4 local_38;
  char *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (DAT_028cb3f8 == (char *)0x0) {
    pcVar1 = "WCUserComment";
    _objc_getClass();
    DAT_028cb3f8 = pcVar1;
  }
  pcVar1 = DAT_028cb3f8;
  _objc_retainAutoreleaseReturnValue();
  local_28 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1),
     (uVar2 & 1) == 0)) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_commentID_026a4ee8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_78 = 0;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_WCRefine_);
      local_78 = (byte)uVar2;
    }
    local_11 = local_78 & 1;
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

