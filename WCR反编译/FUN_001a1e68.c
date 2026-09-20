// FUN_001a1e68 @ 001a1e68

byte FUN_001a1e68(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  long local_68;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = param_3;
  local_38 = param_2;
  if (((local_30 == 0) || (param_2 < 0)) || (param_3 < 1)) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    for (local_68 = 1; lVar2 = local_30, puVar1 = local_50,
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8, local_68 < local_40; local_68 = local_68 + 1) {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_indexPathForRow_inSection__0269e9a0,
                 local_68,local_38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_98 = PTR___NSConcreteGlobalBlock_02578658;
    local_90 = 0xd0800000;
    local_8c = 0;
    local_88 = FUN_001a22a0;
    local_80 = &DAT_0257ab20;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_50;
    local_78 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_98);
    local_21 = 1;
    local_44 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

