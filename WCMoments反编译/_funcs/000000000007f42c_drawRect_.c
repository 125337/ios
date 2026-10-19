// drawRect: @0x7f42c

/* WARNING: Removing unreachable block (ram,0x0007f5b8) */
/* WARNING: Removing unreachable block (ram,0x0007f5dc) */
/* WARNING: Removing unreachable block (ram,0x0007f5e0) */
/* WARNING: Removing unreachable block (ram,0x0007f5e8) */
/* WARNING: Removing unreachable block (ram,0x0007f508) */
/* WARNING: Removing unreachable block (ram,0x0007f524) */
/* WARNING: Removing unreachable block (ram,0x0007f528) */
/* WARNING: Removing unreachable block (ram,0x0007f530) */
/* WARNING: Removing unreachable block (ram,0x0007f49c) */
/* WARNING: Removing unreachable block (ram,0x0007f4c0) */
/* WARNING: Removing unreachable block (ram,0x0007f4c4) */
/* WARNING: Removing unreachable block (ram,0x0007f4cc) */
/* WARNING: Removing unreachable block (ram,0x0007f53c) */
/* WARNING: Removing unreachable block (ram,0x0007f568) */
/* WARNING: Removing unreachable block (ram,0x0007f56c) */
/* WARNING: Removing unreachable block (ram,0x0007f574) */
/* Function Stack Size: 0x30 bytes */

void WCMYBIBProgressDrawView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 local_1e0;
  double local_1a8;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  SEL local_b8;
  ID local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_80;
  double local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  dVar8 = param_3.field1_0x10.field1_0x8;
  dVar7 = param_3.field1_0x10.field0_0x0;
  local_a0 = param_3.field0_0x0.field1_0x8;
  local_a8 = param_3.field0_0x0.field0_0x0;
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_b8 = param_2;
  local_b0 = param_1;
  local_98 = dVar7;
  local_90 = dVar8;
  uVar1 = _objc_msgSend_isHidden(param_1);
  if ((uVar1 & 1) == 0) {
    local_80 = *(undefined8 *)(local_b0 + (long)_progress);
    local_68 = *(double *)(local_b0 + (long)_progress);
    if ((ABS(local_68) == INFINITY) || (*(double *)(local_b0 + (long)_progress) < 0.0)) {
      local_1a8 = 0.0;
    }
    else {
      local_1a8 = *(double *)(local_b0 + (long)_progress);
    }
    uVar2 = 0x7ff0000000000000;
    local_c0 = local_1a8;
    local_c8 = 0x4031000000000000;
    local_d0 = 0x4008000000000000;
    local_100 = _objc_msgSend_bounds(local_b0,local_1e0);
    local_f8 = uVar2;
    local_f0 = dVar7;
    local_e8 = dVar8;
    uVar6 = _CGRectGetMidX(local_100);
    local_120 = _objc_msgSend_bounds(local_b0,local_1e0);
    local_118 = uVar2;
    local_110 = dVar7;
    local_108 = dVar8;
    dVar7 = (double)_CGRectGetMidY(local_120,uVar2,dVar7,dVar8);
    local_e0 = (double)_CGPointMake(uVar6);
    local_d8 = dVar7;
    _objc_msgSend_lightGrayColor(&_OBJC_CLASS___UIColor,local_1e0);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setStroke(uVar6,local_1e0);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    _objc_msgSend_bezierPathWithArcCenter_radius_startAngle_endAngle_clockwise_
              (local_e0,local_d8,local_c8,0,0x401921fb54442d18,&_OBJC_CLASS___UIBezierPath,local_1e0
               ,1);
    local_128 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setLineWidth_(local_128,local_1e0);
    _objc_msgSend_setLineCapStyle_(local_128,local_1e0,1);
    _objc_msgSend_setLineJoinStyle_(local_128,local_1e0,1);
    _objc_msgSend_stroke(local_128,local_1e0);
    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_1e0);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setStroke(uVar6,local_1e0);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    _objc_msgSend_bezierPathWithArcCenter_radius_startAngle_endAngle_clockwise_
              (local_e0,local_d8,local_c8,0xbff921fb54442d18,
               local_c0 * 6.283185307179586 + -1.5707963267948966,&_OBJC_CLASS___UIBezierPath,
               local_1e0,1);
    local_130 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setLineWidth_(local_d0,local_130,local_1e0);
    _objc_msgSend_setLineCapStyle_(local_130,local_1e0,1);
    _objc_msgSend_setLineJoinStyle_(local_130,local_1e0,1);
    _objc_msgSend_stroke(local_130,local_1e0);
    local_138 = _objc_opt_new(&_OBJC_CLASS___NSShadow);
    _objc_msgSend_setShadowBlurRadius_(0x4010000000000000,local_138,local_1e0);
    uVar6 = 0x3ff0000000000000;
    local_160 = _CGSizeMake(0);
    uStack_158 = uVar6;
    local_148 = local_160;
    uStack_140 = uVar6;
    _objc_msgSend_setShadowOffset_(local_160,uVar6,local_138,local_1e0);
    _objc_msgSend_darkGrayColor(&_OBJC_CLASS___UIColor,local_1e0);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setShadowColor_(local_138,local_1e0);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    dVar8 = 100.0;
    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_1e0,&cf___0lf__);
    local_168 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
    uVar6 = local_168;
    local_58 = *(undefined8 *)PTR__NSFontAttributeName_00110048;
    _objc_msgSend_boldSystemFontOfSize_(0x4024000000000000,&_OBJC_CLASS___UIFont,local_1e0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_50 = *(undefined8 *)PTR__NSForegroundColorAttributeName_00110050;
    local_40 = uVar3;
    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_1e0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_48 = *(undefined8 *)PTR__NSShadowAttributeName_00110060;
    local_30 = local_138;
    local_38 = uVar4;
    _objc_msgSend_dictionaryWithObjects_forKeys_count_
              (&_OBJC_CLASS___NSDictionary,local_1e0,&local_40,&local_58,3);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_170 = _objc_msgSend_initWithString_attributes_(uVar2,local_1e0,uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    dVar7 = (double)_objc_msgSend_size(local_170,local_1e0);
    uVar6 = local_170;
    dVar8 = local_d8 - dVar8 / 2.0;
    uVar2 = _CGPointMake(local_e0 - dVar7 / 2.0);
    _objc_msgSend_drawAtPoint_(uVar2,dVar8,uVar6,local_1e0);
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_128,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

