// defaultAvatarIconNameForScope:groupId: @ 01ad1564

/* Function Stack Size: 0x20 bytes */

ID WCRefineGroup::defaultAvatarIconNameForScope_groupId_
             (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong local_38;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  if (local_30 == 0x20) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_wcrefine_quick_pinned;
  }
  else if (local_30 == 0x40) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_wcrefine_quick_unread;
  }
  else if (local_30 == 0x80) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_wcrefine_quick_atme;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_sys_friend);
    if (((uVar1 & 1) == 0) && ((local_30 & 1) == 0)) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf_sys_chatroom);
      if (((uVar1 & 1) == 0) && (((uint)local_30 >> 1 & 1) == 0)) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_isEqualToString__0269ccc8,&cf_sys_public);
        if (((uVar1 & 1) == 0) && (uVar2 = (uint)local_30, (uVar2 >> 4 & 1) == 0)) {
          if (((uVar2 >> 3 & 1) == 0) || ((uVar2 >> 2 & 1) != 0)) {
            if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) != 0)) {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_icons_filled_chatbox;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_Contact_enterprise;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_photo_accounts_icon;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_icons_filled_chatbox;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_add_friend_icon_addgroup;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Contact_Chatonlyfriends;
    }
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

