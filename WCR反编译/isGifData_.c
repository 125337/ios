// isGifData: @ 00f51864

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonUtil::isGifData_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = (undefined1 *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  puVar3 = local_30;
  if ((undefined1 *)((long)&MACH_HEADER.cputype + 1) < puVar2) {
    _objc_retainAutorelease(puVar2 + -6);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_bytes_026a9630);
    iVar1 = _memcmp(puVar3,"GIF87a",6);
    local_11 = true;
    if (iVar1 != 0) {
      iVar1 = _memcmp(puVar3,"GIF89a",6);
      local_11 = iVar1 == 0;
    }
  }
  else {
    local_11 = false;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

