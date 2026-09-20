// bakeOuterCardShadowOntoContext:drawRect:oval:roundedRect:cornerRadius:amount: @ 0165f2a4

/* Function Stack Size: 0x50 bytes */

void WCRSuperFloatCropViewController::
     bakeOuterCardShadowOntoContext_drawRect_oval_roundedRect_cornerRadius_amount_
               (ID param_1,SEL param_2,CGContext *param_3,CGRect param_4,bool param_5,bool param_6,
               double param_7,double param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 in_d2;
  undefined8 uVar6;
  undefined8 in_d3;
  undefined8 uVar7;
  undefined8 in_d4;
  double in_d5;
  ulong local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  byte local_6a;
  byte local_69;
  CGContext *local_68;
  SEL local_60;
  ID local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  
  local_69 = param_4.field0_0x0.field0_0x0._0_1_;
  local_6a = param_4.field0_0x0.field1_0x8._0_1_;
  if (((param_3 != (CGContext *)0x0) && (0.5 <= in_d5)) &&
     (local_80 = in_d5, local_78 = in_d4, local_68 = param_3, local_60 = param_2, local_58 = param_1
     , local_50 = param_7, local_48 = param_8, local_40 = in_d2, local_38 = in_d3,
     _CGRectIsEmpty(param_7,param_8,in_d2,in_d3), (param_1 & 1) == 0)) {
    local_88 = 0.0;
    local_90 = 0.0;
    local_98 = 0;
    uStack_a8 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
    local_b0 = *(undefined8 *)PTR__CGSizeZero_025782f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,local_58,PTR_s_cropOuterShadowParamsForAmount_b_026b1f10,&local_88,&local_b0
               ,&local_90,&local_98);
    if ((1.0 <= local_88) && (DAT_02323d38 <= local_90)) {
      local_b8 = 0x12;
      for (local_c0 = 0x12; dVar5 = local_90, 0 < local_c0; local_c0 = local_c0 + -1) {
        local_c8 = (double)local_c0 / 18.0;
        local_d0 = (double)(local_c0 + -1) / 18.0;
        local_d8 = local_88 * local_c8;
        local_e0 = local_88 * local_d0;
        local_e8 = (local_c8 + local_d0) * 0.5;
        dVar4 = 1.0 - local_e8;
        local_30 = 0x3ffb333333333333;
        local_28 = dVar4;
        _pow(dVar4,0x3ffb333333333333);
        local_f0 = dVar5 * dVar4;
        if (DAT_023397c0 <= local_f0) {
          dVar5 = local_50;
          dVar4 = local_48;
          uVar6 = local_40;
          uVar7 = local_38;
          _CGRectOffset();
          uVar1 = (ulong)(local_69 & 1);
          local_110 = dVar5;
          local_108 = dVar4;
          local_100 = uVar6;
          local_f8 = uVar7;
          FUN_0165edd4(dVar5,dVar4,uVar6,uVar7,local_78,local_d8,uVar1,local_6a & 1);
          _objc_retainAutoreleasedReturnValue();
          local_118 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setUsesEvenOddFillRule__026b22e8,1);
          uVar1 = local_118;
          uVar2 = (ulong)(local_69 & 1);
          FUN_0165edd4(local_110,local_108,local_100,local_f8,local_78,local_e0,uVar2,local_6a & 1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_appendPath__026a0408);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0,local_f0,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithWhite_alpha__0269cf30);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_fill_026a3198);
          _objc_storeStrong(&local_118,0);
        }
      }
    }
  }
  return;
}

