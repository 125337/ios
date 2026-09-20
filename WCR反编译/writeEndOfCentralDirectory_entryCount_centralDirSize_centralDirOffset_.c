// writeEndOfCentralDirectory:entryCount:centralDirSize:centralDirOffset: @ 01d5fb08

/* Function Stack Size: 0x24 bytes */

void WCRefineFrameZipCreator::writeEndOfCentralDirectory_entryCount_centralDirSize_centralDirOffset_
               (ID param_1,SEL param_2,ID param_3,unsigned_short param_4,unsigned_int param_5,
               unsigned_int param_6)

{
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  unsigned_int local_34;
  unsigned_int local_30;
  unsigned_short local_2a;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0x6054b50;
  local_34 = param_6;
  local_30 = param_5;
  local_2a = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_38);
  local_3a = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_3a);
  local_3c = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_3c,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_2a,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_2a,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_30,4);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_34,4);
  local_3e = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appendBytes_length__026a9628,&local_3e,2);
  _objc_storeStrong(&local_28,0);
  return;
}

