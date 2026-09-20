// FUN_0095963c @ 0095963c

void FUN_0095963c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_40;
  ulong local_38;
  byte local_29;
  char *local_28;
  int local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    uVar6 = 1;
    local_1c = 1;
  }
  else {
    pcVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_28 = pcVar4;
    if ((long)pcVar4 < 10) {
      local_28 = (char *)((long)&MACH_HEADER.cpusubtype + 2);
    }
    if (200 < (long)local_28) {
      local_28 = section_000000b8.segname;
    }
    do {
      uVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
      uVar6 = uVar5 - (long)local_28;
      if (uVar6 == 0 || (long)uVar5 < (long)local_28) break;
      local_29 = 0;
      uVar6 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
      local_38 = uVar6;
      do {
        local_38 = local_38 - 1;
        if ((long)local_38 < 0) break;
        uVar6 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar6;
        FUN_009464dc();
        if ((uVar6 & 1) == 0) {
          FUN_0095d1e4(local_40);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_removeObjectAtIndex__0269d530,local_38);
          local_29 = 1;
          local_1c = 4;
        }
        else {
          local_1c = 6;
        }
        _objc_storeStrong(&local_40,0);
      } while (local_1c != 4);
      uVar6 = (ulong)local_29;
    } while ((local_29 & 1) != 0);
    local_1c = 0;
  }
  _objc_storeStrong(uVar6,&local_18,0);
  return;
}

