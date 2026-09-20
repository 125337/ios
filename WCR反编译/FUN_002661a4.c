// FUN_002661a4 @ 002661a4

void FUN_002661a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  char *local_78;
  undefined *local_70 [2];
  char *local_60 [2];
  char *local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  char *local_28;
  
  local_28 = (char *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if ((local_28 != (char *)0x0) &&
     (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar3 = local_38, uVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      local_50 = (char *)0x0;
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_jsLogicImpl);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_50;
      local_50 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      local_60[0] = (char *)0x0;
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_valueForKey__0269d128,&cf_jsEventHandlerFacade);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_60[0];
      local_60[0] = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      if ((local_50 == (char *)0x0) || (local_60[0] == (char *)0x0)) {
        local_48 = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_wcr_oa___);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_s_jsEventWithFunction_params_callB_026a12f8;
        local_78 = (char *)0x0;
        pcVar6 = local_50;
        local_70[0] = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,
                   PTR_s_jsEventWithFunction_params_callB_026a12f8);
        if (((ulong)pcVar6 & 1) != 0) {
          pcVar4 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,puVar2,local_30,local_38,local_70[0],0,in_x6,in_x7,uVar3);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_78;
          local_78 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
        }
        if (local_78 == (char *)0x0) {
          pcVar6 = "JSEvent";
          _objc_getClass();
          if (pcVar6 != (char *)0x0) {
            _objc_alloc();
            pcVar7 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_initWithDelegate_parameters__026a1300,local_50,local_38);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_78;
            local_78 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            pcVar6 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setFuncName__026a1308);
            if (((ulong)pcVar6 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setFuncName__026a1308,local_30);
            }
            pcVar6 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setCallbackID__026a1310);
            if (((ulong)pcVar6 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_78,PTR_s_setCallbackID__026a1310,local_70[0]);
            }
          }
        }
        if ((local_78 == (char *)0x0) ||
           (pcVar6 = local_60[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_60[0],PTR_s_respondsToSelector__026ca818,PTR_s_handleJSEvent__026a1318),
           ((ulong)pcVar6 & 1) == 0)) {
          local_48 = 1;
        }
        else {
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_isEqualToString__0269ccc8,&cf_saveImage);
          if ((uVar3 & 1) != 0) {
            FUN_002644d4();
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_handleJSEvent__026a1318,local_78);
          local_48 = 0;
        }
        _objc_storeStrong(&local_78);
        _objc_storeStrong(local_70,0);
      }
      _objc_storeStrong(local_60);
      _objc_storeStrong(&local_50,0);
      goto LAB_002667b4;
    }
  }
  local_48 = 1;
LAB_002667b4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

