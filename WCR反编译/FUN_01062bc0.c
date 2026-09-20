// FUN_01062bc0 @ 01062bc0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01062bc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_160;
  undefined *local_128;
  undefined *local_118;
  undefined *local_100;
  undefined *local_f0;
  undefined *local_c0;
  undefined *local_b0;
  undefined *local_a0;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  bool local_71;
  undefined *local_70;
  undefined *local_68;
  bool local_59;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar6 = local_30;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_59 = false;
  if (lVar6 == 0) {
    local_f0 = (undefined *)0x0;
  }
  else {
    local_f0 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = local_f0;
  }
  local_59 = lVar6 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_f0;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  local_71 = false;
  if (puVar3 == (undefined *)0x0) {
    local_100 = (undefined *)0x0;
  }
  else {
    local_100 = *(undefined **)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_JSONObjectFromString__026adcc0,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_100;
  }
  local_71 = puVar3 != (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_100;
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  puVar3 = local_68;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    local_118 = (undefined *)0x0;
  }
  else {
    local_118 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_118;
  bVar1 = local_118 == (undefined *)0x0;
  if (bVar1) {
    local_128 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_128;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_mutableCopy_0269d8a0);
    local_128 = local_118;
    local_90 = local_118;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_128;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInteger__0269e080,uVar5);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf__httpStatus);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (puVar3 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf__rawBody);
  }
  puVar3 = local_88;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0106318c;
  lVar6 = *(long *)(param_1 + 0x20);
  puVar4 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_thumbnail_url);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  bVar1 = false;
  if (puVar4 == (undefined *)0x0) {
    local_b0 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_media_id);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    if (local_b0 != (undefined *)0x0) goto LAB_01063108;
    local_c0 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    if (local_c0 != (undefined *)0x0) goto LAB_01063108;
    local_160 = local_40;
  }
  else {
LAB_01063108:
    local_160 = 0;
  }
  (**(code **)(lVar6 + 0x10))(lVar6,puVar3,local_160);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
LAB_0106318c:
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

