// FUN_005be1bc @ 005be1bc

void FUN_005be1bc(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_1a8;
  undefined *local_1a0;
  char *local_160;
  ulong local_158;
  undefined8 local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_100 [3];
  char *local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  pcVar4 = "CMessageWrap";
  _objc_getClass();
  local_50 = &cf_getJpgPathOfMsgHdOrMiddleImg_;
  local_48 = &cf_getPathOfHdOrMiddleImgForSender_;
  local_40 = &cf_getJpgPathOfMsgHDImg_;
  local_38 = &cf_getJpgPathOfMsgMiddleImg_;
  local_30 = &cf_getPathOfMsgImg_;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_e8 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5);
  _objc_retainAutoreleasedReturnValue();
  local_100[0] = puVar5;
  _memset(auStack_148,0,0x40);
  puVar5 = local_100[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_1a0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_d0,0x10);
  if (local_1a0 != (undefined *)0x0) {
    lVar8 = *local_138;
    local_1a8 = (undefined *)0x0;
    do {
      do {
        if (*local_138 - lVar8 != 0) {
          _objc_enumerationMutation(*local_138 - lVar8,puVar5);
        }
        uVar9 = *(undefined8 *)(local_140 + (long)local_1a8 * 8);
        local_108 = uVar9;
        _NSSelectorFromString();
        local_150 = uVar9;
        if ((local_e8 != (char *)0x0) &&
           (pcVar4 = local_e8,
           (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_respondsToSelector__026ca818,uVar9),
           ((ulong)pcVar4 & 1) != 0)) {
          local_158 = 0;
          pcVar4 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,local_150,local_e0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_160 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
          if (((ulong)pcVar4 & 1) != 0) {
            _objc_storeStrong(&local_158,local_160);
          }
          _objc_storeStrong(&local_160,0);
          uVar7 = local_158;
          FUN_005be964();
          uVar3 = local_158;
          bVar1 = (uVar7 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_d8 = uVar3;
          }
          _objc_storeStrong(&local_158,0);
          bVar2 = true;
          if (bVar1) goto LAB_005be5e8;
        }
        local_1a8 = local_1a8 + 1;
      } while (local_1a8 < local_1a0);
      local_1a0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_d0,0x10)
      ;
      local_1a8 = (undefined *)0x0;
    } while (local_1a0 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_005be5e8:
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (!bVar2) {
    local_d8 = 0;
  }
  _objc_storeStrong(local_100);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

