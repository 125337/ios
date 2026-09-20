// FUN_0068a554 @ 0068a554

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0068a554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  uint local_160;
  uint local_138;
  uint local_110;
  ulong local_60 [3];
  ulong local_48;
  undefined8 local_40;
  ulong local_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  local_40 = param_3;
  FUN_0068974c(local_30,local_38,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_38;
  local_48 = uVar2;
  FUN_0068b580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = (uint)local_38;
  local_60[0] = uVar3;
  FUN_0068b928();
  if ((uVar1 & 1) == 0) {
    uVar2 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_containsString__0269d0b0,&cf_lggHe_);
    local_110 = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_errcode);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_0068b784();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_110 = (uint)uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if ((local_110 & 1) == 0) {
      uVar2 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60[0],PTR_s_containsString__0269d0b0,&cf_6e>k_NN_ec_O_u);
      local_138 = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_errcode);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_0068b784();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_138 = (uint)uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if ((local_138 & 1) == 0) {
        uVar2 = local_60[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60[0],PTR_s_containsString__0269d0b0,&cf_N_ec_Ne);
        local_160 = 1;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_errcode);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          FUN_0068b784();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_160 = (uint)uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        if ((local_160 & 1) == 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_isEqualToString__0269ccc8,&cf_checkoccupation);
          if ((uVar2 & 1) == 0) {
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf____g_v1Y_);
            _objc_retainAutoreleasedReturnValue();
            local_28 = puVar5;
          }
          else {
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_S6e>kf_eN_v0T);
            _objc_retainAutoreleasedReturnValue();
            local_28 = puVar5;
          }
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_6e>kfS_u_Ne0e0peW_N_4_te);
          _objc_retainAutoreleasedReturnValue();
          local_28 = puVar5;
        }
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf__eNbS_MRc9ebSf0T);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar5;
      }
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_lggHe_0p0MRS0Sb);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar5;
    }
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf____g_vU__1YHe0p0MRS0Sb);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar5;
  }
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

