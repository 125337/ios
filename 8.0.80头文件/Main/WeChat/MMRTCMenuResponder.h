@interface MMRTCMenuResponder : NSObject
{
    BOOL _disableLongPress; // +0x8
    BOOL _disableSelectAll; // +0x9
    BOOL _disableForward; // +0xa
    BOOL _disableCopy; // +0xb
    BOOL _isEnablePartialRefer; // +0xc
    BOOL _useSystemMenu; // +0xd
    id <MMRTCMenuSelectDelegate> _selectDelegate; // +0x10
    id <MMRTCMenuResponderDelegate> _responderDelegate; // +0x18
    id <MMRTCMenuEventDelegate> _eventDelegate; // +0x20
    NSArray * _originMenuItems; // +0x28
    NSArray * _originExtraMenuItems; // +0x30
}
- (id)getMsgWrap;
- (void)onReferSelectedText;
- (void)onSelectTextForward:(id)arg1;
- (id)createForwardMsgWithContent:(id)arg1;
- (void)onSelectTextCopy:(id)arg1;
- (void)onAskXiaoWei;
- (void)onSelectAllText:(id)arg1;
- (BOOL)canRespondsToMenuAction:(SEL)arg1;
- (BOOL)canMatchMenuItemWithSelector:(SEL)arg1 Menus:(id)arg2;
- (id)getMenuActionResponder:(SEL)arg1;
- (id)getSelectMenuItem;
- (id)originMenuItems;
- (void)onMenuHidden;
- (void)onMenuItemShow;
- (void)reportAskXiaoWeiExposure;
- (id)selectDelegate;
- (void)setSelectDelegate:(id)arg1;
- (id)responderDelegate;
- (void)setResponderDelegate:(id)arg1;
- (id)eventDelegate;
- (void)setEventDelegate:(id)arg1;
- (BOOL)disableLongPress;
- (void)setDisableLongPress:(BOOL)arg1;
- (BOOL)disableSelectAll;
- (void)setDisableSelectAll:(BOOL)arg1;
- (BOOL)disableForward;
- (void)setDisableForward:(BOOL)arg1;
- (BOOL)disableCopy;
- (void)setDisableCopy:(BOOL)arg1;
- (BOOL)isEnablePartialRefer;
- (void)setIsEnablePartialRefer:(BOOL)arg1;
- (void)setOriginMenuItems:(id)arg1;
- (id)originExtraMenuItems;
- (void)setOriginExtraMenuItems:(id)arg1;
- (BOOL)useSystemMenu;
- (void)setUseSystemMenu:(BOOL)arg1;
- (void).cxx_destruct;
@end
