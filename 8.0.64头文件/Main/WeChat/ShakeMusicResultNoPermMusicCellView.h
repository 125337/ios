@interface ShakeMusicResultNoPermMusicCellView : UITableViewCell <MMMusicPlayerContollerDelegate>
{
    id <ShakeMusicResultNoPermMusicCellViewDelegate> _cellDelegate; // +0x8
    long long _index; // +0x10
    MMQQMusicInfo * _qqMusicInfo; // +0x18
    UIView * _topSeperateLine; // +0x20
    UIView * _bottomSeperateLine; // +0x28
    MMUIButton * _musicInfoContainerButton; // +0x30
    MMWebImageView * _musicCoverImageView; // +0x38
    MMUILabel * _songName; // +0x40
    MMUILabel * _singerName; // +0x48
    MMUIButton * _playButton; // +0x50
    MMMusicPlayerContoller * _musicPlayerCtrl; // +0x58
}
+ (double)getCellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)newQQMusicInfo:(id)arg1 withIndex:(long long)arg2;
- (void)playButtonClicked;
- (void)infoButtonClicked;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (id)qqMusicInfo;
- (void)setQqMusicInfo:(id)arg1;
- (id)topSeperateLine;
- (void)setTopSeperateLine:(id)arg1;
- (id)bottomSeperateLine;
- (void)setBottomSeperateLine:(id)arg1;
- (id)musicInfoContainerButton;
- (void)setMusicInfoContainerButton:(id)arg1;
- (id)musicCoverImageView;
- (void)setMusicCoverImageView:(id)arg1;
- (id)songName;
- (void)setSongName:(id)arg1;
- (id)singerName;
- (void)setSingerName:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (id)musicPlayerCtrl;
- (void)setMusicPlayerCtrl:(id)arg1;
- (void).cxx_destruct;
@end
