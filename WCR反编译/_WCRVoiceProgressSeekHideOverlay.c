// _WCRVoiceProgressSeekHideOverlay @ 015c300c

void _WCRVoiceProgressSeekHideOverlay(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    FUN_015c322c(local_18);
    _objc_setAssociatedObject(local_18,&DAT_028e3b28);
    _objc_setAssociatedObject(local_18,&DAT_028e3b29,0,1);
    FUN_015c32e8(local_18);
    lVar5 = local_18;
    FUN_015c33ec();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_28 = lVar5;
    if (lVar5 != 0) {
      local_50 = PTR___NSConcreteStackBlock_02578660;
      local_48 = 0xc2000000;
      local_44 = 0;
      local_40 = FUN_015c3814;
      local_38 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      lVar3 = local_28;
      local_80 = puVar1;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_015c3858;
      local_68 = &DAT_02583fe0;
      local_30 = lVar5;
      (*(code *)PTR__objc_retain_02578638)();
      lVar4 = local_18;
      local_60 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323d40,puVar2,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_50,
                 &local_80);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_30,0);
    }
    else {
      FUN_015c34d4(local_18);
    }
    local_1c = (uint)(lVar5 == 0);
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

