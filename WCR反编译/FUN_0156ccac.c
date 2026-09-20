// FUN_0156ccac @ 0156ccac

void FUN_0156ccac(undefined8 param_1,undefined8 param_2)

{
  qword qVar1;
  long lVar2;
  bool bVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_50;
  cfstringStruct local_48;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getChatUserName_0269e7a0);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getChatUserName_0269e7a0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_48.field3_0x18 = (long)pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = (cfstringStruct *)local_48.field3_0x18;
    (*(code *)PTR__objc_msgSend_02578628)(local_48.field3_0x18,PTR_s_length_0269cca0);
    lVar2 = local_48.field3_0x18;
    bVar3 = pcVar4 != (cfstringStruct *)0x0;
    if (bVar3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = (cfstringStruct *)lVar2;
    }
    local_48.field2_0x10._4_4_ = (uint)bVar3;
    _objc_storeStrong(bVar3,&local_48.field3_0x18,0);
    if (local_48.field2_0x10._4_4_ != 0) goto LAB_0156d07c;
  }
  pcVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getChatContact_0269d630);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_48.field1_0x8 = (qword)pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = (cfstringStruct *)local_48.field1_0x8;
    (*(code *)PTR__objc_msgSend_02578628)(local_48.field1_0x8,PTR_s_length_0269cca0);
    qVar1 = local_48.field1_0x8;
    bVar3 = pcVar4 != (cfstringStruct *)0x0;
    if (bVar3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = (cfstringStruct *)qVar1;
    }
    local_48.field2_0x10._4_4_ = (uint)bVar3;
    _objc_storeStrong(bVar3,&local_48.field1_0x8,0);
    if (local_48.field2_0x10._4_4_ != 0) goto LAB_0156d07c;
  }
  pcVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_GetContact_0269d2c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_48.field0_0x0 = (qword)pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = (cfstringStruct *)local_48.field0_0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_48.field0_0x0,PTR_s_length_0269cca0);
    qVar1 = local_48.field0_0x0;
    bVar3 = pcVar4 != (cfstringStruct *)0x0;
    if (bVar3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = (cfstringStruct *)qVar1;
    }
    local_48.field2_0x10._4_4_ = (uint)bVar3;
    pcVar4 = &local_48;
    _objc_storeStrong(bVar3,pcVar4,0);
    if (local_48.field2_0x10._4_4_ != 0) goto LAB_0156d07c;
  }
  FUN_01532090();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  FUN_01528d34();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar5 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  pcVar4 = local_50;
  if (pcVar5 == (cfstringStruct *)0x0) {
    pcVar4 = local_20;
    FUN_01564574(0);
    if ((((ulong)pcVar4 & 1) == 0) && (FUN_0156c6b8(), ((ulong)pcVar4 & 1) != 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      pcVar4 = local_20;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar4;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar4;
  }
  local_48.field2_0x10._4_4_ = 1;
  _objc_storeStrong(&local_50,0);
LAB_0156d07c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

