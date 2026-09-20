// FUN_005293d0 @ 005293d0

byte FUN_005293d0(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *local_b8;
  long local_88;
  undefined4 local_80;
  byte local_79;
  long local_78;
  cfstringStruct *local_70 [3];
  cfstringStruct *local_58;
  long local_50;
  byte local_41;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_momentsKeywordFilterPattern_026a4aa0);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_b8 = &cf___;
  }
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_70[0] = local_b8;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  local_79 = 0;
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsKeywordFilterEnabled_026a4aa8);
  bVar2 = true;
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_70[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_length_0269cca0);
    bVar2 = true;
    if (pcVar3 != (cfstringStruct *)0x0) {
      lVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentDesc_026a4a10);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar2 = lVar5 == 0;
    }
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if (bVar2) {
    local_41 = 0;
    local_80 = 1;
  }
  else {
    local_88 = 0;
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_class_0269cd60);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    pcVar3 = DAT_028cb1f0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb1f0,PTR_s_isEqualToString__0269ccc8,local_70[0]);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar6 = local_70[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_copy_0269d150);
      pcVar3 = DAT_028cb1f0;
      DAT_028cb1f0 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      puVar7 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,local_70[0],1,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = DAT_028cb1f8;
      DAT_028cb1f8 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(&local_88,DAT_028cb1f8);
    _objc_sync_exit(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar5 = local_88;
    if (local_88 == 0) {
      local_41 = 0;
    }
    else {
      lVar8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentDesc_026a4a10);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentDesc_026a4a10);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = 0;
      local_30 = 0;
      local_40 = lVar10;
      local_28 = lVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar5,PTR_s_firstMatchInString_options_range_0269ef48,lVar8,0,0,lVar10);
      _objc_retainAutoreleasedReturnValue();
      local_41 = lVar5 != 0;
      (*(code *)PTR__objc_release_02578630)();
      (*(code *)PTR__objc_release_02578630)(lVar9);
      (*(code *)PTR__objc_release_02578630)(lVar8);
    }
    local_80 = 1;
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  return local_41 & 1;
}

