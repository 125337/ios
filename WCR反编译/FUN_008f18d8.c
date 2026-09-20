// FUN_008f18d8 @ 008f18d8

void FUN_008f18d8(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_41;
  char *local_40;
  char *local_38;
  undefined4 local_30;
  char *local_20;
  char *local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  pcVar3 = local_20;
  if (pcVar2 == (char *)0x0) {
    local_18 = (char *)0x0;
    local_30 = 1;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_bytes_026a9630);
    pcVar2 = local_20;
    local_38 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (((char *)((long)&MACH_HEADER.cpusubtype + 1) < pcVar2) && (*local_38 == '\x02')) {
      iVar1 = _memcmp(local_38 + 1,"#!SILK_V3",9);
      pcVar3 = local_20;
      if (iVar1 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
        local_30 = 1;
        goto LAB_008f1b94;
      }
    }
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (&MACH_HEADER.cpusubtype < pcVar3) {
      iVar1 = _memcmp(local_38,"#!SILK_V3",9);
      pcVar3 = PTR__OBJC_CLASS___NSMutableData_026ce660;
      if (iVar1 == 0) {
        pcVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_dataWithCapacity__026a9df0,pcVar2 + 1);
        _objc_retainAutoreleasedReturnValue();
        local_41 = 2;
        local_40 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_appendBytes_length__026a9628,&local_41,1)
        ;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_appendData__026a9df8,local_20);
        pcVar3 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
        local_30 = 1;
        _objc_storeStrong(&local_40,0);
        goto LAB_008f1b94;
      }
    }
    pcVar3 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
    local_30 = 1;
  }
LAB_008f1b94:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

