// FUN_004d190c @ 004d190c

/* WARNING: Removing unreachable block (ram,0x004d1ed0) */
/* WARNING: Removing unreachable block (ram,0x004d1eb0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004d190c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 in_stack_fffffffffffffe30;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  long local_88;
  undefined4 local_80;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_58 = 0;
  local_4c = param_7;
  local_48 = param_6;
  local_44 = param_5;
  _objc_storeStrong(&local_58,param_8);
  local_59 = param_9;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_11);
  local_6c = param_12;
  if ((DAT_028cacea & 1) != 0) {
    uVar1 = (uint)local_38;
    FUN_004d2854();
    if ((uVar1 & 1) != 0) {
      lVar2 = local_40;
      FUN_004d3104();
      _objc_retainAutoreleasedReturnValue();
      local_88 = lVar2;
      if (lVar2 == 0) {
        (*DAT_028cace0)(local_28,local_30,local_38,local_40,local_44,local_48,local_4c,local_58,
                        CONCAT71((int7)((ulong)in_stack_fffffffffffffe30 >> 8),local_59) &
                        0xffffffffffffff01,local_68,local_6c);
        local_80 = 1;
      }
      else {
        uVar3 = local_38;
        FUN_004d34d8(local_38,&cf_groupInfo);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_38;
        local_90 = uVar3;
        FUN_004d34d8(local_38,&cf_m_dicForwardParas);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_98 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar4 & 1) != 0) {
          uVar4 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_copy_0269d150);
          uVar3 = local_98;
          local_98 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = local_38;
        FUN_004d34d8(local_38,&cf_m_nsContent);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_a0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar3 & 1) != 0) {
          uVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_copy_0269d150);
          uVar3 = local_a0;
          local_a0 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = local_38;
        FUN_004d34d8(local_38,&cf_m_uiCreateTime);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_38;
        local_a8 = uVar3;
        FUN_004d34d8(local_38,&cf_m_sequenceId);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_38;
        local_b0 = uVar4;
        FUN_004d34d8(local_38,&cf_m_groupUUID);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_38;
        local_b8 = uVar3;
        FUN_004d34d8(local_38,&cf_everForceParseGroupInfo);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_38;
        local_c0 = uVar4;
        FUN_004d34d8(local_38,&cf_m_mergeCount);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = uVar3;
        FUN_004d36c4(local_38,local_88);
        (*DAT_028cace0)(local_28,local_30,local_38,local_40,local_44,local_48,local_4c,local_58,
                        CONCAT71((int7)((ulong)in_stack_fffffffffffffe30 >> 8),local_59) &
                        0xffffffffffffff01,local_68,local_6c);
        local_80 = 0;
        FUN_004d3ae8(local_38,local_90,local_98,local_a0,local_a8,local_b0,local_b8,local_c0,
                     local_c8);
        local_80 = 0;
        _objc_storeStrong(&local_c8);
        _objc_storeStrong(&local_c0,0);
        _objc_storeStrong(&local_b8,0);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_a8,0);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_90,0);
        local_80 = 0;
      }
      _objc_storeStrong(&local_88,0);
      goto LAB_004d1f54;
    }
  }
  (*DAT_028cace0)(local_28,local_30,local_38,local_40,local_44,local_48,local_4c,local_58,
                  CONCAT71((int7)((ulong)in_stack_fffffffffffffe30 >> 8),local_59) &
                  0xffffffffffffff01,local_68,local_6c);
  local_80 = 1;
LAB_004d1f54:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

