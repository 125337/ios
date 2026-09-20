// rowActionWithTitle:color:handler: @ 01cc8f9c

/* Function Stack Size: 0x28 bytes */

ID WCRefineProfileCardActionConfigViewController::rowActionWithTitle_color_handler_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_108;
  undefined *local_a0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [8];
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
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
  _objc_initWeak(auStack_50,local_28);
  uVar3 = local_38;
  puVar4 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_01cc9290;
  local_70 = &DAT_0258bd98;
  _objc_copyWeak(auStack_60,auStack_50);
  uVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,uVar3,&local_88);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_40;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_58 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  bVar1 = ((ulong)puVar6 & 1) == 0;
  if (bVar1) {
    local_108 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_grayColor_026a9f68);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_108;
  }
  else {
    local_108 = local_40;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBackgroundColor__026ca888,local_108);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  puVar4 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_68,0);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar4;
}

