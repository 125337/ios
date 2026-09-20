// pickUnreadDotShape @ 01cb65f4

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::pickUnreadDotShape(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  local_28 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf___W,local_18,
               PTR_s_applyUnreadDotShapeCircleSolid_026c3280);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zz_W,local_18,
               PTR_s_applyUnreadDotShapeCircleHollow_026c3288);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf___Nf,local_18,
               PTR_s_applyUnreadDotShapeStarSolid_026c3290);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zz_Nf,local_18,
               PTR_s_applyUnreadDotShapeStarHollow_026c3298);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf___N,local_18,
               PTR_s_applyUnreadDotShapeTriangleSolid_026c32a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zz_N,local_18,
               PTR_s_applyUnreadDotShapeTriangleHollo_026c32a8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf___ckeb_,local_18,
               PTR_s_applyUnreadDotShapeSquareSolid_026c32b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zz_ckeb_,local_18,
               PTR_s_applyUnreadDotShapeSquareHollow_026c32b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf___b_,local_18,
               PTR_s_applyUnreadDotShapeDiamondSolid_026c32c0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zz_b_,local_18,
               PTR_s_applyUnreadDotShapeDiamondHollow_026c32c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_RS,local_18,
               PTR_s_applyUnreadDotShapePlus_026c32d0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_30;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

