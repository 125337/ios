@interface WANativeAppViewModel : WAAppMessageBaseViewModel
{
    CGSize _viewSize; // +0x70
    CGSize _titleSize; // +0x80
    CGSize _digestSize; // +0x90
    NSMutableArray * _titleLabelStyles; // +0xa0
    NSMutableArray * _digestLabelStyles; // +0xa8
    CContact * _appContact; // +0xb0
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)onViewAppear;
- (id)additionalAccessibilityDescription;
- (id)getWAAppName;
- (id)cellViewClassName;
- (id)cellIdentifier;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)titleSize;
- (CGSize)digestSize;
- (id)titleLabelStyles;
- (double)titleLeftMargin;
- (double)titleMaxWidth;
- (double)digestMaxWidth;
- (id)digestLabelStyles;
- (CGSize)viewSize;
- (double)viewWidth;
- (id)titleStr;
- (id)digestStr;
- (id)titleFont;
- (id)digestFont;
- (unsigned int)titleMaxLines;
- (unsigned int)digestMaxLines;
- (double)thumWidth;
- (double)descWidth;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)sourceTag;
- (id)sourceIconUrlString;
- (unsigned int)thumbDownloadStatus;
- (id)thumbImage;
- (id)getReferImage;
- (id)appContact;
- (void)setAppContact:(id)arg1;
- (void).cxx_destruct;
@end
