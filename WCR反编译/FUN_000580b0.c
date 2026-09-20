// FUN_000580b0 @ 000580b0

void FUN_000580b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  long local_e0;
  long local_88;
  long local_80 [3];
  cfstringStruct *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_2);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_3);
  pcVar4 = &cf_MsgRecordDataWrap;
  local_60 = param_4;
  _NSClassFromString();
  lVar5 = local_48;
  local_68 = pcVar4;
  FUN_00057b64(local_48,&cf_m_recordMsg);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = lVar5;
  if (lVar5 == 0) {
    local_88 = local_48;
    FUN_00057b64(local_48,&cf_historyMsgWrap);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80[0] = local_e0;
  if (lVar5 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  (*(code *)PTR__objc_release_02578630)(lVar5);
  puVar1 = PTR_s_initWithParent_DataItem_dataList_0269db18;
  if (((local_68 == (cfstringStruct *)0x0) || (local_80[0] == 0)) || (local_50 == 0)) {
    local_40 = (cfstringStruct *)0x0;
  }
  else {
    pcVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_instancesRespondToSelector__0269da90,
               PTR_s_initWithParent_DataItem_dataList_0269db18);
    puVar6 = PTR_s_initWithParent_DataItem_Index__0269db20;
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_instancesRespondToSelector__0269da90,
                 PTR_s_initWithParent_DataItem_Index__0269db20);
      if (((ulong)pcVar4 & 1) == 0) {
        local_40 = (cfstringStruct *)0x0;
      }
      else {
        pcVar4 = local_68;
        _objc_alloc();
        pcVar8 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar6,local_80[0],local_50,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_40 = pcVar8;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
    }
    else {
      pcVar4 = local_68;
      _objc_alloc();
      lVar3 = local_50;
      uVar2 = local_58;
      lVar5 = local_80[0];
      local_38 = &cf_dataDesc;
      local_30 = &cf_dataTitle;
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      FUN_0004f1c4();
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar1,lVar5,lVar3,uVar2,lVar7,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(lVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
  }
  _objc_storeStrong(local_80);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

