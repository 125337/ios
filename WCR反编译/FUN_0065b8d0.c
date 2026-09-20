// FUN_0065b8d0 @ 0065b8d0

void FUN_0065b8d0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *local_160;
  undefined *local_e0;
  byte local_d1;
  undefined *local_d0;
  int local_c8;
  undefined *local_b8;
  long local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined *local_98;
  long local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = (undefined *)0x0;
  local_90 = param_1;
  _objc_storeStrong(&local_98);
  puVar2 = local_98;
  local_b0 = param_1;
  local_a8 = param_4;
  local_a0 = param_3;
  FUN_00655814();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_c8 = 1;
  }
  else {
    FUN_00655b28();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_c8 = 1;
    }
    else {
      if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
        if ((*(byte *)(param_1 + 0x49) & 1) == 0) {
          local_d1 = *(ulong *)(param_1 + 0x38) <= local_a0;
        }
        else {
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_containsObject__0269cbb8,puVar2);
          local_d1 = (byte)uVar7;
        }
      }
      else {
        puVar2 = local_b8;
        FUN_0065bf14(local_b8,*(undefined8 *)(param_1 + 0x20));
        local_d1 = (byte)puVar2;
      }
      if ((local_d1 & 1) == 0) {
        local_c8 = 1;
      }
      else {
        puVar2 = local_b8;
        FUN_0065c0c8(local_b8,local_98,*(undefined8 *)(param_1 + 0x40));
        if (((ulong)puVar2 & 1) == 0) {
          local_c8 = 1;
        }
        else {
          puVar2 = local_b8;
          FUN_0065c1d8(local_b8,local_98);
          if (((ulong)puVar2 & 1) == 0) {
            uVar7 = *(undefined8 *)(param_1 + 0x30);
            local_88 = &cf_key;
            local_58 = local_d0;
            local_80 = &cf_msg;
            local_50 = local_b8;
            local_78 = &cf_section;
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0
                       ,local_a0);
            _objc_retainAutoreleasedReturnValue();
            local_70 = &cf_row;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_48 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
            _objc_retainAutoreleasedReturnValue();
            local_68 = &cf_node;
            bVar1 = local_98 == (undefined *)0x0;
            local_40 = puVar3;
            if (bVar1) {
              local_160 = PTR__OBJC_CLASS___NSNull_026ce0e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
              _objc_retainAutoreleasedReturnValue();
              local_e0 = local_160;
            }
            else {
              local_160 = local_98;
            }
            local_38 = local_160;
            local_60 = &cf_hasPosition;
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_30 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_88,6);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_addObject__0269d180,puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_e0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            local_c8 = 0;
          }
          else {
            local_c8 = 1;
          }
        }
      }
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (local_c8 == 0) {
    local_c8 = 0;
  }
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

