@interface BizAppReaderMessageViewModel : BizAppBaseMessageViewModel
{
    BOOL _isNearbyNativeAppMsg; // +0xd9
    BizAppReaderMessageBigPicViewModel * _bigPicViewModel; // +0xe0
    NSMutableArray * _bigPicTitleLabelStyles; // +0xe8
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (double)digestMaxWidth;
- (id)sourceDetailStr;
- (id)thumbRectangleUrl;
- (id)thumbSquareUrl;
- (id)thumbImage;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)sourceTopPadding;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (id)bigPicViewModel;
- (void)onSourceInfoUpdated;
- (id)bigPicViewStyle;
- (id)accessibilityMessageType;
- (BOOL)isNearbyNativeAppMsg;
- (id)bigPicTitleLabelStyles;
- (void)setBigPicTitleLabelStyles:(id)arg1;
- (void).cxx_destruct;
@end
