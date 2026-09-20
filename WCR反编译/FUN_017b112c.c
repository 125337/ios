// FUN_017b112c @ 017b112c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_017b112c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined **ppuVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined *puVar8;
  cfstringStruct *local_238;
  cfstringStruct *local_150;
  cfstringStruct *local_100;
  undefined *local_f0;
  undefined *local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  long local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  undefined **local_70;
  byte local_63;
  byte local_62;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  undefined *local_40;
  cfstringStruct *local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homeSessionGroupingEnabled_026a2888);
  uVar2 = (uint)puVar3;
  if (((((ulong)puVar3 & 1) == 0) || (_WCRefineHomeGroupingRegularGateAllowed(), (uVar2 & 1) == 0))
     || ((DAT_028e421a & 1) != 0)) {
    local_21 = 0;
    local_50 = 1;
  }
  else {
    pcVar4 = local_38;
    FUN_017b0dd8();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_150 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_150 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_150;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf__addwcr);
    local_61 = (byte)pcVar4;
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf__subwcr);
    local_62 = (byte)pcVar4;
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf__nowcr);
    lVar7 = local_30;
    local_63 = (byte)pcVar4;
    if ((((local_61 & 1) == 0) && ((local_62 & 1) == 0)) && (((ulong)pcVar4 & 1) == 0)) {
      local_21 = 0;
      local_50 = 1;
    }
    else {
      ppuVar5 = &local_98;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_017b1e34;
      local_80 = &DAT_0257d9b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = lVar7;
      _objc_retainBlock();
      local_70 = ppuVar5;
      if ((local_63 & 1) == 0) {
        pcVar4 = &cf__addwcr;
        if ((local_61 & 1) == 0) {
          pcVar4 = &cf__subwcr;
        }
        (*(code *)PTR__objc_retain_02578638)();
        pcVar6 = local_58;
        local_a8 = pcVar4;
        FUN_017b286c(local_58,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_21 = 0;
          local_50 = 1;
        }
        else {
          lVar7 = local_30;
          FUN_017b1f78();
          _objc_retainAutoreleasedReturnValue();
          DAT_028e421a = 1;
          local_b8 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
          if (lVar7 == 0) {
            (*(code *)local_70[2])(local_70,&cf_el_RS_MRJ_YO_WJ_YueQ);
            local_21 = 1;
            local_50 = 1;
          }
          else {
            puVar3 = PTR_WCRefineGroupManager_026ce2b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_c0 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (local_c0 == (undefined *)0x0) {
              (*(code *)local_70[2])(local_70,&cf_R_);
            }
            else {
              puVar3 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_kind_026a27e8);
              if (puVar3 == (undefined *)0x0) {
                if ((local_61 & 1) == 0) {
                  puVar3 = PTR_WCRefineGroupManager_026ce2b8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  uVar2 = (uint)puVar8;
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                }
                else {
                  puVar3 = PTR_WCRefineGroupManager_026ce2b8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  uVar2 = (uint)puVar8;
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                }
                ppuVar5 = local_70;
                local_238 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                bVar1 = (uVar2 & 1) == 0;
                if (bVar1) {
                  local_238 = &cf_R_d_O1Y_;
                }
                else {
                  local_f0 = local_c0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_name_0269d828);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_238,PTR_s_stringWithFormat__0269cca8,&cf_____);
                  _objc_retainAutoreleasedReturnValue();
                  local_100 = local_238;
                }
                (*(code *)ppuVar5[2])(ppuVar5,local_238);
                if (!bVar1) {
                  (*(code *)PTR__objc_release_02578630)(local_100);
                  (*(code *)PTR__objc_release_02578630)(local_f0);
                }
              }
              else {
                (*(code *)local_70[2])(local_70,&cf_N_ec_R__wcR__R__uR__tmR);
              }
            }
            local_50 = 1;
            local_21 = 1;
            _objc_storeStrong(&local_c0,0);
          }
          _objc_storeStrong(&local_b8,0);
        }
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_a8,0);
      }
      else {
        lVar7 = local_30;
        FUN_017b1f78();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
        if (lVar7 == 0) {
          DAT_028e421a = 1;
          (*(code *)local_70[2])(local_70,&cf_el_RS_MRJ_YO_WJ_YueQ);
        }
        else {
          DAT_028e421a = 1;
          FUN_017b2570(local_a0);
          (*(code *)local_70[2])(local_70,&cf___NdkJ_YN6e_);
        }
        local_50 = 1;
        local_21 = 1;
        _objc_storeStrong(&local_a0,0);
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

