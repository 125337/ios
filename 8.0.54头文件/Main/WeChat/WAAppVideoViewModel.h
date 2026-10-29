@interface WAAppVideoViewModel : WAAppMessageBaseViewModel
{
    NSString * m_videoPath; // +0x70
    CGSize m_thumbImageSize; // +0x78
    NSString * _videoTitle; // +0x88
    CContact * _appContact; // +0x90
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)makeWeishiDemo;
- (id)thumbImage;
- (id)thumbImageData;
- (BOOL)canShare;
- (BOOL)isShowSourceView;
- (BOOL)isTailPart;
- (BOOL)shouldShowSourceViewInContent;
- (id)cellViewClassName;
- (id)sourceIcon;
- (id)sourceTitle;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)additionalAccessibilityDescription;
- (id)videoPath;
- (CGSize)thumbImageSize;
- (id)videoTitle;
- (id)appContact;
- (void)setAppContact:(id)arg1;
- (void).cxx_destruct;
@end

