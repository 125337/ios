// homeSessionCountForScope: @ 01ab7484

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRGroupListViewController::homeSessionCountForScope_
          (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  undefined8 local_48;
  
  puVar1 = PTR_WCRefineGroupDataProvider_026ce540;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_48 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_memberCountForScope__026bde60,param_3);
    local_48 = (undefined *)param_1;
  }
  return (unsigned_long_long)local_48;
}

