@interface WCMusicSearchHintView : UIView
{
    unsigned long long _mode; // +0x8
    MMUILabel * _hintLabel; // +0x10
    WCMusicLoadingHintView * _loadingView; // +0x18
    UIEdgeInsets _contentEdgeInsets; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)hideAllSubviewsExcept:(id)arg1;
- (void)updateHintText:(id)arg1;
- (void)updateHintTextFont:(id)arg1;
- (void)updateHintTextColor:(id)arg1;
- (void)updateLoadingText:(id)arg1;
- (void)setLoadingTextColor:(id)arg1;
- (void)setLoadingTextFont:(id)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (id)hintLabel;
- (id)loadingView;
- (UIEdgeInsets)contentEdgeInsets;
- (void)setContentEdgeInsets:(UIEdgeInsets)arg1;
- (unsigned long long)mode;
- (void)setHintLabel:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
