// pushNicknameIfNeeded:hostView:placement:plateSize:scene: @ 010e2bd8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x40 bytes */

CGRect WCRefineNameplateHelper::pushNicknameIfNeeded_hostView_placement_plateSize_scene_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,CGSize param_6,
                 long_long param_7)

{
  CGRect CVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  double in_d0;
  double dVar6;
  undefined8 in_d1;
  undefined8 uVar7;
  double in_d2;
  double in_d3;
  double local_c8;
  ulong local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_98;
  double local_90;
  undefined4 local_84;
  double local_80;
  long_long local_78;
  undefined8 local_70;
  ulong local_68;
  SEL local_60;
  ID local_58;
  double local_50;
  double local_40;
  undefined8 local_38;
  double local_30;
  double local_28;
  
  local_68 = 0;
  local_60 = param_2;
  local_58 = param_1;
  local_50 = in_d0;
  _objc_storeStrong(&local_68,param_3);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_4);
  local_80 = param_6.field0_0x0;
  local_78 = param_5;
  if ((param_5 != 0) || (in_d1 = 0x3ff0000000000000, in_d0 = local_50, local_50 < 1.0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_68);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_visualNicknameFrameInHost_nickna_026ae910,local_70,local_68,local_80);
    local_84 = 1;
    local_40 = in_d0;
    local_38 = in_d1;
    local_30 = in_d2;
    local_28 = in_d3;
  }
  else {
    uVar7 = 0x4000000000000000;
    dVar6 = local_50 + 2.0;
    local_90 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_frame_026ca640);
    uVar4 = local_68;
    local_b8 = dVar6;
    local_b0 = uVar7;
    local_98 = dVar6;
    _objc_getAssociatedObject(local_68,DAT_0280e1c0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_c8 = local_98;
    local_c0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    uVar3 = local_68;
    uVar2 = DAT_0280e1c0;
    if ((uVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar3,uVar2,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_frame_026ca640);
      dVar6 = local_98 + local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setFrame__026ca960);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_doubleValue_026ca608);
      uVar3 = local_68;
      uVar2 = DAT_0280e1c0;
      if (local_98 + 1.5 < local_c8) {
        local_c8 = local_98;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,uVar2,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      dVar6 = ABS(local_98 - (local_c8 + local_90));
      uVar7 = 0x3ff8000000000000;
      in_d2 = local_90;
      if (1.5 < dVar6) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_frame_026ca640);
        dVar6 = local_c8 + local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setFrame__026ca960);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_visualNicknameFrameInHost_nickna_026ae910,local_70,local_68,local_80);
    local_40 = dVar6 - local_90;
    local_84 = 1;
    local_38 = uVar7;
    local_30 = in_d2;
    local_28 = in_d3;
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  CVar1.field0_0x0.field1_0x8 = (double)local_38;
  CVar1.field0_0x0.field0_0x0 = local_40;
  CVar1.field1_0x10.field0_0x0 = local_30;
  CVar1.field1_0x10.field1_0x8 = local_28;
  return CVar1;
}

