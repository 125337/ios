// isAnimatedCustomEmoticonData: @ 00f3ec40

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonToolsHelper::isAnimatedCustomEmoticonData_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  byte *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (byte *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pbVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  pbVar3 = local_30;
  if ((byte *)((long)&MACH_HEADER.magic + 2) < pbVar2) {
    _objc_retainAutorelease(pbVar2 + -3);
    (*(code *)PTR__objc_msgSend_02578628)(pbVar3,PTR_s_bytes_026a9630);
    iVar6 = *pbVar3 - 0x47;
    if (((iVar6 == 0) && (iVar6 = pbVar3[1] - 0x49, iVar6 == 0)) &&
       (iVar6 = pbVar3[2] - 0x46, iVar6 == 0)) {
      local_11 = 1;
    }
    else {
      pcVar4 = "EmoticonUtil";
      _objc_getClass(iVar6);
      puVar1 = PTR_s_isWxAMData__026ac018;
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_isWxAMData__026ac018);
      if (((ulong)pcVar5 & 1) == 0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar1,local_30);
        local_11 = (byte)pcVar4 & 1;
      }
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

