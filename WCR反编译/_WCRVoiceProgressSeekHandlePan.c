// _WCRVoiceProgressSeekHandlePan @ 015c3f08

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _WCRVoiceProgressSeekHandlePan
               (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double local_148;
  double local_140;
  double local_138;
  uint local_f4;
  undefined *local_f0;
  uint local_e4;
  undefined *local_e0;
  uint local_d4;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  uint local_44;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  plVar1 = &local_30;
  local_30 = 0;
  _objc_storeStrong(plVar1,param_6);
  if (((local_28 == (undefined *)0x0) || (local_30 == 0)) ||
     (_WCRVoiceProgressSeekEnabled(), ((ulong)plVar1 & 1) == 0)) {
    _WCRVoiceProgressSeekHideOverlay(local_28);
    local_34 = 1;
  }
  else {
    puVar2 = local_28;
    FUN_015c2a0c();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_34 = 1;
    }
    else {
      puVar2 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028e3b2a);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar5 = (uint)puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_44 = uVar5;
      if (uVar5 == 0) {
        uVar5 = (uint)local_28;
        _WCRVoiceProgressSeekRealDurationMS();
        local_44 = uVar5;
        puVar2 = local_28;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   local_44);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(puVar2,&DAT_028e3b2a,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      if (local_44 == 0) {
        local_34 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_locationInView__026ca798,local_40);
        dVar6 = 1.0;
        local_68 = 1.0;
        local_58 = param_1;
        local_50 = param_2;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
        local_90 = dVar6;
        local_88 = param_2;
        local_80 = param_3;
        local_78 = param_4;
        _CGRectGetWidth(dVar6,param_2,param_3,param_4);
        local_138 = dVar6;
        if (dVar6 <= local_68) {
          local_138 = local_68;
        }
        local_98 = local_138;
        local_60 = local_138;
        local_a8 = 0;
        local_b8 = 0x3ff0000000000000;
        local_c0 = local_58 / local_138;
        local_140 = local_c0;
        if (1.0 < local_c0) {
          local_140 = 1.0;
        }
        local_c8 = local_140;
        local_b0 = local_140;
        if (local_140 <= 0.0) {
          local_148 = 0.0;
        }
        else {
          local_148 = local_140;
        }
        local_d0 = local_148;
        local_a0 = local_148;
        dVar7 = (double)NEON_ucvtf((ulong)local_44);
        local_d4 = (uint)(long)(local_148 * dVar7);
        lVar4 = local_30;
        local_70 = dVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_state_026cab20);
        puVar2 = local_28;
        if (lVar4 == 1) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(puVar2,&DAT_028e3b28,puVar3,1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          FUN_015c322c(local_28);
          puVar2 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028e3b2b);
          _objc_retainAutoreleasedReturnValue();
          local_e0 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            puVar3 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            puVar2 = local_e0;
            local_e0 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _objc_setAssociatedObject(local_28,&DAT_028e3b2b,local_e0,1);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_impactOccurred_026ca6a0);
          puVar2 = local_28;
          FUN_015c4660(local_28,local_44);
          local_e4 = (uint)puVar2;
          if (local_e4 == 0) {
            puVar2 = local_28;
            FUN_015c1a34();
            _objc_retainAutoreleasedReturnValue();
            local_f0 = puVar2;
            FUN_015c4840();
            local_f4 = (uint)puVar2;
            if (local_44 < local_f4) {
              local_f4 = local_44;
            }
            if (local_f4 == 0) {
              if (1.0 <= local_58) {
                local_e4 = local_d4;
              }
            }
            else {
              local_e4 = local_f4;
            }
            _objc_storeStrong(&local_f0,0);
          }
          FUN_015c4980(local_28,local_e4,local_44,1);
          local_34 = 1;
          _objc_storeStrong(&local_e0,0);
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     local_d4);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(puVar2,&DAT_028e3b2c,puVar3,1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          lVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_state_026cab20);
          if (lVar4 == 2) {
            FUN_015c4980(local_28,local_d4,local_44,0);
            local_34 = 1;
          }
          else {
            _objc_setAssociatedObject(local_28,&DAT_028e3b28,0,1);
            lVar4 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_state_026cab20);
            puVar2 = local_28;
            if (lVar4 == 3) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(puVar2,&DAT_028e3b29,puVar3,1);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              FUN_015c4980(local_28,local_d4,local_44,0);
              puVar2 = local_28;
              _WCRVoiceProgressSeekPlayFromTime(local_28,local_d4);
              if (((ulong)puVar2 & 1) == 0) {
                _WCRVoiceProgressSeekHideOverlay(local_28);
              }
              else {
                FUN_015c3d0c(local_28);
              }
              local_34 = 1;
            }
            else {
              _WCRVoiceProgressSeekHideOverlay(local_28);
              local_34 = 0;
            }
          }
        }
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

