// hookSetTableHeaderViewOnClass: @ 00fd09dc

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeTableHeaderHost::hookSetTableHeaderViewOnClass_
               (ID param_1,SEL param_2,CLASS param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined **local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  if (param_3 != 0) {
    local_28 = (undefined *)param_3;
    local_20 = param_2;
    local_18 = param_1;
    _objc_getAssociatedObject(param_3,&DAT_028e3046);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_3);
    if ((uVar1 & 1) == 0) {
      local_30 = PTR_s_setTableHeaderView__0269ea10;
      puVar2 = local_28;
      _class_getInstanceMethod(local_28,PTR_s_setTableHeaderView__0269ea10);
      if (puVar2 != (undefined *)0x0) {
        puVar3 = local_28;
        local_38 = puVar2;
        _class_getInstanceMethod(local_28,local_30);
        puVar4 = local_28;
        local_40 = puVar3;
        _class_getSuperclass();
        _class_getInstanceMethod();
        puVar2 = local_28;
        puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        local_48 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        lVar7 = 0;
        if (((puVar2 != puVar3) && (lVar7 = 0, local_40 != (undefined *)0x0)) &&
           (lVar7 = 0, local_48 != (undefined *)0x0)) {
          puVar2 = local_40;
          _method_getImplementation();
          puVar3 = local_48;
          _method_getImplementation();
          lVar7 = (long)puVar2 - (long)puVar3;
          if (lVar7 == 0) {
            return;
          }
        }
        puVar2 = local_38;
        _method_getImplementation(lVar7);
        puVar3 = local_38;
        local_50 = puVar2;
        _method_getTypeEncoding();
        ppuVar5 = &local_90;
        local_90 = PTR___NSConcreteStackBlock_02578660;
        local_88 = 0xc0000000;
        local_84 = 0;
        local_80 = FUN_00fd0c34;
        local_78 = &DAT_02583df8;
        local_70 = local_50;
        local_68 = local_30;
        local_58 = puVar3;
        _objc_retainBlock();
        ppuVar6 = ppuVar5;
        _imp_implementationWithBlock();
        (*(code *)PTR__objc_release_02578630)(ppuVar5);
        local_60 = ppuVar6;
        _class_replaceMethod(local_28,local_30,ppuVar6,local_58);
        puVar2 = local_28;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(puVar2,&DAT_028e3046,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
  }
  return;
}

