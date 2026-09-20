// FUN_008ba510 @ 008ba510

/* WARNING: Removing unreachable block (ram,0x008bae64) */
/* WARNING: Removing unreachable block (ram,0x008bac58) */

byte FUN_008ba510(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  char *local_168;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  char *local_a0 [2];
  char *local_90;
  char *local_88;
  ulong local_80;
  ulong local_78;
  char *local_70;
  char *local_68;
  undefined4 local_60;
  ulong local_50;
  char *local_48;
  bool local_39;
  char *local_38;
  ulong local_30;
  long local_28;
  ulong *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = (char *)0x0;
  _objc_storeStrong(&local_48,param_1);
  puVar2 = &local_50;
  local_50 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  FUN_008b4e10();
  if (((uVar1 & 1) == 0) || (uVar3 = local_50, FUN_008b8a0c(), (uVar3 & 1) == 0)) {
    local_39 = false;
    local_60 = 1;
  }
  else {
    pcVar4 = local_48;
    FUN_008bae68();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      pcVar5 = local_48;
      FUN_008bb29c();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_68;
      local_68 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_68;
    FUN_008bbaac();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar4;
    if ((local_68 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0), pcVar4 == (char *)0x0))
    {
      local_39 = false;
      local_60 = 1;
    }
    else {
      uVar3 = local_50;
      FUN_008bbee0();
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar3;
      if (uVar3 == 0) {
        local_39 = false;
        local_60 = 1;
      }
      else {
        FUN_008bcaa4();
        _objc_retainAutoreleasedReturnValue();
        local_80 = uVar3;
        if (uVar3 == 0) {
          local_39 = false;
          local_60 = 1;
        }
        else {
          pcVar4 = "ForwardMessageLogicController";
          _objc_getClass();
          local_88 = pcVar4;
          if (pcVar4 == (char *)0x0) {
            local_39 = false;
            local_60 = 1;
          }
          else {
            local_90 = (char *)0x0;
            _objc_alloc_init();
            pcVar5 = local_90;
            local_90 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            if (local_90 == (char *)0x0) {
              local_39 = false;
              local_60 = 1;
            }
            else {
              pcVar4 = local_48;
              FUN_008bcf38();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR_WCRVoiceForwardConfirmDelegate_026cea00;
              local_a0[0] = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRVoiceForwardConfirmDelegate_026cea00,PTR_s_new_0269d288);
              local_a8 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_setViewController__026a59c0,local_a0[0]);
              pcVar4 = local_90;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
              if (((ulong)pcVar4 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setDelegate__026ca910,local_a8)
                ;
              }
              if (local_48 == (char *)0x0) {
                local_168 = local_90;
              }
              else {
                local_168 = local_48;
              }
              _objc_setAssociatedObject(local_168,&DAT_028ce012,local_90,1);
              _objc_setAssociatedObject(local_90,&DAT_028ce012,local_a8,1);
              _objc_setAssociatedObject(local_90,&DAT_028ce013,local_78,1);
              pcVar4 = local_90;
              puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(pcVar4,&DAT_028ce014,puVar6,1);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              local_30 = local_80;
              puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_30,1);
              _objc_retainAutoreleasedReturnValue();
              local_38 = local_68;
              puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              local_b0 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_38,1);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR_s_forwardMsgList_toContacts__026a9a70;
              pcVar4 = local_90;
              local_b8 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_90,PTR_s_respondsToSelector__026ca818,
                         PTR_s_forwardMsgList_toContacts__026a9a70);
              local_39 = ((ulong)pcVar4 & 1) == 0;
              if (local_39) {
                uVar8 = 1;
              }
              else {
                DAT_028ce015 = 1;
                (*(code *)PTR__objc_msgSend_02578628)(local_90,puVar6,local_b0,local_b8);
                DAT_028ce015 = 0;
                uVar8 = 0xfffffffd;
              }
              local_39 = !local_39;
              local_60 = 1;
              _objc_storeStrong(uVar8,&local_b8);
              _objc_storeStrong(&local_b0,0);
              _objc_storeStrong(&local_a8,0);
              _objc_storeStrong(local_a0,0);
            }
            _objc_storeStrong(&local_90,0);
          }
        }
        _objc_storeStrong(&local_80,0);
      }
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_39 & 1;
}

