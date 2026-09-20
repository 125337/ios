// FUN_0152686c @ 0152686c

void FUN_0152686c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long local_40;
  long local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  if (local_20 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,local_20);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_20);
      lVar3 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_usernameForNativeObject__026a2c08,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_38 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
      if (lVar3 == 0) {
LAB_01526a7c:
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x38),PTR_s_addObject__0269d180,local_20);
        local_2c = 0;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x30);
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar4,PTR_s_objectForKeyedSubscript__0269d098,local_38);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_20;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        bVar1 = lVar4 == 0;
        local_40 = lVar4;
        if (bVar1) {
          uVar6 = *(undefined8 *)(param_1 + 0x38);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,uVar6);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x30),PTR_s_setObject_forKeyedSubscript__0269d248,
                     puVar5,local_38);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x38);
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_unsignedIntegerValue_026cabb8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_setObject_atIndexedSubscript__0269e970,lVar3,lVar4);
        }
        local_2c = (uint)!bVar1;
        _objc_storeStrong(&local_40,0);
        if (local_2c == 0) goto LAB_01526a7c;
      }
      _objc_storeStrong(&local_38,0);
      if (local_2c == 0) {
        local_2c = 0;
      }
      goto LAB_01526ac4;
    }
  }
  local_2c = 1;
LAB_01526ac4:
  _objc_storeStrong(&local_20,0);
  return;
}

