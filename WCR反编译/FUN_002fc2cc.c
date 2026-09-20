// FUN_002fc2cc @ 002fc2cc

void FUN_002fc2cc(undefined8 param_1,byte param_2,byte param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  undefined4 local_20;
  byte local_1a;
  byte local_19;
  long local_18;
  
  plVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar2,param_1);
  local_1a = param_3;
  local_19 = param_2;
  if ((local_18 == 0) || (FUN_002f8b50(), ((ulong)plVar2 & 1) == 0)) {
    local_20 = 1;
  }
  else if ((local_1a & 1) == 0) {
    FUN_002fc504(local_18);
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_transitionCoordinator_026a1c10);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_18;
    local_28 = lVar3;
    if (((local_19 & 1) == 0) || (lVar3 == 0)) {
      _objc_initWeak(auStack_58,local_18);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_002fc9f4;
      local_68 = &DAT_0257be28;
      _objc_copyWeak(auStack_60,auStack_58);
      _dispatch_async(puVar4,&local_80);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      local_20 = 0;
    }
    else {
      local_50 = PTR___NSConcreteStackBlock_02578660;
      local_48 = 0xc2000000;
      local_44 = 0;
      local_40 = FUN_002fc95c;
      local_38 = &DAT_0257bdf8;
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar3,PTR_s_animateAlongsideTransition_compl_026a1c28,0,&local_50);
      local_20 = 1;
      _objc_storeStrong(&local_30,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  else {
    FUN_002fc504(local_18);
    local_20 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

