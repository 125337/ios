// wcr_applyStatusStyle: @ 01be77d0

/* WARNING: Removing unreachable block (ram,0x01be79e8) */
/* WARNING: Removing unreachable block (ram,0x01be7b78) */
/* Function Stack Size: 0x18 bytes */

void WCRMomentsDraftCardView::wcr_applyStatusStyle_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ID IVar8;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  uVar3 = DAT_02323d40;
  uVar2 = DAT_02323cc0;
  uVar1 = DAT_02323c78;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c98,DAT_02323c70,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_grayColor_026a9f68)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_38 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_38;
  local_38 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar7 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf__e_N);
  if ((((uVar7 & 1) == 0) &&
      (uVar7 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_S_N),
      (uVar7 & 1) == 0)) &&
     (uVar7 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_I_z),
     (uVar7 & 1) == 0)) {
    uVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf__f_P);
    if ((uVar7 & 1) == 0) {
      uVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_S1Y_);
      if ((uVar7 & 1) != 0) {
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02324040,uVar1,uVar3,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_30;
        local_30 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_38;
        local_38 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,uVar3,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30
                );
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_30;
      local_30 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,DAT_02323f78,0x3fee666666666666,uVar3,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_30;
    local_30 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_38;
    local_38 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  IVar8 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_statusLabel_026c09a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar8);
  IVar8 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_statusLabel_026c09a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar8);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

