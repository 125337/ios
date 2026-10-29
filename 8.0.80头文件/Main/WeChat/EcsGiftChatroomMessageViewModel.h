@interface EcsGiftChatroomMessageViewModel : CommonMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)shouldHideBubbleDescLabel;
- (id)iconName;
- (id)sourceCoverUrl;
- (id)wishText;
- (id)titleText;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceTag;
- (id)descText;
- (id)descTextColor;
- (id)giftStatusWording;
- (long long)giftStatus;
- (unsigned long long)bubbleType;
- (void)updateBgBubbleType:(unsigned long long)arg1;
- (BOOL)showGiftCover;
- (id)ellipsisStringWithIndex:(id)arg1 index:(long long)arg2 labelWidth:(double)arg3 font:(id)arg4;
- (id)replaceNicknameInTemplate:(id)arg1 userName:(id)arg2 chatName:(id)arg3;
@end
