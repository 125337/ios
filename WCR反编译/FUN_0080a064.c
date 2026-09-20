// FUN_0080a064 @ 0080a064

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0080a064(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  double local_50;
  undefined *local_48 [3];
  long local_30;
  undefined *local_28;
  
  FUN_0080aa58();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_length_0269cca0);
  if (param_2 == 0) {
    local_28 = (undefined *)0x0;
    local_54 = 1;
  }
  else {
    if (DAT_028ccf30 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSCache_026ce1d8;
      _objc_alloc_init();
      puVar2 = DAT_028ccf30;
      DAT_028ccf30 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf30,PTR_s_setCountLimit__0269e0d0,4);
    }
    puVar2 = DAT_028ccf30;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf30,PTR_s_objectForKey__0269e048,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = puVar2;
    _CACurrentMediaTime();
    local_50 = param_1;
    if (((local_48[0] == (undefined *)0x0) ||
        (uVar3 = DAT_028ccf38,
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf38,PTR_s_isEqualToString__0269ccc8,local_30)
        , puVar2 = local_48[0], (uVar3 & 1) == 0)) || (0.75 <= local_50 - DAT_028ccfa8)) {
      DAT_028ccfa8 = local_50;
      local_60 = (undefined *)0x0;
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_68;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)puVar2 & 1) != 0) {
        puVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,
                   *(undefined8 *)PTR__NSFileModificationDate_02578020);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_60;
        local_60 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      if (((local_48[0] == (undefined *)0x0) ||
          (uVar3 = DAT_028ccf38,
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028ccf38,PTR_s_isEqualToString__0269ccc8,local_30), (uVar3 & 1) == 0)) ||
         (((local_60 != (undefined *)0x0 || (DAT_028ccf40 != 0)) &&
          (uVar3 = DAT_028ccf40,
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf40,PTR_s_isEqualToDate__026a8b48,local_60)
          , (uVar3 & 1) == 0)))) {
        puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   local_30);
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028ccf30,PTR_s_removeObjectForKey__0269d700,local_30);
          _objc_storeStrong(&DAT_028ccf38);
          _objc_storeStrong(&DAT_028ccf40,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028ccf30,PTR_s_setObject_forKey__026ca9e8,puVar2,local_30);
          _objc_storeStrong(&DAT_028ccf38,local_30);
          _objc_storeStrong(&DAT_028ccf40,local_60);
        }
        puVar2 = local_70;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar2;
        local_54 = 1;
        _objc_storeStrong(&local_70,0);
      }
      else {
        puVar2 = local_48[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar2;
        local_54 = 1;
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_54 = 1;
    }
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

