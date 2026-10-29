@interface MMFinderLivePreparePageAnnouncementBarView : UIView
{
    id /* block */ _onTapBlock; // +0x8
    MMWebImageView * _iconView; // +0x10
    UILabel * _textLabel; // +0x18
    UIImageView * _arrowView; // +0x20
    long long _level; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)updateWithAnnouncementInfo:(id)arg1;
- (void)resetAnnouncementContent;
- (void)loadIconWithURL:(id)arg1;
- (void)onTap;
- (void)layoutSubviews;
- (id /* block */)onTapBlock;
- (void)setOnTapBlock:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (long long)level;
- (void)setLevel:(long long)arg1;
- (void).cxx_destruct;
@end
