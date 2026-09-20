// FUN_0082fcdc @ 0082fcdc

void FUN_0082fcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c4 = param_4;
  if ((local_b0 == 0) || (param_4 < 1)) {
    local_c8 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_160 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar4 = *local_100;
      local_168 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_108 + local_168 * 8);
          local_d0 = uVar5;
          if ((uVar5 - local_b8 != 0) &&
             (FUN_0082e90c(uVar5 - local_b8,uVar5,local_b8), (uVar5 & 1) == 0)) {
            uVar5 = local_d0;
            FUN_0082f794(local_d0,local_b0);
            if ((uVar5 & 1) != 0) {
              FUN_00827dfc(local_d0,local_c0);
            }
            uVar5 = local_d0;
            puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            uVar3 = local_d0;
            if ((uVar5 & 1) == 0) {
              puVar2 = PTR__OBJC_CLASS___UICollectionView_026ce1f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UICollectionView_026ce1f8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
              if ((uVar3 & 1) == 0) {
                FUN_0082fcdc(local_d0,local_b8,local_c0,local_c4 + -1);
              }
            }
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_c8 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

