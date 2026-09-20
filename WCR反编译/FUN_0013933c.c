// FUN_0013933c @ 0013933c

void FUN_0013933c(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double local_390;
  undefined8 local_358;
  undefined8 local_340;
  undefined *local_2a8;
  double local_270;
  double local_260;
  undefined8 local_128;
  undefined *local_118;
  undefined *local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  byte local_99;
  undefined *local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_3;
  _objc_storeStrong(&local_48);
  uVar5 = local_48;
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  local_60 = param_3;
  local_58 = param_6;
  local_50 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_inputToolView_0269d0e8);
  _objc_retainAutoreleasedReturnValue();
  _WCRChatToolbarResolvedTitle();
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar5 = local_68;
  local_99 = 0;
  if ((*(byte *)(param_3 + 0x90) & 1) == 0) {
    local_260 = 0.0;
  }
  else {
    local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    local_30 = *(undefined8 *)(param_3 + 0x28);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_sizeWithAttributes__026cab08);
    local_260 = (double)(long)param_1;
    local_90 = param_1;
    local_88 = param_2;
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  local_80 = local_260;
  if (((*(byte *)(param_3 + 0x91) & 1) == 0) || ((*(byte *)(param_3 + 0x90) & 1) == 0)) {
    if ((*(byte *)(param_3 + 0x91) & 1) == 0) {
      local_a8 = local_260;
    }
    else {
      local_a8 = *(double *)(param_3 + 0x50);
    }
  }
  else {
    local_a8 = *(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x58) + local_260;
  }
  local_b8 = *(double *)(param_3 + 0x60);
  local_c0 = local_a8 + *(double *)(param_3 + 0x68) * 2.0;
  local_270 = local_b8;
  if (local_b8 < local_c0) {
    local_270 = local_c0;
  }
  local_c8 = local_270;
  local_b0 = local_270;
  puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = **(undefined8 **)(param_3 + 0x70);
  lVar6 = (long)((*(double *)(param_3 + 0x78) - *(double *)(param_3 + 0x60)) * 0.5);
  uVar2 = *(undefined8 *)(param_3 + 0x60);
  dVar10 = local_b0;
  local_d0 = puVar3;
  FUN_0013a194();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,lVar6,dVar10,uVar2,local_d0,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setTag__026caa80,local_50);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setAccessibilityLabel__0269e968,local_68);
  bVar1 = (*(byte *)(param_3 + 0x92) & 1) == 0;
  if (bVar1) {
    local_2a8 = *(undefined **)(param_3 + 0x30);
  }
  else {
    local_2a8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_118 = local_2a8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setBackgroundColor__026ca888,local_2a8);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_118);
  }
  uVar5 = *(undefined8 *)(param_3 + 0x80);
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setContentHorizontalAlignment__0269f228,0);
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setTintColor__026caab0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_d0;
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTitleColor_forState__026caac0,puVar4,0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if ((*(byte *)(param_3 + 0x90) & 1) == 0) {
    local_340 = 0;
  }
  else {
    local_340 = local_68;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setTitle_forState__026caab8,local_340,0);
  puVar3 = local_d0;
  bVar1 = (*(byte *)(param_3 + 0x91) & 1) == 0;
  if (bVar1) {
    local_358 = 0;
  }
  else {
    local_358 = local_48;
    _WCRChatToolbarImage
              (*(undefined8 *)(param_3 + 0x50),local_48,*(undefined8 *)(param_3 + 0x38),
               *(undefined8 *)(param_3 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    local_128 = local_358;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setImage_forState__0269cc60,local_358,0);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_imageView_0269f230);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  uVar9 = *(undefined8 *)(param_3 + 0x68);
  uVar8 = 0;
  uVar5 = 0;
  FUN_0013a1e0();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar2,uVar8,uVar9,local_d0,PTR_s_setContentEdgeInsets__0269ebd0);
  if (((*(byte *)(param_3 + 0x91) & 1) == 0) || ((*(byte *)(param_3 + 0x90) & 1) == 0)) {
    local_390 = 0.0;
  }
  else {
    local_390 = *(double *)(param_3 + 0x58) * 0.5;
  }
  dVar7 = -local_390;
  uVar2 = 0;
  uVar5 = 0;
  dVar10 = local_390;
  FUN_0013a1e0();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,dVar7,uVar2,dVar10,local_d0,PTR_s_setImageEdgeInsets__0269ebe0);
  dVar10 = -local_390;
  uVar2 = 0;
  uVar5 = 0;
  FUN_0013a1e0();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,local_390,uVar2,dVar10,local_d0,PTR_s_setTitleEdgeInsets__0269ebe8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_addTarget_action_forControlEvent_026ca4c8,
             *(undefined8 *)(param_3 + 0x20),PTR_s_handleTap__0269dd00,0x40);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar5);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_3 + 0x48),PTR_s_addObject__0269d180,local_d0);
  **(double **)(param_3 + 0x70) =
       **(double **)(param_3 + 0x70) + local_b0 + *(double *)(param_3 + 0x88);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

