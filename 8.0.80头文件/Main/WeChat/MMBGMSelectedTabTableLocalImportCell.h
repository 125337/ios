@interface MMBGMSelectedTabTableLocalImportCell : MMBGMSelectedTabTableBaseCell
{
    BOOL _imported; // +0x8
    id /* block */ _onTapMoreButton; // +0x10
    UIView * _cardBackgroundView; // +0x18
    UIImageView * _addIconView; // +0x20
    UILabel * _addLabel; // +0x28
    UIView * _musicIconContainerView; // +0x30
    UIImageView * _musicIconView; // +0x38
    UIView * _playingMaskView; // +0x40
    PAGView * _playingPAGView; // +0x48
    UILabel * _titleLabel; // +0x50
    UILabel * _subtitleLabel; // +0x58
    UIButton * _moreButton; // +0x60
}
+ (id)cellID;
+ (double)cellHeight;
+ (double)cellHeightForMusicData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubViews;
- (void)setupConstraints;
- (void)setupAccessibility;
- (void)updateMoreButtonAccessibilityWithImported:(BOOL)arg1;
- (void)updateAccessibilityWithImported:(BOOL)arg1;
- (void)handleMoreButtonTap;
- (void)updateWithMusicData:(id)arg1 config:(id)arg2 globalConfig:(id)arg3 sourceTabType:(unsigned long long)arg4;
- (void)setIsCellSelected:(BOOL)arg1;
- (id /* block */)onTapMoreButton;
- (void)setOnTapMoreButton:(id /* block */)arg1;
- (id)cardBackgroundView;
- (void)setCardBackgroundView:(id)arg1;
- (id)addIconView;
- (void)setAddIconView:(id)arg1;
- (id)addLabel;
- (void)setAddLabel:(id)arg1;
- (id)musicIconContainerView;
- (void)setMusicIconContainerView:(id)arg1;
- (id)musicIconView;
- (void)setMusicIconView:(id)arg1;
- (id)playingMaskView;
- (void)setPlayingMaskView:(id)arg1;
- (id)playingPAGView;
- (void)setPlayingPAGView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (BOOL)imported;
- (void)setImported:(BOOL)arg1;
- (void).cxx_destruct;
@end
