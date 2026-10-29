@interface WCFinderStreamProfileMusicCell : UICollectionViewCell <MMMusicPlayerContollerDelegate>
{
    WCFinderExpandHitTingPlayerContoller * _playButton; // +0x8
    id <WCFinderStreamProfileMusicCellDelegate> _delegate; // +0x10
    UIView * _cellAccessibilityView; // +0x18
    UIView * _avatarContainer; // +0x20
    UIView * _avatarMask; // +0x28
    UIImageView * _defaultMusicIcon; // +0x30
    MMWebImageView * _musicIconView; // +0x38
    UIView * _playButtonBGView; // +0x40
    WCFinderLinearView * _titleCintainer; // +0x48
    UILabel * _titleLabel; // +0x50
    UILabel * _musicLengthLabel; // +0x58
    UILabel * _descLabel; // +0x60
    UIView * _line; // +0x68
    WCFinderFeedContentVM * _contentVM; // +0x70
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void *)observeImageContextKey;
- (void)updateWithContentVM:(id)arg1;
- (id)formatTimeString:(long long)arg1;
- (void)doLayout;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)thumbImage;
- (void)playClicked:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cellAccessibilityView;
- (void)setCellAccessibilityView:(id)arg1;
- (id)avatarContainer;
- (void)setAvatarContainer:(id)arg1;
- (id)avatarMask;
- (void)setAvatarMask:(id)arg1;
- (id)defaultMusicIcon;
- (void)setDefaultMusicIcon:(id)arg1;
- (id)musicIconView;
- (void)setMusicIconView:(id)arg1;
- (id)playButtonBGView;
- (void)setPlayButtonBGView:(id)arg1;
- (id)titleCintainer;
- (void)setTitleCintainer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)musicLengthLabel;
- (void)setMusicLengthLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)line;
- (void)setLine:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end
