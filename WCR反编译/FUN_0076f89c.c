// FUN_0076f89c @ 0076f89c

byte FUN_0076f89c(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  ulong local_130;
  uint local_c8;
  uint local_b8;
  ulong local_90;
  ulong local_88;
  double local_80;
  byte local_71;
  ulong local_70;
  byte local_61;
  ulong local_60;
  undefined4 local_44;
  undefined8 local_40;
  ulong local_38;
  double local_30;
  byte local_21;
  
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38,param_2);
  puVar2 = &local_40;
  local_40 = 0;
  _objc_storeStrong(puVar2,param_3);
  local_c8 = (uint)puVar2;
  if (local_30 <= 0.0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    local_61 = 0;
    local_71 = 0;
    FUN_00770374();
    local_b8 = 0;
    if ((local_c8 & 1) == 0) {
      uVar3 = DAT_028cc8b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_verifiedTargetPayee);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c8 = 0;
      if ((uVar3 & 1) != 0) {
        uVar3 = DAT_028cc8b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_fromPluginSponsorPage);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_c8 = (uint)uVar3;
      }
      local_b8 = local_c8 ^ 1;
    }
    if ((local_71 & 1) != 0) {
      uVar3 = local_70;
      (*(code *)PTR__objc_release_02578630)();
      local_c8 = (uint)uVar3;
    }
    if ((local_61 & 1) != 0) {
      uVar3 = local_60;
      (*(code *)PTR__objc_release_02578630)();
      local_c8 = (uint)uVar3;
    }
    if ((local_b8 & 1) == 0) {
      dVar6 = local_30;
      FUN_007705cc();
      if ((local_c8 & 1) == 0) {
        uVar3 = DAT_028cc8b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_tapAmountInYuan);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_80 = dVar6;
        if (dVar6 <= 0.0) {
          uVar3 = DAT_028cc8b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_80 = dVar6;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__g_k_N);
        _objc_retainAutoreleasedReturnValue();
        FUN_0076b40c();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_21 = 0;
        local_44 = 1;
      }
      else {
        local_130 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        bVar1 = local_130 == 0;
        if (bVar1) {
          FUN_0076be80(0);
          _objc_retainAutoreleasedReturnValue();
          local_90 = local_130;
        }
        else {
          local_130 = local_38;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_130;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        uVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
          local_21 = 0;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if ((((DAT_028cc900 <= 0.0) || (5.0 <= dVar6 - DAT_028cc900)) ||
              (DAT_02323d38 <= ABS(DAT_028cc948 - local_30))) ||
             (uVar3 = DAT_028cc8c0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (DAT_028cc8c0,PTR_s_isEqualToString__0269ccc8,local_88), (uVar3 & 1) == 0)) {
            FUN_007707ec(local_30,local_88);
            DAT_028cc948 = local_30;
            uVar5 = local_88;
            DAT_028cc900 = dVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_copy_0269d150);
            uVar3 = DAT_028cc8c0;
            DAT_028cc8c0 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            FUN_0076bfd0();
            local_21 = 1;
          }
          else {
            local_21 = 0;
          }
        }
        local_44 = 1;
        _objc_storeStrong(&local_88,0);
      }
    }
    else {
      local_21 = 0;
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_21 & 1;
}

