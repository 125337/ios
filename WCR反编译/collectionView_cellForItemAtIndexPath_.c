// collectionView:cellForItemAtIndexPath: @ 01fbc8c0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineWechatThemeManagerViewController::collectionView_cellForItemAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_140;
  undefined *local_108;
  undefined *local_b0;
  undefined *local_a0;
  cfstringStruct *local_98;
  ID local_90;
  bool local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  byte local_59;
  ID local_58;
  ID local_50;
  ID local_48;
  undefined8 local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_dequeueReusableCellWithReuseIden_026aaa08,&cf_WCRThemeCard,local_40);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayNames_026ca000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_item_026a1890);
  IVar2 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectAtIndexedSubscript__0269cc78,uVar4);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  local_59 = 0;
  if (IVar2 != 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_summaryForTheme__026c9fa8,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar3;
  }
  IVar3 = local_48;
  local_59 = IVar2 != 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_detailLabel_026b68d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  IVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  local_71 = 0;
  local_81 = false;
  if (IVar2 == 0) {
    local_108 = (undefined *)0x0;
  }
  else {
    local_108 = PTR_WCRefineWechatThemeStore_026ce6d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_108;
  }
  local_81 = IVar2 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_108;
  if ((local_81 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_coverView_026c9eb8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_placeholderLabel_026accd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tagsForName__026c9fa0,local_50);
  _objc_retainAutoreleasedReturnValue();
  local_90 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_containsObject__0269cbb8,&cf__O_u_N);
  if ((IVar2 & 1) == 0) {
    IVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_containsObject__0269cbb8,&cf_ll_N);
    local_140 = &cf_ll;
    if ((IVar2 & 1) == 0) {
      local_140 = (cfstringStruct *)0x0;
    }
  }
  else {
    local_140 = &cf__O_u_N;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_140;
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_badgeLabel_026aa858);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  pcVar5 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_ll);
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_b0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    local_a0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
    _objc_retainAutoreleasedReturnValue();
  }
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_badgeLabel_026aa858);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_badgeLabel_026aa858);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setNeedsLayout_0269deb8);
  IVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

