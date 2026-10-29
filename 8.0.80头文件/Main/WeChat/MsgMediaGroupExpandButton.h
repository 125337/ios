@interface MsgMediaGroupExpandButton : MMUIButton
{
    BOOL _hasUnread; // +0x8
    BOOL _hasErr; // +0x9
    BOOL _isUploading; // +0xa
    UILabel * _textLabel; // +0x10
    UILabel * _countLabel; // +0x18
    UIImageView * _errIcon; // +0x20
    MMLoadingIndicatorView * _loadingView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)currentLeadingView;
- (double)edgePadding;
- (double)textCountGap;
- (double)iconTextGap;
- (double)leadingLeftPadding;
- (double)iconSize;
- (double)loadingSize;
- (double)fontSize;
- (void)updateCount:(long long)arg1 isUnread:(BOOL)arg2 hasErr:(BOOL)arg3;
- (void)updateTextColor:(id)arg1;
- (void)updateStatusIconsVisibility;
- (void)updateUploading:(BOOL)arg1 animated:(BOOL)arg2;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)errIcon;
- (void)setErrIcon:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)hasUnread;
- (void)setHasUnread:(BOOL)arg1;
- (BOOL)hasErr;
- (void)setHasErr:(BOOL)arg1;
- (BOOL)isUploading;
- (void)setIsUploading:(BOOL)arg1;
- (void).cxx_destruct;
@end
