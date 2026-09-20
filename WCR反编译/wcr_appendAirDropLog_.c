// wcr_appendAirDropLog: @ 0172d660

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_appendAirDropLog_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *local_90;
  undefined1 *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  ulong local_48;
  SEL local_40;
  ID local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 *local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  uVar2 = local_48;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_4c = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_themeBoxAirDropLogs_026b3aa0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_90 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_90;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,local_60);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_insertObject_atIndex__0269eac0,local_48,0);
    puVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
    puVar4 = local_68;
    if (&section_00000158.reloff < puVar3) {
      puVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
      local_30 = puVar3 + -400;
      local_28 = 400;
      local_20 = 400;
      local_18 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_removeObjectsInRange__0269dad0,400,local_30);
    }
    puVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setThemeBoxAirDropLogs__026b3b78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_saveConfig_0269e5d0);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48,0);
  return;
}

