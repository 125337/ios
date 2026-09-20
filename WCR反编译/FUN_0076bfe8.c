// FUN_0076bfe8 @ 0076bfe8

byte FUN_0076bfe8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  int local_48;
  undefined *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = local_38;
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_30)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_50 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar3;
      do {
        puVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        if (puVar1 == (undefined *)0x0) {
          iVar5 = 1;
          local_21 = 0;
          local_48 = 1;
          break;
        }
        puVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectAtIndex__0269d530,0);
        puVar1 = local_60;
        puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar1 & 1) == 0) {
          local_48 = 2;
        }
        else if (local_60 == local_38) {
          local_21 = 1;
          local_48 = 1;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithNonretainedObject__026a1fc0,
                     local_60);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_58;
          local_68 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsObject__0269cbb8,puVar1);
          if (((ulong)puVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addObject__0269d180,local_68);
            puVar1 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_parentViewController_0269e500);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_60;
            local_70 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_presentingViewController_026a0db0);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_60;
            local_78 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_70;
            puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
            local_80 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)puVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_70);
            }
            puVar1 = local_78;
            puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)puVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_78);
            }
            puVar1 = local_80;
            puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)puVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_80);
            }
            _objc_storeStrong(&local_80);
            _objc_storeStrong(&local_78,0);
            _objc_storeStrong(&local_70,0);
            local_48 = 0;
          }
          else {
            local_48 = 2;
          }
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60,0);
      } while ((local_48 == 0) || (iVar5 = local_48 + -2, iVar5 == 0));
      _objc_storeStrong(iVar5,&local_58);
      _objc_storeStrong(&local_50,0);
      goto LAB_0076c6b8;
    }
  }
  local_21 = 0;
  local_48 = 1;
LAB_0076c6b8:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

