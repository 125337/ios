// FUN_01599384 @ 01599384

void FUN_01599384(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_88;
  long local_70;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
      if (lVar2 == 0) {
        lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
        if (lVar2 == 0) {
          local_50 = &cf_Q__;
        }
        else {
          local_50 = *(cfstringStruct **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
        }
        local_48 = local_50;
      }
      else {
        local_48 = *(cfstringStruct **)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      }
      (**(code **)(lVar4 + 0x10))(lVar4,0,local_48);
      return;
    }
  }
  lVar2 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  local_70 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  if (local_70 == 0) {
    local_70 = *(long *)PTR____NSArray0___02578280;
  }
  local_88 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  if (local_88 == 0) {
    local_88 = *(long *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_wcr_mergeCloudCatalogGitHub_serv_026b0ab0,local_70,local_88);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5,0);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  return;
}

