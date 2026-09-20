// _WCRefineSetClownImageOverride @ 00f1a63c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void _WCRefineSetClownImageOverride(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_b0;
  double local_a8;
  undefined *local_58;
  undefined *local_50;
  ulong local_48;
  undefined1 local_3d;
  uint local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar3 = local_18;
  _WCRefineClownMessageKey();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if ((uVar3 == 0) || (uVar3 = local_18, _WCRefineClownMessageCanReplaceImage(), (uVar3 & 1) == 0))
  {
    local_2c = 1;
  }
  else {
    FUN_00f16cb4();
    uVar3 = local_20;
    puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    lVar2 = DAT_028e2b58;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(lVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b58,PTR_s_removeObjectForKey__0269d700,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2b60,PTR_s_removeObjectForKey__0269d700,local_28);
      lVar5 = DAT_028e2b58;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2b58,PTR_s_count_0269cfe0);
      local_3d = lVar5 != 0;
      _DAT_028e2bb4 = (uint)(byte)local_3d;
      _objc_sync_exit(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      local_2c = 1;
    }
    else {
      local_a8 = 0.95;
      uVar3 = local_20;
      _UIImageJPEGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        uVar6 = local_20;
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_48;
        local_48 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      uVar3 = local_48;
      local_b0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      bVar1 = false;
      if (uVar6 == 0) {
        local_b0 = (undefined *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scale_026ca830);
        if (local_a8 <= 0.0) {
          local_a8 = 1.0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scale_026ca830);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,local_b0,PTR_s_imageWithData_scale__026a8c78,uVar3);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        local_58 = local_b0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = local_b0;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      lVar2 = DAT_028e2b58;
      bVar1 = local_50 != (undefined *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(lVar2);
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e2b60,PTR_s_setObject_forKeyedSubscript__0269d248,uVar3,local_28);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e2b58,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,local_28);
        _DAT_028e2bb4 = 1;
        _objc_sync_exit(lVar2);
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      local_2c = (uint)!bVar1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

