// setupBorders @ 0170749c

/* Function Stack Size: 0x10 bytes */

ID SwitchThemes::setupBorders(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_d2;
  double in_d3;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_a0;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  SEL local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar1 = DAT_02323f68;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
  uVar5 = DAT_02323f68;
  local_48 = param_2;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
  local_a0 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
  uVar6 = 0;
  uVar5 = 0;
  FUN_01705754();
  local_80 = uVar5;
  local_78 = uVar6;
  local_70 = in_d2;
  local_68 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
  local_e0 = uVar5;
  local_d8 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,local_78,local_70,local_68,in_d3 / 2.0,puVar2,
             PTR_s_bezierPathWithRoundedRect_corner_026ca530);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGPath_026ca478);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setPath__026caa08,puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFillColor__026ca948,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339840,DAT_02339838,DAT_02339830,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar2;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setStrokeColor__026caa78,puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_borderWidth_0269e060);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLineWidth__026ca9b0);
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layerDelegate_026b3790);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDelegate__026ca910);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setOnBorder__026b3798,local_50);
  puVar2 = local_60;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGPath_026ca478);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setPath__026caa08,puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setFillColor__026ca948,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar2;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setStrokeColor__026caa78,puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_borderWidth_0269e060);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setLineWidth__026ca9b0);
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layerDelegate_026b3790);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDelegate__026ca910);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setOffBorder__026b37a0,local_58);
  local_38 = local_50;
  local_30 = local_58;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}

