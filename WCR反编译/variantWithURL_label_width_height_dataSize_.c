// variantWithURL:label:width:height:dataSize: @ 01024310

/* Function Stack Size: 0x38 bytes */

ID WCRefineLinkParser::variantWithURL_label_width_height_dataSize_
             (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,long_long param_6,
             long_long param_7)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *local_98;
  undefined *local_60;
  undefined4 local_54;
  long_long local_50;
  long_long local_48;
  long_long local_40;
  cfstringStruct *local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_30;
  local_50 = param_7;
  local_48 = param_6;
  local_40 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (IVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_URLLooksLikeAudioMediaURL__026add00,local_30), (IVar2 & 1) != 0)) {
    local_18 = (undefined *)0x0;
    local_54 = 1;
  }
  else {
    puVar3 = PTR_WCRefineLinkVideoVariant_026ceca8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkVideoVariant_026ceca8,PTR_s_new_0269d288);
    IVar2 = local_20;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_normalizeDouyinPlayURL__026adcf8,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setUrl__0269f250);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_38 == (cfstringStruct *)0x0) {
      local_98 = &::cf___;
    }
    else {
      local_98 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setLabel__026add78,local_98);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setWidth__0269feb0,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setHeight__026add80,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setDataSize__026add88,local_50);
    puVar3 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
    local_54 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

