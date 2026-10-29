@interface MMFinderLiveMusicTableViewCell : MMFinderLiveMultiSelectTableViewCell
{
    MMFinderLiveMusicDataItem * _musicDataItem; // +0x8
    id <MMFinderLiveMusicTableViewCellDelegate> _musicTableCellDelegate; // +0x10
    MMWebImageView * _coverImageView; // +0x18
    MMUILabel * _musicNameLabel; // +0x20
    MMUILabel * _musicAnchorLabel; // +0x28
    MMUILabel * _durationLabel; // +0x30
    PAGView * _playingAnimatedView; // +0x38
    MMUIView * _playingAnimatedBgView; // +0x40
    UIImageView * _playingStateImg; // +0x48
}
+ (double)preferHeight;
+ (double)preferLabelLeft;
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCoverImageView;
- (void)layoutMusicNameLabel;
- (void)layoutMusicAnchorLabel;
- (void)layoutDurationLabel;
- (void)layoutPlayingIconView;
- (void)layoutPlayingStateImg;
- (void)setMusicDataItem:(id)arg1;
- (void)refreshUI;
- (void)onTapGesture:(id)arg1;
- (void)refreshContents;
- (void)updatePlayingAnimatedViewState;
- (void)playPlayingAnimatedView;
- (void)stopPlayingAnimatedView;
- (void)pausePlayingAnimatedView;
- (void)createPlayingAnimatedView;
- (void)updatePlayingStateImg;
- (double)adjustedLeftOffsetForEditing;
- (double)selectedButtonLeftMargin;
- (void)customReorderImage:(id)arg1;
- (id)musicDataItem;
- (id)musicTableCellDelegate;
- (void)setMusicTableCellDelegate:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)musicNameLabel;
- (void)setMusicNameLabel:(id)arg1;
- (id)musicAnchorLabel;
- (void)setMusicAnchorLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)playingAnimatedView;
- (void)setPlayingAnimatedView:(id)arg1;
- (id)playingAnimatedBgView;
- (void)setPlayingAnimatedBgView:(id)arg1;
- (id)playingStateImg;
- (void)setPlayingStateImg:(id)arg1;
- (void).cxx_destruct;
@end
