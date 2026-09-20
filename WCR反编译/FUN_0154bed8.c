// FUN_0154bed8 @ 0154bed8

void FUN_0154bed8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double local_2d8;
  double local_2c8;
  undefined *local_2b8;
  undefined *local_c8;
  long local_60;
  undefined4 local_54;
  long local_50;
  long local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_6);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_7);
  puVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_54 = 1;
  }
  else {
    lVar3 = local_50;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      _objc_storeStrong(&local_60,&cf__gw);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setText__026caa88,local_60);
    lVar3 = local_60;
    if (local_48 == 0) {
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      _CGRectGetWidth();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      _CGRectGetHeight(param_1,param_2);
      FUN_0154838c();
      local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_font_0269ea00);
      _objc_retainAutoreleasedReturnValue();
      local_2b8 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_c8 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4032000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                   PTR_s_systemFontOfSize__0269cc50);
        _objc_retainAutoreleasedReturnValue();
        local_2b8 = local_c8;
      }
      local_30 = local_2b8;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar3,PTR_s_boundingRectWithSize_options_att_0269e550,3,puVar1,0);
      dVar4 = param_3;
      dVar9 = param_3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      _CGRectGetWidth(dVar4,param_1);
      dVar5 = (double)(long)param_3;
      local_2c8 = dVar5;
      if (dVar4 < dVar5) {
        local_2c8 = dVar4;
      }
      dVar4 = local_2c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      _CGRectGetWidth();
      dVar6 = dVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      _CGRectGetHeight();
      dVar7 = dVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      _CGRectGetMidX(dVar7,dVar5,dVar9);
      uVar10 = 0x3fe0000000000000;
      dVar5 = dVar7 + local_2c8 * 0.5;
      dVar9 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      _CGRectGetMaxX(dVar9,uVar10);
      dVar5 = dVar5 + 3.0;
      local_2d8 = dVar5;
      if (dVar9 - dVar4 < dVar5) {
        local_2d8 = dVar9 - dVar4;
      }
      dVar9 = local_2d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      _CGRectGetMinY();
      dVar8 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      _CGRectGetHeight(dVar8,dVar5,dVar7,param_4);
      dVar9 = dVar9 + (double)(long)((dVar8 - dVar6) * 0.5);
      FUN_0152a0a0();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2d8,dVar9,dVar4,dVar6,local_48,PTR_s_setFrame__026ca960);
      local_54 = 0;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

