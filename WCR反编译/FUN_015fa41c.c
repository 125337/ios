// FUN_015fa41c @ 015fa41c

void FUN_015fa41c(long param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long local_a0;
  long local_98;
  long local_90;
  undefined *local_78;
  byte local_6d;
  undefined4 local_6c;
  long local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  byte local_42;
  byte local_41;
  ulong local_40;
  int local_34;
  long local_30;
  byte local_21;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  local_30 = param_1;
  local_21 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_20);
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_20);
      if ((uVar1 & 1) == 0) {
        uVar1 = *(ulong *)(param_1 + 0x30);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_20);
        if ((uVar1 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
            uVar1 = *(ulong *)(param_1 + 0x38);
            FUN_015fa900(uVar1,local_20);
            if ((uVar1 & 1) != 0) {
              local_34 = 1;
              goto LAB_015fa8e8;
            }
          }
          uVar1 = local_20;
          FUN_015fab58();
          _objc_retainAutoreleasedReturnValue();
          local_40 = uVar1;
          FUN_015fac64();
          local_41 = (byte)uVar1;
          uVar1 = local_20;
          FUN_015fada0(local_20,local_40,local_41 & 1,*(undefined8 *)(param_1 + 0x40));
          if ((uVar1 & 1) == 0) {
            local_34 = 1;
          }
          else {
            uVar1 = local_20;
            FUN_015fafb8(local_20,local_40);
            local_42 = (byte)uVar1;
            uVar1 = *(ulong *)(param_1 + 0x40);
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_quickChatSeparateSessions_026b13b8);
            if ((uVar1 & 1) != 0) {
              local_58 = 0x1e;
              if ((local_42 & 1) == 0) {
                local_90 = *(long *)(param_1 + 0x48);
                (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_privatePageLimit_026b16e8);
              }
              else {
                local_90 = *(long *)(param_1 + 0x48);
                (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_groupPageLimit_026b16e0);
              }
              local_60 = local_90;
              if (local_90 < 0x1f) {
                local_98 = 0x1e;
              }
              else {
                local_98 = local_90;
              }
              local_68 = local_98;
              local_50 = local_98;
              if ((local_42 & 1) == 0) {
                local_a0 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18);
              }
              else {
                local_a0 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18);
              }
              if (local_98 <= local_a0) {
                if ((local_42 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (*(undefined8 *)(param_1 + 0x48),PTR_s_setPrivateHasMore__026b16d0,1);
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (*(undefined8 *)(param_1 + 0x48),PTR_s_setGroupHasMore__026b16d8,1);
                }
                local_34 = 1;
                goto LAB_015fa8c8;
              }
              if ((local_42 & 1) == 0) {
                lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 8);
                *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
              }
              else {
                lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
                *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
              }
            }
            local_6c = 0;
            local_6d = 0;
            FUN_015fb13c(local_20,local_41 & 1,&local_6c,&local_6d);
            puVar2 = PTR_WCRQuickChatItem_026cee40;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRQuickChatItem_026cee40,PTR_s_new_0269d288);
            local_78 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setUsername__026a2510,local_20);
            uVar1 = local_20;
            FUN_015fb644(local_20,local_40);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setDisplayName__026ae2f8);
            (*(code *)PTR__objc_release_02578630)(uVar1);
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setUnread__026b16f0,local_6c);
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setAsRedDot__026b16f8,local_6d & 1)
            ;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setPinned__026ae2e0,local_21 & 1);
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setGroup__026b1700,local_42 & 1);
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x50),PTR_s_addObject__0269d180,local_78);
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_20);
            _objc_storeStrong(&local_78,0);
            local_34 = 0;
          }
LAB_015fa8c8:
          _objc_storeStrong(&local_40,0);
          if (local_34 == 0) {
            local_34 = 0;
          }
          goto LAB_015fa8e8;
        }
      }
    }
  }
  local_34 = 1;
LAB_015fa8e8:
  _objc_storeStrong(&local_20,0);
  return;
}

