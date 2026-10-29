@interface AppWeChatIntroductionMessageViewModel : BaseMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isDisableEditMode;
- (double)messageNodeWidth;
- (double)messageNodeItemHeight:(unsigned int)arg1;
- (void)handleClickIntroduction:(id)arg1;
@end

