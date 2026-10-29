@interface AppWxGameCardMessageViewModel : BaseMessageViewModel <_TtP6WeChat32AppWxGameCardMessageViewDelegate_>
{
    BOOL _isShouldLayout; // +0x5a
    double _dynamicCardHeight; // +0x60
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowHeadImage;
- (BOOL)isShowChatRoomDisplayName;
- (BOOL)isShowSourceView;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (double)messageViewWidth;
- (double)messageViewHeight;
- (void)notifySizeChange:(long long)arg1;
- (void)notifyViewRemove;
- (BOOL)shouldLayoutIfNeeded;
- (void)showMsgPopupMenu;
- (double)getMsgViewInfo;
- (double)dynamicCardHeight;
- (void)setDynamicCardHeight:(double)arg1;
- (BOOL)isShouldLayout;
- (void)setIsShouldLayout:(BOOL)arg1;
@end

