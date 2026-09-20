// wcRefineForceExpandCollapsibleSectionsForViewController:className: @ 014c9410

/* Function Stack Size: 0x20 bytes */

void WCRefineSearchManager::wcRefineForceExpandCollapsibleSectionsForViewController_className_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_a0;
  char *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  long local_78;
  uint local_6c;
  undefined *local_68;
  uint local_60 [4];
  undefined *local_50;
  undefined4 local_44;
  ulong local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if ((local_38 == (undefined *)0x0) ||
     (uVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_WCRefine),
     (uVar2 & 1) == 0)) {
    local_44 = 1;
  }
  else {
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
    local_50 = puVar3;
    while( true ) {
      puVar3 = local_50;
      bVar1 = false;
      if (local_50 != (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        bVar1 = puVar3 != puVar4;
      }
      if (!bVar1) break;
      local_60[0] = 0;
      puVar3 = local_50;
      _class_copyPropertyList(local_50,local_60);
      local_68 = puVar3;
      for (local_6c = 0; local_6c < local_60[0]; local_6c = local_6c + 1) {
        lVar5 = *(long *)(local_68 + (ulong)local_6c * 8);
        _property_getName();
        local_78 = lVar5;
        if (lVar5 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,lVar5)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_s_rangeOfString_options__0269d118;
          local_80 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_rangeOfString_options__0269d118,&cf_Expand,1);
          local_90 = puVar3;
          local_88 = puVar4;
          if (puVar3 == (undefined *)0x7fffffffffffffff) {
            local_44 = 7;
          }
          else {
            pcVar6 = *(char **)(local_68 + (ulong)local_6c * 8);
            _property_getAttributes();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_98 = pcVar6;
            if (((pcVar6 == (char *)0x0) || (*pcVar6 != 'T')) ||
               ((pcVar6[1] != 'B' && (pcVar6[1] != 'c')))) {
              local_44 = 7;
            }
            else {
              puVar4 = local_80;
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_substringToIndex__0269d6c0,1);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = local_80;
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_substringFromIndex__0269d120,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_set_____);
              _objc_retainAutoreleasedReturnValue();
              local_a0 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar8);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              puVar3 = local_38;
              puVar4 = local_a0;
              _NSSelectorFromString();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_respondsToSelector__026ca818,puVar4);
              puVar4 = local_38;
              if (((ulong)puVar3 & 1) == 0) {
                local_44 = 7;
              }
              else {
                puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_setValue_forKey__0269d300,puVar3,local_80);
                (*(code *)PTR__objc_release_02578630)(puVar3);
                local_44 = 0;
              }
              _objc_storeStrong(&local_a0,0);
            }
          }
          _objc_storeStrong(&local_80,0);
        }
      }
      if (local_68 != (undefined *)0x0) {
        _free(local_68);
      }
      _class_getSuperclass();
    }
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

