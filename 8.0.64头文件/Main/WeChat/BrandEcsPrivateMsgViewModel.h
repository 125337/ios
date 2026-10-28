@interface BrandEcsPrivateMsgViewModel : BaseMessageViewModel
{
    BOOL _hasExposure; // +0x5a
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)init;
- (id)cellViewClassName;
- (CGSize)measure:(CGSize)arg1;
- (double)readerViewWidth;
- (double)readerItemLMargin;
- (double)readerViewInsideWidth;
- (BOOL)hasExposure;
- (void)setHasExposure:(BOOL)arg1;
@end
