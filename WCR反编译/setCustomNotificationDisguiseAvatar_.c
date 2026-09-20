// setCustomNotificationDisguiseAvatar: @ 0111c75c

/* Function Stack Size: 0x18 bytes */

bool WCRefinePrivateFriendManager::setCustomNotificationDisguiseAvatar_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  double in_d0;
  double dVar6;
  long lVar7;
  long lVar8;
  double in_d1;
  double dVar9;
  double dVar10;
  long lVar11;
  double local_138;
  ID local_120;
  ulong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  long lStack_f8;
  long local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  long local_c8;
  long lStack_c0;
  double local_b8;
  ulong local_b0;
  double local_a8;
  double local_78;
  double local_70;
  undefined4 local_64;
  ulong local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((uVar2 & 1) == 0) ||
      ((*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00), in_d0 <= 0.0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00), in_d1 <= 0.0)) {
    local_21 = 0;
    local_64 = 1;
  }
  else {
    local_138 = in_d1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    local_78 = in_d1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    local_b0 = local_40;
    if (local_138 <= local_78) {
      local_138 = local_78;
    }
    local_a8 = local_138;
    local_70 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    if (512.0 < local_70) {
      dVar6 = 512.0 / local_70;
      dVar9 = local_70;
      local_b8 = dVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
      lVar7 = (long)(dVar6 * local_b8);
      lVar8 = lVar7;
      dVar10 = local_b8;
      local_d8 = dVar6;
      local_d0 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
      lVar11 = (long)(dVar10 * local_b8);
      local_e8 = lVar8;
      local_e0 = dVar10;
      FUN_0111cd3c();
      local_c8 = lVar7;
      lStack_c0 = lVar11;
      _UIGraphicsBeginImageContextWithOptions(lVar7,lVar11,0x3ff0000000000000,0);
      uStack_108 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
      local_110 = *(undefined8 *)PTR__CGPointZero_025782e0;
      lStack_f8 = lStack_c0;
      local_100 = local_c8;
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,uStack_108,local_c8,lStack_c0,local_40,PTR_s_drawInRect__026ca610);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_b0;
      local_b0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _UIGraphicsEndImageContext();
    }
    uVar2 = local_b0;
    _UIImageJPEGRepresentation(DAT_02323ee8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_30;
    local_118 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_ownerWxid_026aef20);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    FUN_01119250();
    _objc_retainAutoreleasedReturnValue();
    local_120 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    uVar2 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
    if ((uVar2 == 0) || (local_120 == 0)) {
      local_21 = 0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_URLByDeletingLastPathComponent_026af050)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_createDirectoryAtURL_withInterme_026aafa0,IVar4,1,0);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar2 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_writeToURL_options_error__026af080,local_120,1,0);
      if ((uVar2 & 1) == 0) {
        local_21 = 0;
      }
      else {
        IVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_store_026aeee0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        IVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_store_026aeee0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        IVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_store_026aeee0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_persistAndPublish_026aef58);
        local_21 = 1;
      }
    }
    local_64 = 1;
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_b0,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

