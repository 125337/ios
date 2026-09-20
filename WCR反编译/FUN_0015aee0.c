// FUN_0015aee0 @ 0015aee0

byte FUN_0015aee0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  byte local_70;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_11 = 0;
  }
  else {
    pcVar3 = "MMKernelUtil";
    _objc_getClass();
    if ((pcVar3 == (char *)0x0) ||
       (pcVar4 = pcVar3,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_IsChatRoom__0269f630),
       ((ulong)pcVar4 & 1) == 0)) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      local_70 = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__im_chatroom);
        local_70 = (byte)uVar2;
      }
      local_11 = local_70 & 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_IsChatRoom__0269f630,local_20);
      local_11 = (byte)pcVar3 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

