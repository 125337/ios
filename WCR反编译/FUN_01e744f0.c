// FUN_01e744f0 @ 01e744f0

double FUN_01e744f0(double param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  double dVar4;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_118;
  double local_110;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  double local_40;
  double local_38;
  cfstringStruct *local_30;
  double local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = param_1;
  if (local_30 == (cfstringStruct *)0x0) {
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_30;
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  FUN_01e6ebac(local_30);
  local_40 = param_1;
  if (0.0 < param_1) {
    local_44 = 1;
    local_28 = param_1;
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardWebHTMLEnabled_026c6d68);
    bVar1 = false;
    if (((ulong)pcVar3 & 1) == 0) {
      local_100 = &cf___;
    }
    else {
      local_58 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardWebHTML_026c6dc8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_f8 = local_58;
      if (local_58 == (cfstringStruct *)0x0) {
        local_f8 = &cf___;
      }
      local_100 = local_f8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_100;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    local_110 = local_38;
    FUN_01e74e64();
    dVar4 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardWidth_026a8950);
    if (dVar4 <= 0.0) {
      dVar4 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardSideMargin_026a8968);
      local_128 = local_110 - dVar4 * 2.0;
      if (local_128 <= 0.0) {
        local_128 = 0.0;
      }
      local_118 = local_128;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardWidth_026a8950);
      if (dVar4 < local_110) {
        local_110 = dVar4;
      }
      local_118 = local_110;
    }
    dVar4 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardContentHorizontalInset_026c6f28);
    local_138 = local_118 - dVar4 * 2.0;
    if (local_138 <= 1.0) {
      local_138 = 1.0;
    }
    local_140 = local_138;
    FUN_01e9d784(local_50,&cf_width);
    dVar4 = local_140;
    FUN_01e9d784(local_50,&cf_height);
    if (dVar4 <= 0.0) {
      if (local_140 <= 0.0) {
        local_138 = local_138 * DAT_02339788;
        FUN_01e8f1cc(local_30);
        local_28 = local_138;
      }
      else {
        if (local_140 <= local_138) {
          local_148 = 1.0;
        }
        else {
          local_148 = local_138 / local_140;
        }
        dVar4 = local_140 * local_148 * DAT_0233a540;
        FUN_01e8f1cc(local_30);
        local_28 = dVar4;
      }
    }
    else {
      if ((local_140 <= local_138) || (local_140 <= 0.0)) {
        local_140 = 1.0;
      }
      else {
        local_140 = local_138 / local_140;
      }
      dVar4 = dVar4 * local_140;
      FUN_01e8f1cc(local_30);
      local_28 = dVar4;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_28;
}

