// parseResizeInput:scale:size: @ 00f3800c

/* Function Stack Size: 0x28 bytes */

bool __thiscall
WCRefineEmoticonToolsHelper::parseResizeInput_scale_size_
          (WCRefineEmoticonToolsHelper *this,ID param_1,SEL param_2,ID param_3,double *param_4,
          CGSize *param_5)

{
  CGSize *pCVar1;
  ulong uVar2;
  float fVar3;
  double in_d0;
  double dVar4;
  double dVar5;
  ulong local_58;
  long local_50;
  undefined4 local_44;
  CGSize *local_40;
  double *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  local_40 = param_5;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_11 = 0;
    local_44 = 1;
  }
  else {
    if (local_38 != (double *)0x0) {
      in_d0 = 0.0;
      *local_38 = 0.0;
    }
    if (local_40 != (CGSize *)0x0) {
      in_d0 = *(double *)PTR__CGSizeZero_025782f8;
      local_40->field1_0x8 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
      local_40->field0_0x0 = in_d0;
    }
    fVar3 = SUB84(in_d0,0);
    local_50 = 0;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_x);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_X);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__);
        if ((uVar2 & 1) != 0) {
          _objc_storeStrong(&local_50,&cf__);
        }
      }
      else {
        _objc_storeStrong(&local_50,&cf_X);
      }
    }
    else {
      _objc_storeStrong(&local_50,&cf_x);
    }
    if (local_50 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_floatValue_026a5b48);
      dVar5 = (double)fVar3;
      if ((dVar5 < DAT_02323dc8) || (5.0 < dVar5)) {
        local_11 = 0;
        local_44 = 1;
      }
      else {
        if (local_38 != (double *)0x0) {
          *local_38 = dVar5;
        }
        local_11 = 1;
        local_44 = 1;
      }
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_componentsSeparatedByString__0269d3c0,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
      if (uVar2 < 2) {
        local_11 = 0;
      }
      else {
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar4 = (double)fVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_58;
        dVar5 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        fVar3 = SUB84(dVar5,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar5 = (double)fVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        pCVar1 = local_40;
        if ((((dVar4 < 10.0) || (1024.0 < dVar4)) || (dVar5 < 10.0)) || (1024.0 < dVar5)) {
          local_11 = 0;
        }
        else {
          if (local_40 != (CGSize *)0x0) {
            FUN_00f3845c();
            pCVar1->field1_0x8 = dVar5;
            pCVar1->field0_0x0 = dVar4;
          }
          local_11 = 1;
        }
      }
      local_44 = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

