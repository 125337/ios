// FUN_00407004 @ 00407004

void FUN_00407004(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *local_238;
  ulong local_208;
  uint local_184;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  byte local_b9;
  undefined *local_b8;
  undefined *local_b0;
  ulong local_a8;
  byte local_99;
  ulong local_98;
  ulong local_90;
  undefined *local_88;
  undefined *local_80;
  ulong local_78;
  byte local_69;
  ulong local_68;
  byte local_59;
  ulong local_58;
  uint local_50;
  undefined *local_40;
  ulong local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_messageDanmakuEnabled_026a36f8);
  uVar3 = local_38;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_capturedDuringWarmUp);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((uVar4 & 1) != 0) {
        local_50 = 1;
        goto LAB_00407ba8;
      }
      uVar3 = local_38;
      FUN_0040aa48();
      if (((uVar3 & 1) != 0) || (uVar3 = local_38, FUN_0040a43c(), (uVar3 & 1) != 0)) {
        local_50 = 1;
        goto LAB_00407ba8;
      }
      local_59 = 0;
      local_69 = 0;
      uVar3 = local_38;
      FUN_004055cc(local_38,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_0040bd80();
      local_184 = 1;
      if ((uVar4 & 1) == 0) {
        uVar4 = local_38;
        FUN_004055cc(local_38,&cf_pushContent);
        _objc_retainAutoreleasedReturnValue();
        local_59 = 1;
        local_58 = uVar4;
        FUN_0040bd80();
        local_184 = 1;
        if ((uVar4 & 1) == 0) {
          uVar4 = local_38;
          FUN_004055cc(local_38,&cf_displayContent);
          _objc_retainAutoreleasedReturnValue();
          local_69 = 1;
          local_68 = uVar4;
          FUN_0040bd80();
          local_184 = (uint)uVar4;
        }
      }
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((local_184 & 1) != 0) {
        local_50 = 1;
        goto LAB_00407ba8;
      }
      uVar3 = local_38;
      FUN_004055cc(local_38,&cf_sessionUserName);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_38;
      local_78 = uVar3;
      FUN_00419f54();
      if (((uVar4 & 1) == 0) &&
         (uVar3 = local_78, FUN_0041a2fc(local_78,local_40), (uVar3 & 1) != 0)) {
        puVar5 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        puVar2 = local_40;
        local_80 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_messageDanmakuKeywordOnlyEnabled_026a3700);
        if (((ulong)puVar2 & 1) == 0) {
LAB_0040774c:
          uVar3 = local_38;
          FUN_0041b48c();
          _objc_retainAutoreleasedReturnValue();
          local_a8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
          if (uVar3 == 0) {
            local_50 = 1;
          }
          else {
            local_b9 = 0;
            puVar2 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
            if (puVar2 == (undefined *)0x0) {
              local_30 = &cf_mo_9_U_;
              local_238 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_30,1);
              _objc_retainAutoreleasedReturnValue();
              local_b9 = 1;
              local_b8 = local_238;
            }
            else {
              local_238 = local_80;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = local_238;
            if ((local_b9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_b8);
            }
            uVar3 = local_38;
            FUN_0041b93c(local_38,local_a8,local_b0);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = uVar3 != 0;
            local_c8 = uVar3;
            if (bVar1) {
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_mutableCopy_0269d8a0);
              puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_d0 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                         &cf_messageDanmakuOnly);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              uVar3 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
              uVar4 = local_38;
              local_d8 = uVar3;
              FUN_00413044(local_38,local_a8);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR___dispatch_main_q_02578680;
              local_e0 = uVar4;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = local_38;
              local_120 = PTR___NSConcreteStackBlock_02578660;
              local_118 = 0xc2000000;
              local_114 = 0;
              local_110 = FUN_0041cd54;
              local_108 = &DAT_0257b6a8;
              (*(code *)PTR__objc_retain_02578638)();
              uVar3 = local_d8;
              local_100 = uVar4;
              (*(code *)PTR__objc_retain_02578638)();
              uVar4 = local_78;
              local_f8 = uVar3;
              (*(code *)PTR__objc_retain_02578638)();
              uVar3 = local_e0;
              local_f0 = uVar4;
              (*(code *)PTR__objc_retain_02578638)();
              local_e8 = uVar3;
              _dispatch_async(puVar2,&local_120);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              _objc_storeStrong(&local_e8);
              _objc_storeStrong(&local_f0,0);
              _objc_storeStrong(&local_f8,0);
              _objc_storeStrong(&local_100,0);
              _objc_storeStrong(&local_e0,0);
              _objc_storeStrong(&local_d8,0);
              _objc_storeStrong(&local_d0,0);
            }
            local_50 = (uint)!bVar1;
            _objc_storeStrong(&local_c8);
            _objc_storeStrong(&local_b0,0);
          }
          _objc_storeStrong(&local_a8,0);
        }
        else {
          FUN_0041a588();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_38;
          local_88 = puVar2;
          FUN_0041af98(local_38,puVar2);
          _objc_retainAutoreleasedReturnValue();
          local_99 = 0;
          local_90 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_keywords);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar4 & 1) == 0) {
            local_208 = *(ulong *)PTR____NSArray0___02578280;
          }
          else {
            local_208 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf_keywords);
            _objc_retainAutoreleasedReturnValue();
            local_99 = 1;
            local_98 = local_208;
          }
          _objc_storeStrong(&local_80,local_208);
          if ((local_99 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_98);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          puVar2 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
          local_50 = (uint)(puVar2 == (undefined *)0x0);
          _objc_storeStrong(&local_90);
          _objc_storeStrong(&local_88,0);
          if (local_50 == 0) goto LAB_0040774c;
        }
        _objc_storeStrong(&local_80,0);
      }
      else {
        local_50 = 1;
      }
      _objc_storeStrong(&local_78,0);
      goto LAB_00407ba8;
    }
  }
  local_50 = 1;
LAB_00407ba8:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

