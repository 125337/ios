@interface MMFinderLiveNewSongCell : MMFinderLiveSongRequestCell <MMFinderLiveNewMusicOperationExt>
{
    BOOL _isSelected; // +0x8
    BOOL _isPlaying; // +0x9
    BOOL _isInRequestedPanel; // +0xa
    BOOL _contentOnlyMode; // +0xb
    id <MMFinderLiveNewSongCellDelegate> _delegate; // +0x10
    MMFinderLiveKTVTrialListenManageLogic * _trialLogic; // +0x18
    UIImageView * _selectionBoxImageView; // +0x20
    UIView * _giftBackground; // +0x28
    UIImageView * _giftImage; // +0x30
    UILabel * _heatLabel; // +0x38
}
+ (id)identifier;
+ (double)cellHeightWithState:(unsigned long long)arg1 heatValue:(unsigned long long)arg2;
- (void)commonInit;
- (BOOL)isInEditingMode;
- (void)customLayoutUI;
- (double)lineMaxRight;
- (void)refreshRequestButton;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)trialListenManageLogic;
- (id)selectionBoxImageView;
- (id)giftBackground;
- (id)giftImage;
- (id)heatLabel;
- (void)setIsPlaying:(BOOL)arg1;
- (void)setContentOnlyMode:(BOOL)arg1;
- (void)onSongContentTap;
- (void)requestButtonAction;
- (void)refreshSelectionImage;
- (void)onTapGiftImage;
- (void)onLiveNewMusicStartPlay:(id)arg1 success:(BOOL)arg2;
- (void)onLiveNewMusicStopPlay:(id)arg1;
- (void)onLiveNewMusicAddedSong:(id)arg1;
- (void)onLiveNewMusicPausePlay:(id)arg1;
- (void)onLiveNewMusicResumePlay:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isPlaying;
- (BOOL)isInRequestedPanel;
- (void)setIsInRequestedPanel:(BOOL)arg1;
- (BOOL)contentOnlyMode;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)trialLogic;
- (void)setTrialLogic:(id)arg1;
- (void)setSelectionBoxImageView:(id)arg1;
- (void)setGiftBackground:(id)arg1;
- (void)setGiftImage:(id)arg1;
- (void)setHeatLabel:(id)arg1;
- (void).cxx_destruct;
@end
