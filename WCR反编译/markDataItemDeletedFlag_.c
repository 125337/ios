// markDataItemDeletedFlag: @ 010c7aac

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsMonitor::markDataItemDeletedFlag_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  uVar1 = DAT_0280e1a8;
  if (local_28 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

