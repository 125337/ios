// WCRefineToDo_markHeaderReadyAndSchedule: @ 007fe5d4

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHook::WCRefineToDo_markHeaderReadyAndSchedule_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_68;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_18;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar1,&DAT_028ccee3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_setAssociatedObject(local_18,&DAT_028ccee5,0,1);
    if (local_28 == (cfstringStruct *)0x0) {
      local_68 = &cf_headerReady;
    }
    else {
      local_68 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_WCRefineToDo_scheduleHeaderLayou_026a87f8,local_68);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

