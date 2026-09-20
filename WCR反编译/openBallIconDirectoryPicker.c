// openBallIconDirectoryPicker @ 01dff844

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatBallWarehouseViewController::openBallIconDirectoryPicker
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_70 [3];
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  IVar2 = local_18;
  puVar1 = PTR_WCRefineFileManagerViewController_026ceec8;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01dffa34;
  local_40 = &DAT_025887c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar2;
  _objc_copyWeak(auStack_30,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_beginPendingPickWithCompletion__026c5c28,&local_58);
  puVar1 = PTR_WCRefineFileManagerViewController_026ceec8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_initWithDirectory_title__026b2df8,0,&cf_b_nmtvU_);
  IVar2 = local_18;
  local_70[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(local_70);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_38,0);
  _objc_destroyWeak(auStack_28);
  return;
}

