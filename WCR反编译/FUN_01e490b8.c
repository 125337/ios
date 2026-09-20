// FUN_01e490b8 @ 01e490b8

void FUN_01e490b8(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_d0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  undefined1 auStack_60 [8];
  byte local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  long local_40;
  byte local_31;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  lVar1 = local_30;
  local_40 = param_1;
  local_31 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    local_44 = 1;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_groupForId__026a27e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_d0 = &cf_TRR_;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_d0;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    lVar1 = local_30;
    pcVar2 = local_50;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01e49348;
    local_70 = &DAT_0258c810;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar1;
    local_58 = local_31 & 1;
    _objc_copyWeak(auStack_60,param_1 + 0x20);
    FUN_01e40be4(&cf_T,&cf_R_Ty,pcVar2,0x10,&local_88);
    _objc_destroyWeak(auStack_60);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

