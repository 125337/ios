// FUN_000d0ad8 @ 000d0ad8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000d0ad8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *local_280;
  double local_268;
  double local_260;
  undefined *local_188;
  undefined *local_178;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_90;
  double local_58;
  undefined8 local_50;
  undefined *local_48;
  double local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 *puVar5;
  
  local_48 = (undefined *)0x0;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(&local_48,param_6);
  puVar5 = &local_50;
  local_50 = 0;
  _objc_storeStrong(puVar5,param_7);
  uVar4 = (uint)puVar5;
  local_58 = param_5;
  if (((local_48 == (undefined *)0x0) || (param_5 <= 0.5)) ||
     (_CGRectIsEmpty(local_40,uStack_38,local_30,uStack_28), (uVar4 & 1) != 0)) {
    FUN_000cda40(local_48);
    local_90 = 1;
  }
  else {
    puVar6 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      FUN_000cda40(local_48);
      local_90 = 1;
    }
    else {
      puVar6 = local_48;
      FUN_000cdc6c();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)PTR__CGRectZero_025782f0,
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),puVar7,
                   PTR_s_initWithFrame__026ca6e8);
        puVar6 = local_a0;
        local_a0 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setUserInteractionEnabled__026caad8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setHidden__026ca970,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setAutoresizingMask__026ca878,10);
        _objc_setAssociatedObject(local_48,&DAT_028c8298,local_a0,1);
      }
      uVar3 = local_30;
      dVar2 = local_40;
      dVar8 = local_40;
      _CGRectGetMaxY(local_40,uStack_38,local_30,uStack_28);
      local_268 = local_58;
      dVar8 = dVar8 - local_58;
      local_260 = local_40;
      uVar10 = uStack_38;
      uVar11 = local_30;
      uVar12 = uStack_28;
      _CGRectGetMaxY();
      dVar9 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      _CGRectGetMaxY(dVar9,uVar10,uVar11,uVar12);
      local_260 = local_260 - dVar9;
      if (local_260 <= 0.0) {
        local_260 = 0.0;
      }
      if (local_260 <= local_268) {
        local_268 = local_260;
      }
      else {
      }
      if (0.5 < local_268) {
        puVar6 = local_48;
        FUN_000d131c(local_48,local_50);
        bVar1 = ((ulong)puVar6 & 1) == 0;
        if (bVar1) {
          local_280 = local_48;
          FUN_000d163c();
          _objc_retainAutoreleasedReturnValue();
          local_188 = local_280;
        }
        else {
          local_280 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          local_178 = local_280;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888,local_280)
        ;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_188);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_178);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar2,dVar8,uVar3,local_268,local_a0,PTR_s_setFrame__026ca960);
        puVar7 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_98;
        (*(code *)PTR__objc_release_02578630)();
        if (puVar7 == puVar6) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_insertSubview_belowSubview__0269e078,local_a0,local_48);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_removeFromSuperview_026ca800);
          puVar6 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          if (puVar7 == (undefined *)0x7fffffffffffffff) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_insertSubview_belowSubview__0269e078,local_a0,local_48);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_insertSubview_atIndex__026ca748,local_a0,puVar7);
          }
        }
        local_90 = 0;
      }
      else {
        FUN_000cda40(local_48);
        local_90 = 1;
      }
      _objc_storeStrong(&local_a0,0);
    }
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return;
}

