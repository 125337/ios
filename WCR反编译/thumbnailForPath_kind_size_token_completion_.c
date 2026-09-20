// thumbnailForPath:kind:size:token:completion: @ 0197a4c4

/* Function Stack Size: 0x40 bytes */

void WCRFileThumbnailManager::thumbnailForPath_kind_size_token_completion_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,CGSize param_5,ID param_6,
               ID param_7,undefined4 param_8)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  ID local_c8;
  undefined8 local_c0;
  ID local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  long_long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  long local_70;
  ID local_68;
  long local_60;
  undefined8 local_58;
  long_long local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  uStack_28 = in_d1;
  _objc_storeStrong(&local_48,param_3);
  local_58 = 0;
  local_50 = param_4;
  _objc_storeStrong(&local_58,param_5.field0_0x0);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_5.field1_0x8);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_cacheKeyForPath__026ba238,local_48);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(local_38 + 8);
  local_68 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_objectForKey__0269e048,IVar2);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_38;
  local_70 = lVar3;
  if (lVar3 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar2);
    local_80 = *(undefined8 *)(local_38 + 0x18);
    _objc_sync_exit(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_38;
    uVar4 = *(undefined8 *)(local_38 + 0x10);
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_0197a7c0;
    local_d0 = &DAT_0258a508;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_48;
    local_c8 = IVar2;
    local_a0 = local_80;
    local_98 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_68;
    local_c0 = uVar1;
    uStack_88 = uStack_28;
    local_90 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_60;
    local_b8 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_58;
    local_a8 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar1;
    _dispatch_async(uVar4,&local_e8);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_c8,0);
    local_74 = 0;
  }
  else {
    if (local_60 != 0) {
      (**(code **)(local_60 + 0x10))(local_60,lVar3,local_58);
    }
    local_74 = 1;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  return;
}

