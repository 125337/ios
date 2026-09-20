// wcr_fitContentLabelToFrame @ 01b05d40

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardCell::wcr_fitContentLabelToFrame(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  double in_d2;
  double in_d3;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  ID local_b8;
  double local_b0;
  undefined8 local_a8;
  ID local_a0;
  ID local_98;
  ID local_90;
  double local_88;
  int local_7c;
  double local_68;
  double local_60;
  ID local_58;
  SEL local_50;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  ID local_28;
  
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentSourceAttr_026be7f8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_48;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentLabel_026ad638);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = in_d2;
  local_60 = in_d3;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((((local_58 == 0) ||
       (IVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
       IVar1 = local_58, IVar2 == 0)) || (local_68 <= 0.0)) || (local_60 <= 0.0)) {
    local_7c = 1;
  }
  else {
    local_88 = 13.5;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = IVar1;
    do {
      if (local_88 < 9.0) break;
      IVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_mutableCopy_0269d8a0);
      uVar4 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
      IVar3 = IVar2;
      local_98 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
      IVar1 = local_98;
      local_38 = 0;
      local_30 = 0;
      local_a8 = 0;
      local_d8 = PTR___NSConcreteGlobalBlock_02578658;
      local_d0 = 0xd0800000;
      local_cc = 0;
      local_c8 = FUN_01b060fc;
      local_c0 = &DAT_0258b258;
      local_b0 = local_88;
      local_a0 = IVar3;
      local_40 = IVar3;
      local_28 = IVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_enumerateAttribute_inRange_optio_026a1d90,uVar4,local_a8,local_a0,0,
                 &local_d8);
      IVar2 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_copy_0269d150);
      IVar1 = local_90;
      local_90 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_90;
      FUN_01b0521c();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_boundingRectWithSize_options_con_026a66f0,3,0);
      if (local_60 + 0.5 < (double)(long)in_d3) {
        local_88 = local_88 - 0.5;
        local_7c = 0;
      }
      else {
        local_7c = 3;
      }
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_98,0);
    } while (local_7c == 0);
    IVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentLabel_026ad638);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_90,0);
    local_7c = 0;
  }
  _objc_storeStrong(&local_58,0);
  return;
}

