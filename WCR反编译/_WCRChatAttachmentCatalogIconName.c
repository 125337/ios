// _WCRChatAttachmentCatalogIconName @ 00ebcbd4

void _WCRChatAttachmentCatalogIconName(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong local_58;
  cfstringStruct *local_50;
  uint local_44;
  cfstringStruct *local_40;
  long local_38;
  ulong local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_18 = &DAT_028e2a00;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02581cc0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  uVar2 = local_30;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_30;
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  lVar3 = local_38;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = local_38;
  local_38 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar7);
  uVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar4 != 0) {
    pcVar5 = DAT_028e29e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e29e8,PTR_s_objectForKeyedSubscript__0269d098,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
    pcVar6 = local_40;
    if (pcVar5 == (cfstringStruct *)0x0) {
      pcVar5 = DAT_028e29f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e29f0,PTR_s_objectForKeyedSubscript__0269d098,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
      pcVar6 = local_50;
      if (pcVar5 == (cfstringStruct *)0x0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_title_);
        if ((uVar4 & 1) != 0) {
          uVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringFromIndex__0269d120,6);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = DAT_028e29f8;
          local_58 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e29f8,PTR_s_objectForKeyedSubscript__0269d098,uVar4);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          if (pcVar5 != (cfstringStruct *)0x0) {
            pcVar6 = DAT_028e29f8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028e29f8,PTR_s_objectForKeyedSubscript__0269d098,local_58);
            _objc_retainAutoreleasedReturnValue();
            local_28 = pcVar6;
          }
          local_44 = (uint)(pcVar5 != (cfstringStruct *)0x0);
          _objc_storeStrong(&local_58,0);
          if (local_44 != 0) goto LAB_00ebced4;
        }
        local_44 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar6;
        local_44 = 1;
      }
LAB_00ebced4:
      _objc_storeStrong(&local_50,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar6;
      local_44 = 1;
    }
    _objc_storeStrong(&local_40,0);
    if (local_44 != 0) goto LAB_00ebd038;
  }
  lVar7 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  bVar1 = false;
  if (lVar7 != 0) {
    pcVar6 = DAT_028e29f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e29f8,PTR_s_objectForKeyedSubscript__0269d098,local_38);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar5 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_release_02578630)(pcVar6);
  }
  if (bVar1) {
    pcVar6 = DAT_028e29f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e29f8,PTR_s_objectForKeyedSubscript__0269d098,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_44 = 1;
    local_28 = pcVar6;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_44 = 1;
  }
LAB_00ebd038:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

