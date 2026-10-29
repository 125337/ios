@interface WCFinderProfileMusicianBaikeView : UIView
{
    FinderMusicBaikeSummary * _baikeSummary; // +0x8
    UIImageView * _avatarView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descLabel; // +0x20
    UIImageView * _arrowView; // +0x28
    UIView * _topLine; // +0x30
    UIView * _bottomLine; // +0x38
    CGSize _cacheSize; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_initViews;
- (void)buildLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setBaikeSummary:(id)arg1;
- (id)descForBaikeCard:(id)arg1;
- (id)baikeSummary;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (CGSize)cacheSize;
- (void)setCacheSize:(CGSize)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end

