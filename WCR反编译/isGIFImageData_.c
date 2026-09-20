// isGIFImageData: @ 00f4ee2c

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonToolsHelper::isGIFImageData_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = (char *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (char *)0x0) {
    local_11 = false;
  }
  else {
    pcVar1 = "CUtility";
    _objc_getClass();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isGIFFile__026ac4b8);
    pcVar3 = local_30;
    if (((ulong)pcVar2 & 1) == 0) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_bytes_026a9630);
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      local_11 = false;
      if ((((char *)((long)&MACH_HEADER.magic + 2) < pcVar1) && (local_11 = false, *pcVar3 == 'G'))
         && (local_11 = false, pcVar3[1] == 'I')) {
        local_11 = pcVar3[2] == 'F';
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isGIFFile__026ac4b8,local_30);
      local_11 = (bool)((byte)pcVar1 & 1);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

