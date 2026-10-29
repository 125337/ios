@interface TextStateHistoryCalendarIconView : UIView
{
    BOOL _plain; // +0x8
    TextStateHistoryInfo * _info; // +0x10
    UIImageView * _backgroundImageView; // +0x18
    UIView * _maskView; // +0x20
    MMWebImageView * _iconImageView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)updateLayer;
- (void)setFrame:(CGRect)arg1;
- (void)setInfo:(id)arg1;
- (void)setPlain:(BOOL)arg1;
- (void)updateIcon;
- (id)info;
- (BOOL)plain;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (void).cxx_destruct;
@end

