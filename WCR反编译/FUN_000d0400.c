// FUN_000d0400 @ 000d0400

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000d0400(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar6;
  undefined *puVar7;
  double local_1f0;
  double local_1e8;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_90;
  double local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  double dStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 *puVar5;
  
  local_48 = (undefined *)0x0;
  local_40 = param_1;
  dStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(&local_48,param_6);
  puVar5 = &local_50;
  local_50 = 0;
  _objc_storeStrong(puVar5,param_7);
  uVar4 = (uint)puVar5;
  local_58 = param_5;
  if (((local_48 == (undefined *)0x0) || (param_5 <= 0.5)) ||
     (local_1e8 = dStack_38, _CGRectIsEmpty(local_40), (uVar4 & 1) != 0)) {
    FUN_000cd950(local_48);
    local_90 = 1;
  }
  else {
    puVar6 = local_48;
    FUN_000d131c(local_48,local_50);
    if (((ulong)puVar6 & 1) == 0) {
      puVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        FUN_000cd950(local_48);
        local_90 = 1;
      }
      else {
        puVar6 = local_48;
        FUN_000cdb30();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = puVar6;
        if (puVar6 == (undefined *)0x0) {
          puVar7 = PTR__OBJC_CLASS___UIView_026cdfd8;
          _objc_alloc();
          local_1e8 = *(double *)(PTR__CGRectZero_025782f0 + 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)PTR__CGRectZero_025782f0,puVar7,PTR_s_initWithFrame__026ca6e8);
          puVar6 = local_a0;
          local_a0 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_setUserInteractionEnabled__026caad8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setHidden__026ca970,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setAutoresizingMask__026ca878,0x22);
          _objc_setAssociatedObject(local_48,&DAT_028c8297,local_a0,1);
        }
        uVar3 = local_30;
        dVar2 = dStack_38;
        uVar1 = local_40;
        local_1f0 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
        local_1e8 = local_1e8 - dStack_38;
        if (local_1e8 <= 0.0) {
          local_1e8 = 0.0;
        }
        if (local_1e8 <= local_1f0) {
          local_1f0 = local_1e8;
        }
        else {
        }
        if (0.5 < local_1f0) {
          puVar6 = local_48;
          FUN_000d163c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,dVar2,uVar3,local_1f0,local_a0,PTR_s_setFrame__026ca960);
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
          FUN_000cd950(local_48);
          local_90 = 1;
        }
        _objc_storeStrong(&local_a0,0);
      }
      _objc_storeStrong(&local_98,0);
    }
    else {
      FUN_000cd950(local_48);
      local_90 = 1;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return;
}

