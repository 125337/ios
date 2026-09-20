// wcr_openFileAtPathWithOtherApps:fromViewController: @ 00fb0740

/* Function Stack Size: 0x20 bytes */

void WCRefineHelper::wcr_openFileAtPathWithOtherApps_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  undefined8 in_d0;
  undefined8 uVar7;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 uVar8;
  undefined8 in_d3;
  undefined8 uVar9;
  ID local_138;
  uint local_114;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  ID local_70;
  ID local_68;
  undefined4 local_60;
  byte local_59;
  undefined *local_58;
  ID local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_4);
  lVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  local_59 = 0;
  local_114 = 1;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_114 = (uint)puVar3 ^ 1;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_114 & 1) == 0) {
    local_71 = 0;
    bVar1 = local_50 == 0;
    if (bVar1) {
      local_138 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_138;
    }
    else {
      local_138 = local_50;
    }
    local_71 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_138;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if (local_68 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_60 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIActivityViewController_026cea70;
      local_80 = puVar3;
      _objc_alloc();
      local_30 = local_80;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_initWithActivityItems_applicatio_026aa228,puVar3,0);
      local_88 = puVar4;
      (*(code *)PTR__objc_release_02578630)();
      FUN_00fb0d28();
      if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        IVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_popoverPresentationController_0269fdf0)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        _CGRectGetMidX();
        IVar6 = local_68;
        uVar7 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        _CGRectGetMidY(uVar7,in_d1,in_d2,in_d3);
        uVar9 = 0x3ff0000000000000;
        uVar8 = 0x3ff0000000000000;
        FUN_00f9ba24();
        puVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_popoverPresentationController_0269fdf0)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(in_d0,uVar7,uVar8,uVar9);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        puVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_popoverPresentationController_0269fdf0)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_presentViewController_animated_c_0269d2b0,local_88,1);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
      local_60 = 0;
    }
    _objc_storeStrong(&local_68,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eN_NX__W);
    local_60 = 1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

