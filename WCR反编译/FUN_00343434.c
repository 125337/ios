// FUN_00343434 @ 00343434

void FUN_00343434(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong local_260;
  ulong local_258;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  byte local_111;
  long local_110;
  byte local_101;
  long local_100;
  byte local_f1;
  long local_f0;
  byte local_e1;
  long local_e0;
  ulong local_d8;
  undefined4 local_d0;
  long local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_2);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_3);
  local_c0 = param_4;
  if ((((local_b0 == 0) || (8 < param_4)) ||
      (uVar2 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isHidden_026ca768),
      (uVar2 & 1) != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_alpha_026ca4d8), param_1 < DAT_02323d38))
  {
    local_d0 = 1;
  }
  else {
    uVar2 = local_b0;
    FUN_00344e1c();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 != 0) {
      local_e1 = 0;
      uVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf_SV);
      bVar1 = false;
      if ((uVar2 & 1) != 0) {
        lVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_origin);
        _objc_retainAutoreleasedReturnValue();
        local_e1 = 1;
        bVar1 = lVar3 == 0;
        local_e0 = lVar3;
      }
      if ((local_e1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
      }
      if (bVar1) {
        uVar2 = local_b0;
        FUN_00345650();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,uVar2,&cf_origin);
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      else {
        local_f1 = 0;
        uVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf_6R_O);
        bVar1 = false;
        if ((uVar2 & 1) != 0) {
          lVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_makeVideo);
          _objc_retainAutoreleasedReturnValue();
          local_f1 = 1;
          bVar1 = lVar3 == 0;
          local_f0 = lVar3;
        }
        if ((local_f1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_f0);
        }
        if (bVar1) {
          uVar2 = local_b0;
          FUN_00345650();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,uVar2,&cf_makeVideo);
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        else {
          local_101 = 0;
          uVar2 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf__b);
          bVar1 = false;
          if ((uVar2 & 1) != 0) {
            lVar3 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_finish);
            _objc_retainAutoreleasedReturnValue();
            local_101 = 1;
            bVar1 = lVar3 == 0;
            local_100 = lVar3;
          }
          if ((local_101 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_100);
          }
          if (bVar1) {
            uVar2 = local_b0;
            FUN_00345650();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,uVar2,&cf_finish);
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          else {
            local_111 = 0;
            uVar2 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf__);
            bVar1 = false;
            if ((uVar2 & 1) != 0) {
              lVar3 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_preview);
              _objc_retainAutoreleasedReturnValue();
              local_111 = 1;
              bVar1 = lVar3 == 0;
              local_110 = lVar3;
            }
            if ((local_111 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_110);
            }
            if (bVar1) {
              uVar2 = local_b0;
              FUN_00345650();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,uVar2,&cf_preview);
              (*(code *)PTR__objc_release_02578630)(uVar2);
            }
          }
        }
      }
    }
    _memset(auStack_160,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_258 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_258 != 0) {
      lVar3 = *local_150;
      local_260 = 0;
      do {
        do {
          if (*local_150 - lVar3 != 0) {
            _objc_enumerationMutation(*local_150 - lVar3,uVar2);
          }
          local_120 = *(undefined8 *)(local_158 + local_260 * 8);
          FUN_00343434(local_120,local_b8,local_c0 + 1);
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10
                  );
        local_260 = 0;
      } while (local_258 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_d8,0);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

