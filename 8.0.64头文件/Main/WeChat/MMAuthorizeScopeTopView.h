@interface MMAuthorizeScopeTopView : UIView
{
    double _bottomPadding; // +0x8
    UIColor * _imageViewBgColor; // +0x10
    NSString * _iconUrl; // +0x18
    NSString * _appName; // +0x20
    NSString * _actionWording; // +0x28
    NSString * _scopeDesc; // +0x30
    NSString * _appendDetailStr; // +0x38
    NSString * _cloudGameScopeWording; // +0x40
    MMWebImageView * _appIconImageView; // +0x48
    MMUILabel * _titleLabel; // +0x50
    MMUILabel * _scopeLabel; // +0x58
    MMUILabel * _cloudGameScopeLabel; // +0x60
    MMUILabel * _detailLabel; // +0x68
}
- (id)initWithIconUrl:(id)arg1 appName:(id)arg2 actionWording:(id)arg3 scopeDesc:(id)arg4 appendDetailStr:(id)arg5 cloudGameScopeWording:(id)arg6;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)layoutSubviewsAndCalculateHeight;
- (void)setImageViewBgColor:(id)arg1;
- (double)bottomPadding;
- (void)setBottomPadding:(double)arg1;
- (id)imageViewBgColor;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)actionWording;
- (void)setActionWording:(id)arg1;
- (id)scopeDesc;
- (void)setScopeDesc:(id)arg1;
- (id)appendDetailStr;
- (void)setAppendDetailStr:(id)arg1;
- (id)cloudGameScopeWording;
- (void)setCloudGameScopeWording:(id)arg1;
- (id)appIconImageView;
- (void)setAppIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)scopeLabel;
- (void)setScopeLabel:(id)arg1;
- (id)cloudGameScopeLabel;
- (void)setCloudGameScopeLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (void).cxx_destruct;
@end
