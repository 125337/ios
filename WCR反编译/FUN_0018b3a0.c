// FUN_0018b3a0 @ 0018b3a0

/* WARNING: Removing unreachable block (ram,0x0018b7bc) */

void FUN_0018b3a0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *local_90;
  long local_88;
  byte local_79;
  ulong local_78;
  undefined *local_70;
  ulong local_68 [3];
  undefined4 local_4c;
  long local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong *puVar3;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar3 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar3,param_2);
  uVar2 = (uint)puVar3;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  if (((local_28 == 0) || (local_30 == 0)) || (param_5 == 0)) {
    local_4c = 1;
  }
  else {
    FUN_0018b0b8();
    if ((uVar2 & 1) == 0) {
      local_4c = 1;
    }
    else {
      uVar4 = local_38;
      FUN_0018efc8(local_38,local_40);
      uVar6 = local_30;
      if ((uVar4 & 1) == 0) {
        local_4c = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar6 & 1) == 0) {
          local_4c = 1;
        }
        else {
          uVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,local_48);
          if ((uVar6 & 1) == 0) {
            local_4c = 1;
          }
          else {
            uVar6 = local_28;
            FUN_0018ad9c();
            if ((uVar6 & 1) == 0) {
              uVar6 = local_28;
              FUN_0018ab34(local_28,1);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_68[0] = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                         local_38);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = local_68[0];
              local_70 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_68[0],PTR_s_objectForKeyedSubscript__0269d098,puVar5);
              _objc_retainAutoreleasedReturnValue();
              local_78 = uVar6;
              if ((uVar6 == 0) ||
                 ((*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_integerValue_026ca750),
                 uVar6 != local_40)) {
                local_79 = 0;
                FUN_0018ac98(local_28,1);
                for (local_88 = 0; local_88 < (long)local_40; local_88 = local_88 + 1) {
                  puVar5 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSIndexPath_026ce288,
                             PTR_s_indexPathForRow_inSection__0269e9a0,local_88,local_38);
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = local_28;
                  local_90 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)(local_28,local_48,local_30,puVar5);
                  _objc_unsafeClaimAutoreleasedReturnValue(uVar6);
                  _objc_storeStrong(&local_90,0);
                }
                local_4c = 0;
                FUN_0018ac98(local_28,0);
                if ((local_79 & 1) != 0) {
                  _objc_exception_rethrow();
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x18b7ac);
                  (*pcVar1)();
                }
                local_4c = 0;
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                           local_40);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_68[0],PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_70);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                FUN_0018f054(local_28);
                local_4c = 0;
              }
              else {
                local_4c = 1;
              }
              _objc_storeStrong(&local_78);
              _objc_storeStrong(&local_70,0);
              _objc_storeStrong(local_68,0);
            }
            else {
              local_4c = 1;
            }
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

