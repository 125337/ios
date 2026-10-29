@interface WCFinderLiveTagListLabelCell : UICollectionViewCell
{
    BOOL _isToggle; // +0x8
    UILabel * _titleLabel; // +0x10
    WCFinderLiveTagListCollectionViewConfig * _config; // +0x18
}
+ (id)cellIdentifier;
+ (CGSize)cellSizeWithTitle:(id)arg1 config:(id)arg2;
+ (CGSize)calculateTextSize:(id)arg1 config:(id)arg2;
+ (id)displayTitle:(id)arg1 withLimitCharCount:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)updateWithConfig:(id)arg1 item:(id)arg2;
- (void)updateDarkModeUI;
- (void)toggle;
- (void)unToggle;
- (void)setIsToggle:(BOOL)arg1;
- (void)setTitleLabel:(id)arg1;
- (BOOL)isToggle;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
