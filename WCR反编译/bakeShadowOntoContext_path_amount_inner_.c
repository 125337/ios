// bakeShadowOntoContext:path:amount:inner: @ 0165ef30

/* Function Stack Size: 0x2c bytes */

void WCRSuperFloatCropViewController::bakeShadowOntoContext_path_amount_inner_
               (ID param_1,SEL param_2,CGContext *param_3,ID param_4,double param_5,bool param_6)

{
  long lVar1;
  CGContext *pCVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_d3;
  double local_e8;
  undefined *local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  undefined *local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  undefined4 local_50;
  undefined1 local_49;
  double local_48;
  long local_40;
  CGContext *local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  local_49 = (undefined1)param_6;
  local_48 = param_5;
  if (((local_38 == (CGContext *)0x0) || (local_40 == 0)) || (param_5 < 0.5)) {
    local_50 = 1;
  }
  else if ((param_6 & 1) == 0) {
    local_50 = 1;
  }
  else {
    local_60 = 0x3ff0000000000000;
    local_68 = param_5 / 24.0;
    local_e8 = local_68;
    if (1.0 < local_68) {
      local_e8 = 1.0;
    }
    local_70 = local_e8;
    local_58 = local_e8;
    local_78 = param_5 * 0.7 + 4.0;
    dVar4 = DAT_02323c70 + local_e8 * DAT_02323ec8;
    uVar5 = 0;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    dVar6 = DAT_02323c70;
    local_80 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar3;
    _CGContextSaveGState(local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addClip_026ca4a0);
    lVar1 = local_40;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_CGPath_026ca478);
    _CGPathGetPathBoundingBox();
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    local_a8 = uVar5;
    local_a0 = dVar4;
    local_98 = dVar6;
    _CGRectInset();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,dVar4,dVar6,in_d3,puVar3,PTR_s_bezierPathWithRect__026a03f8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setUsesEvenOddFillRule__026b22e8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_appendPath__026a0408,local_40);
    pCVar2 = local_38;
    dVar6 = local_78;
    puVar3 = local_88;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
    _CGContextSetShadowWithColor
              (*(undefined8 *)PTR__CGSizeZero_025782f8,*(undefined8 *)(PTR__CGSizeZero_025782f8 + 8)
               ,dVar6,pCVar2,puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_fill_026a3198);
    _CGContextRestoreGState(local_38);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_88,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40,0);
  return;
}

