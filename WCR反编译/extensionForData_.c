// extensionForData: @ 0107b340

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::extensionForData_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (char *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((char *)((long)&MACH_HEADER.magic + 2) < pcVar1) {
    pcVar2 = "EmoticonUtil";
    _objc_getClass(pcVar1 + -3);
    if (((pcVar2 == (char *)0x0) ||
        (pcVar1 = pcVar2,
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isWxAMData__026ac018),
        ((ulong)pcVar1 & 1) == 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isWxAMData__026ac018,local_30),
       ((ulong)pcVar2 & 1) == 0)) {
      pcVar1 = local_30;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_bytes_026a9630);
      if (((*pcVar1 == 'G') && (pcVar1[1] == 'I')) && (pcVar1[2] == 'F')) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_gif;
      }
      else if ((*pcVar1 == -0x77) && (pcVar1[1] == 'P')) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_png;
      }
      else if ((*pcVar1 == -1) && (pcVar1[1] == -0x28)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_jpg;
      }
      else {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
        if (((((((pcVar2 < &MACH_HEADER.filetype) || (*pcVar1 != 'R')) || (pcVar1[1] != 'I')) ||
              ((pcVar1[2] != 'F' || (pcVar1[3] != 'F')))) || (pcVar1[8] != 'W')) ||
            ((pcVar1[9] != 'E' || (pcVar1[10] != 'B')))) || (pcVar1[0xb] != 'P')) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_png;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_webp;
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_wxam;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_png;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

