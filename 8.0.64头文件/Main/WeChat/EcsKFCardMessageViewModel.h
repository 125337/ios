@interface EcsKFCardMessageViewModel : CommonMessageViewModel <_TtP6WeChat28EcsKFCardMessageViewDelegate_>
{
    BOOL _isShouldLayout; // +0x70
    double _dynamicCardHeight; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowHeadImage;
- (BOOL)isShowChatRoomDisplayName;
- (BOOL)isShowSourceView;
- (BOOL)isDisableEditMode;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (double)messageViewWidth;
- (double)messageViewHeight;
- (void)notifySizeChange:(long long)arg1;
- (void)notifyViewRemove;
- (BOOL)shouldLayoutIfNeeded;
- (double)getMsgViewInfo;
- (BOOL)canShowMsgReplyMenuItem;
- (void)adjustTableOffset;
- (double)dynamicCardHeight;
- (void)setDynamicCardHeight:(double)arg1;
- (BOOL)isShouldLayout;
- (void)setIsShouldLayout:(BOOL)arg1;
@end
