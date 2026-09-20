// sizeForPath:token:completion: @ 0197b9c8

/* Function Stack Size: 0x28 bytes */

void WCRFileDirSizeManager::sizeForPath_token_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *local_108;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  long local_98;
  undefined *local_90;
  long local_88;
  byte local_79;
  undefined *local_78;
  ulong local_60;
  long local_58;
  int local_4c;
  long local_48;
  undefined *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    if (local_48 != 0) {
      (**(code **)(local_48 + 0x10))(local_48,0,0);
    }
    local_4c = 1;
    goto LAB_0197be60;
  }
  puVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isCancelled_026a1c20);
  if (((ulong)puVar4 & 1) != 0) {
    if (local_48 != 0) {
      (**(code **)(local_48 + 0x10))(local_48,0,1);
    }
    local_4c = 1;
    goto LAB_0197be60;
  }
  lVar5 = *(long *)(local_28 + 8);
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_objectForKey__0269e048,local_38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_48;
  local_58 = lVar5;
  if (lVar5 == 0) {
    uVar6 = *(undefined8 *)(local_28 + 0x18);
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar6);
    uVar7 = *(ulong *)(local_28 + 0x18);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_objectForKeyedSubscript__0269d098,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar7;
    if (uVar7 == 0) {
LAB_0197bc20:
      local_79 = 0;
      bVar1 = local_40 == (undefined *)0x0;
      if (bVar1) {
        local_108 = PTR_WCRFileDirSizeCancelToken_026cf1e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRFileDirSizeCancelToken_026cf1e0,PTR_s_new_0269d288);
        local_78 = local_108;
      }
      else {
        local_108 = local_40;
      }
      local_79 = bVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_28 + 0x18),PTR_s_setObject_forKeyedSubscript__0269d248,
                 local_108,local_38);
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      local_4c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isCancelled_026a1c20);
      if ((uVar7 & 1) != 0) goto LAB_0197bc20;
      local_4c = 1;
    }
    _objc_storeStrong(&local_60,0);
    if (local_4c == 0) {
      local_4c = 0;
    }
    _objc_sync_exit(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    IVar2 = local_28;
    if (local_4c == 0) {
      uVar6 = *(undefined8 *)(local_28 + 0x10);
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_0197bea0;
      local_a8 = &DAT_0257cba8;
      (*(code *)PTR__objc_retain_02578638)();
      lVar3 = local_38;
      local_a0 = IVar2;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_40;
      local_98 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      lVar3 = local_48;
      local_90 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = lVar3;
      _dispatch_async(uVar6,&local_c0);
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_a0,0);
      local_4c = 0;
    }
  }
  else {
    if (local_48 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_unsignedLongLongValue_0269d6b8);
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isCancelled_026a1c20);
      (**(code **)(lVar3 + 0x10))(lVar3,lVar5,puVar4);
    }
    local_4c = 1;
  }
  _objc_storeStrong(&local_58,0);
LAB_0197be60:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

