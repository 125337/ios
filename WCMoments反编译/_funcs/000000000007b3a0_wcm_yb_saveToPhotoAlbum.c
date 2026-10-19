// wcm_yb_saveToPhotoAlbum @0x7b3a0

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::wcm_yb_saveToPhotoAlbum(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 local_1a8;
  undefined8 local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR___NSConcreteStackBlock_001104f0;
  local_60 = PTR___NSConcreteStackBlock_001104f0;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke;
  local_48 = &___block_descriptor_40_e8_32s_e16_v16__0__NSData_8l;
  local_30 = param_2;
  local_28 = param_1;
  local_40 = (*(code *)PTR__objc_retain_00110460)(param_1);
  local_38 = _objc_retainBlock();
  local_90 = puVar1;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_106;
  local_78 = &___block_descriptor_40_e8_32s_e17_v16__0__UIImage_8l;
  local_70 = (*(code *)PTR__objc_retain_00110460)(local_28);
  local_68 = _objc_retainBlock();
  local_c0 = puVar1;
  local_b8 = 0xc2000000;
  local_b4 = 0;
  local_b0 = ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_109;
  local_a8 = &___block_descriptor_40_e8_32s_e5_v8__0l;
  local_a0 = (*(code *)PTR__objc_retain_00110460)(local_28);
  local_98 = _objc_retainBlock();
  local_100 = puVar1;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = ___43__WCMYBIBImageData_wcm_yb_saveToPhotoAlbum__block_invoke_2_110;
  local_e8 = &___block_descriptor_64_e8_32s40bs48bs56bs_e5_v8__0l;
  local_e0 = (*(code *)PTR__objc_retain_00110460)(local_28);
  local_d8 = (*(code *)PTR__objc_retain_00110460)(local_38);
  local_d0 = (*(code *)PTR__objc_retain_00110460)(local_98);
  local_c8 = (*(code *)PTR__objc_retain_00110460)(local_68);
  local_108 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_msgSend_getPhotoAlbumAuthorizationSuccess_failed_
            (&objc::class_t::WCMYBIBPhotoAlbumManager,local_1a8,&local_100);
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_40,0);
  return;
}

