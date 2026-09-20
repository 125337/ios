// FUN_01fcc4ac @ 01fcc4ac

void FUN_01fcc4ac(void)

{
  undefined *puVar1;
  undefined8 local_28;
  
  puVar1 = PTR_WCRConfigMutableSnapshot_026cf810;
  _objc_alloc();
  if (DAT_028e4908 == 0) {
    local_28 = *(long *)PTR____NSDictionary0___02578288;
  }
  else {
    local_28 = DAT_028e4908;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithSnapshot__026ca2b8,local_28);
  _objc_autoreleaseReturnValue();
  return;
}

