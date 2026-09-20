// isUsableEmoticonImageData: @ 00f3cbd4

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonToolsHelper::isUsableEmoticonImageData_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (char *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  pcVar2 = local_30;
  if ((char *)((long)&MACH_HEADER.magic + 2) < pcVar1) {
    _objc_retainAutorelease(pcVar1 + -3);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_bytes_026a9630);
    if ((*pcVar2 == -1) && (pcVar2[1] == -0x28)) {
      local_11 = 1;
    }
    else if ((*pcVar2 == -0x77) && (pcVar2[1] == 'P')) {
      local_11 = 1;
    }
    else if (((*pcVar2 == 'G') && (pcVar2[1] == 'I')) && (pcVar2[2] == 'F')) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

