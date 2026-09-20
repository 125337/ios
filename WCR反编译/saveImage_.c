// saveImage: @ 00184438

/* Function Stack Size: 0x18 bytes */

void WCRefineContactsPackAvatarPickerCoordinator::saveImage_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_100;
  ID local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  ID local_60;
  ID local_58;
  undefined4 local_50;
  ID local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sectionKey_0269fb80);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_38 == 0) ||
     (IVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     IVar2 = local_40, IVar3 == 0)) {
    local_50 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dark_0269fb88);
    FUN_00184cb4(IVar2,IVar3 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar2;
    FUN_00184e18();
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    if (IVar2 == 0) {
      FUN_00184324(&cf_4YPOX_1Y_);
      local_50 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_createDirectoryAtPath_withInterm_0269e230,IVar2,1,0);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar5 = local_38;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_71 = 0;
      local_100 = uVar5;
      if (uVar5 == 0) {
        local_100 = local_38;
        _UIImageJPEGRepresentation(0x3fee666666666666);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_100;
      }
      local_71 = uVar5 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_100;
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_writeToFile_atomically__0269f928,local_60,1);
      if ((uVar5 & 1) == 0) {
        FUN_00184324(&cf_4YPOX_1Y_);
        local_50 = 1;
      }
      else {
        IVar2 = local_40;
        FUN_00185074();
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_40;
        local_80 = IVar2;
        FUN_00184cb4(local_40,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_setObject_forKeyedSubscript__0269d248,IVar3,&cf_avatarPath);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        FUN_00185270(local_40,local_80);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dark_0269fb88);
        pcVar1 = &cf_Y4YP_fe;
        if ((IVar2 & 1) == 0) {
          pcVar1 = &cf_e4YP_fe;
        }
        FUN_00184324(pcVar1);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_completion_0269fb98);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (IVar2 != 0) {
          IVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_completion_0269fb98);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(IVar2 + 0x10))();
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
        _objc_storeStrong(&local_80,0);
        local_50 = 0;
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

