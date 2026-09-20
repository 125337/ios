// pickContactsForRow: @ 01ae8a18

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeAvatarStripSettingsViewController::pickContactsForRow_
               (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  undefined *local_c0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  long_long local_68;
  undefined *local_60 [3];
  undefined *local_48;
  undefined1 auStack_40 [8];
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHaptic_026bab98);
  _objc_initWeak(auStack_40,local_28);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_c0 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_c0;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar5 = local_38 + 1;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf___);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  puVar3 = local_48;
  puVar2 = PTR_WCRefineGroupManagementViewController_026ce580;
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_01ae8cbc;
  local_80 = &DAT_0258b1a8;
  local_60[0] = puVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = puVar3;
  local_68 = local_38;
  _objc_copyWeak(auStack_70,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_presentSessionSelectPickerFromVi_026a24d0,IVar1,puVar4,puVar3,&local_98,
             in_x6,in_x7,lVar5);
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_40);
  return;
}

