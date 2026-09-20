// openMomentsHiddenList @ 01c0d8e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::openMomentsHiddenList(ID param_1,SEL param_2)

{
  bool bVar1;
  dword *pdVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  dword *pdVar6;
  cfstringStruct *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ID IVar10;
  cfstringStruct *local_170;
  dword *local_168;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined1 auStack_120 [8];
  undefined **local_118;
  cfstringStruct *local_110;
  undefined1 local_101;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  dword *local_e0;
  undefined1 auStack_d8 [8];
  undefined **local_d0;
  undefined *local_c8;
  dword *local_c0 [3];
  dword *local_a8;
  undefined1 *local_a0;
  undefined1 auStack_98 [8];
  char *local_90;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  dword *local_70;
  undefined8 local_68;
  dword *local_60;
  dword *local_58;
  dword *local_50;
  char *local_48;
  undefined4 local_3c;
  dword *local_38;
  SEL local_30;
  ID local_28;
  
  pdVar6 = (dword *)PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pdVar2 = pdVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pdVar2;
  (*(code *)PTR__objc_release_02578630)(pdVar6);
  pdVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (pdVar6 == (dword *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__Rh,
               &cf_lgNUOgSW0,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    local_3c = 1;
  }
  else {
    pcVar3 = "WCUIActionSheet";
    _objc_getClass();
    local_48 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_3c = 1;
    }
    else {
      pdVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_reverseObjectEnumerator_0269d220);
      _objc_retainAutoreleasedReturnValue();
      pdVar2 = pdVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = pdVar2;
      (*(code *)PTR__objc_release_02578630)(pdVar6);
      pdVar6 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      local_68 = 0x14;
      local_168 = pdVar6;
      if ((undefined1 *)((long)&MACH_HEADER.ncmds + 3) < pdVar6) {
        local_168 = &MACH_HEADER.sizeofcmds;
      }
      local_70 = local_168;
      local_58 = local_168;
      pdVar2 = local_50;
      local_60 = pdVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      local_170 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      local_81 = false;
      bVar1 = pdVar2 <= local_58;
      if (bVar1) {
        local_170 = &cf_pQSm;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_stringWithFormat__0269cca8,&cf_pQSmqQ)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_170;
      }
      local_81 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_170;
      if ((local_81 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      pcVar3 = local_48;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = pcVar3;
      _objc_initWeak(auStack_98,local_28);
      for (local_a0 = (undefined1 *)0x0; local_a0 < local_58; local_a0 = local_a0 + 1) {
        pdVar6 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_a0);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = pdVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pdVar6,PTR_s_objectForKey__0269e048,&cf_tid);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_c0[0] = pdVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pdVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((((ulong)pdVar6 & 1) == 0) ||
           (pdVar6 = local_c0[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_c0[0],PTR_s_length_0269cca0),
           pdVar6 == (dword *)0x0)) {
          local_3c = 4;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_unhideMomentOption_lu_);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          _NSSelectorFromString();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          ppuVar9 = &local_100;
          local_100 = PTR___NSConcreteStackBlock_02578660;
          local_f8 = 0xc2000000;
          local_f4 = 0;
          local_f0 = FUN_01c0e2a4;
          local_e8 = &DAT_02581a90;
          pdVar6 = local_c0[0];
          local_c8 = puVar5;
          (*(code *)PTR__objc_retain_02578638)();
          local_e0 = pdVar6;
          _objc_copyWeak(auStack_d8,auStack_98);
          local_101 = 1;
          _objc_retainBlock();
          ppuVar8 = ppuVar9;
          _imp_implementationWithBlock();
          local_101 = 0;
          (*(code *)PTR__objc_release_02578630)(ppuVar9);
          IVar10 = local_28;
          local_d0 = ppuVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
          _class_replaceMethod(IVar10,local_c8,local_d0,"v@:@");
          pcVar3 = local_90;
          IVar10 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_momentsHiddenOwnEntryTitle__026c1200,local_a8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_addBtnTitle_target_sel__0269d278,IVar10,local_28,local_c8);
          (*(code *)PTR__objc_release_02578630)(IVar10);
          _objc_destroyWeak(auStack_d8);
          _objc_storeStrong(&local_e0,0);
          local_3c = 0;
        }
        _objc_storeStrong(local_c0);
        _objc_storeStrong(&local_a8,0);
      }
      pcVar7 = &cf_unhideAllMomentsOption_;
      _NSSelectorFromString((long)local_a0 - (long)local_58);
      ppuVar8 = &local_140;
      local_140 = PTR___NSConcreteStackBlock_02578660;
      local_138 = 0xc2000000;
      local_134 = 0;
      local_130 = FUN_01c0e3c4;
      local_128 = &DAT_0258bae0;
      local_110 = pcVar7;
      _objc_copyWeak(auStack_120,auStack_98);
      _objc_retainBlock();
      ppuVar9 = ppuVar8;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar8);
      IVar10 = local_28;
      local_118 = ppuVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _class_replaceMethod(IVar10,local_110,local_118,"v@:@");
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_addBtnTitle_target_sel__0269d278,&cf_hQSm,local_28,local_110);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      pcVar3 = local_90;
      IVar10 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar10);
      _objc_destroyWeak(auStack_120);
      _objc_destroyWeak(auStack_98);
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_50,0);
      local_3c = 0;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

