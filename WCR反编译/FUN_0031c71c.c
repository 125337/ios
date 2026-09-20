// FUN_0031c71c @ 0031c71c

byte FUN_0031c71c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined *local_48 [3];
  cfstringStruct *local_30;
  int local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = &cf_NewChatRoomMemberContainView;
    _NSClassFromString();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = puVar2;
    do {
      puVar2 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        local_11 = 0;
        local_24 = 1;
        break;
      }
      puVar2 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_removeObjectAtIndex__0269d530,0);
      if ((local_30 == (cfstringStruct *)0x0) ||
         (puVar2 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_30),
         ((ulong)puVar2 & 1) == 0)) {
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_48[0];
        if (puVar3 != (undefined *)0x0) {
          puVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        local_24 = 0;
      }
      else {
        local_11 = 1;
        local_24 = 1;
      }
      _objc_storeStrong(&local_50,0);
    } while (local_24 == 0);
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

