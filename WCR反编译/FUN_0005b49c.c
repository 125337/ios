// FUN_0005b49c @ 0005b49c

void FUN_0005b49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  byte local_99;
  ulong local_98;
  ulong local_90 [2];
  ulong local_80 [2];
  ulong local_70 [2];
  ulong local_60;
  int local_54;
  uint local_50;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uVar4;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar4 = local_28;
  (*DAT_028c7c68)(local_28,local_30,local_38,local_40);
  uVar3 = (uint)uVar4;
  FUN_0005ed44();
  if ((uVar3 & 1) == 0) {
    local_50 = 1;
    goto LAB_0005bccc;
  }
  if (local_40 == 0) {
    local_50 = 1;
    goto LAB_0005bccc;
  }
  local_54 = 0;
  uVar8 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar8,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
  if ((uVar8 & 1) != 0) {
    uVar8 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_unsignedIntValue_0269db10);
    local_54 = (int)uVar8;
  }
  _objc_storeStrong(&local_60,0);
  if (local_54 != 1) {
    local_50 = 1;
    goto LAB_0005bccc;
  }
  local_70[0] = 0;
  uVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_nsContent);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_70[0];
  local_70[0] = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  uVar8 = local_70[0];
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar6);
  if (((uVar8 & 1) == 0) ||
     (uVar8 = local_70[0], (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_length_0269cca0),
     uVar8 == 0)) {
    local_50 = 1;
  }
  else {
    puVar6 = PTR_WCRefineLinkParser_026ce168;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLinkParser_026ce168,PTR_s_textContainsSupportedLink__0269dc30,local_70[0]
              );
    if (((ulong)puVar6 & 1) == 0) {
      local_50 = 1;
    }
    else {
      local_80[0] = 0;
      uVar8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_nsFromUsr);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_80[0];
      local_80[0] = uVar8;
      (*(code *)PTR__objc_release_02578630)();
      FUN_00063168();
      _objc_retainAutoreleasedReturnValue();
      local_90[0] = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
      uVar8 = 0;
      if (uVar5 == 0) {
LAB_0005b95c:
        uVar5 = local_40;
        FUN_000635d4(uVar8,local_40,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_98 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
        if (uVar5 == 0) {
          local_50 = 1;
        }
        else {
          uVar8 = local_98;
          FUN_000614c8();
          local_99 = (byte)uVar8;
          puVar6 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar2 = 1;
          if (((ulong)puVar7 & 1) != 0) {
            bVar2 = local_99 ^ 1;
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          if ((bVar2 & 1) == 0) {
            uVar8 = local_40;
            FUN_00063cf0(local_40,local_98);
            if ((uVar8 & 1) == 0) {
              local_50 = 1;
            }
            else {
              uVar8 = local_40;
              FUN_00063ee8(local_40,local_98,local_70[0]);
              _objc_retainAutoreleasedReturnValue();
              local_a8 = uVar8;
              FUN_00064654();
              puVar6 = PTR___dispatch_main_q_02578680;
              bVar1 = (uVar8 & 1) != 0;
              if (bVar1) {
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = local_70[0];
                local_e0 = PTR___NSConcreteStackBlock_02578660;
                local_d8 = 0xc2000000;
                local_d4 = 0;
                local_d0 = FUN_000648e4;
                local_c8 = &DAT_02578f80;
                (*(code *)PTR__objc_retain_02578638)();
                uVar5 = local_98;
                local_c0 = uVar8;
                (*(code *)PTR__objc_retain_02578638)();
                uVar8 = local_a8;
                local_b8 = uVar5;
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar8;
                _dispatch_async(puVar6,&local_e0);
                (*(code *)PTR__objc_release_02578630)(puVar6);
                _objc_storeStrong(&local_b0);
                _objc_storeStrong(&local_b8,0);
                _objc_storeStrong(&local_c0,0);
              }
              local_50 = (uint)!bVar1;
              _objc_storeStrong(&local_a8,0);
            }
          }
          else {
            local_50 = 1;
          }
        }
        _objc_storeStrong(&local_98,0);
      }
      else {
        uVar5 = local_80[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80[0],PTR_s_isEqualToString__0269ccc8,local_90[0]);
        uVar8 = uVar5 & 0xffffffff;
        if ((uVar5 & 1) == 0) goto LAB_0005b95c;
        local_50 = 1;
      }
      _objc_storeStrong(local_90);
      _objc_storeStrong(local_80,0);
    }
  }
  _objc_storeStrong(local_70,0);
LAB_0005bccc:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

