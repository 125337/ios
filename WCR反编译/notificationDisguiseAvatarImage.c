// notificationDisguiseAvatarImage @ 01118cb4

/* Function Stack Size: 0x10 bytes */

ID WCRefinePrivateFriendManager::notificationDisguiseAvatarImage(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_128;
  undefined *local_110;
  bool local_a9;
  undefined *local_a8;
  undefined *local_98;
  undefined *local_88;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  ID local_40;
  SEL local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_38 = param_2;
  local_30 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar4;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_custom);
  local_28 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  if ((IVar3 & 1) == 0) {
    puVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_notificationDisguiseIdentityUser_026a6818);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar5;
    FUN_011194d8();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    local_58 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    puVar6 = local_58;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_store_026aeee0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      FUN_0110d24c();
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)();
      FUN_01119e60();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      bVar1 = false;
      local_68 = puVar6;
      if ((puVar6 == (undefined *)0x0) ||
         (puVar6 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
         puVar6 == (undefined *)0x0)) {
        local_110 = (undefined *)0x0;
      }
      else {
        local_78 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_URLByDeletingLastPathComponent_026af050);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_110 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        local_88 = local_110;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_110;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      local_128 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      local_a9 = local_70 == (undefined *)0x0;
      if (local_a9) {
        local_128 = (undefined *)0x0;
      }
      else {
        local_98 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_path_0269d4d8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_imageWithContentsOfFile__0269e0e0);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = local_128;
      }
      local_a9 = !local_a9;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_128;
      if (local_a9) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      local_44 = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar6;
      local_44 = 1;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  else {
    puVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_ownerWxid_026aef20);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    FUN_01119250();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageWithContentsOfFile__0269e0e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    local_44 = 1;
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

