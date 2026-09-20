// selectorForToken: @ 0184c7e4

/* Function Stack Size: 0x18 bytes */

SEL WCRefineAvatarScaleSceneFilterViewController::selectorForToken_
              (ID param_1,SEL param_2,long_long param_3)

{
  undefined8 local_8;
  
  if (param_3 == 1) {
    local_8 = PTR_s_toggleWechat__026b6880;
  }
  else if (param_3 == 2) {
    local_8 = PTR_s_toggleContacts__026b6888;
  }
  else if (param_3 == 3) {
    local_8 = PTR_s_toggleChat__026b6890;
  }
  else if (param_3 == 4) {
    local_8 = PTR_s_toggleProfile__026b6898;
  }
  else if (param_3 == 5) {
    local_8 = PTR_s_toggleMoments__026b68a0;
  }
  else {
    local_8 = PTR_s_toggleOther__026b68a8;
  }
  return (SEL)local_8;
}

