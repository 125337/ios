@interface WCFinderPopupTipsView : MMUIView
{
    BOOL _isMainStatus; // +0x8
    double _rawWidth; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    MMWebImageView * _iconUrlImageView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateTextColor:(id)arg1 bgColorString:(id)arg2;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)iconUrlImageView;
- (void)updateWithShowInfoItem:(id)arg1 isMain:(BOOL)arg2;
- (void)layoutAllTipsViews:(BOOL)arg1;
- (BOOL)isMainStatus;
- (void)setIsMainStatus:(BOOL)arg1;
- (double)rawWidth;
- (void)setRawWidth:(double)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setIconUrlImageView:(id)arg1;
- (void).cxx_destruct;
@end

