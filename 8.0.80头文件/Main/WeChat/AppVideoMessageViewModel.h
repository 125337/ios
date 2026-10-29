@interface AppVideoMessageViewModel : BizAppBaseMessageViewModel
{
    double m_titleHeight; // +0xe0
    CGSize m_timeSize; // +0xe8
    BOOL _isWSVideo; // +0xf8
    NSString * _coverImgUrl; // +0x100
    CContact * _bizContact; // +0x108
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)titleText;
- (double)titleHeight;
- (id)hostText;
- (id)thumbImage;
- (double)coverImgHeight;
- (id)timeText;
- (double)timeHeight;
- (BOOL)isMalicious;
- (BOOL)needShowSourceDividerLine;
- (id)additionalAccessibilityDescription;
- (double)sourceViewHeight;
- (BOOL)isWSVideo;
- (id)coverImgUrl;
- (id)bizContact;
- (void).cxx_destruct;
@end
