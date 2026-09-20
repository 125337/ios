// FUN_001050f4 @ 001050f4

void FUN_001050f4(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_38;
  long local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &cf___;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_nsContent);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_00106b4c();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_38;
  local_38 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  FUN_00104d18();
  puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_senderIDFromWrap_roomId__0269ec78,
             local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hash_0269ec90);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_____u_____lu);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar5);
  return;
}

