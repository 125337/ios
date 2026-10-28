@interface MMBGMChooseFinderFeedListViewTableViewCell : UITableViewCell <MMBGMChooseFeedListSelectedBarDelegate, WCFinderFeedContentMediaActionProtocol, WCFinderFocusCellProtocol>
{
    id <MMBGMChooseFinderFeedListViewTableViewCellDelegate> _delegate; // +0x8
    MMBGMSelectedConfig * _config; // +0x10
    TextStateBlurButton * _editButton; // +0x18
    WCFinderSimplePlayerView * _playerView; // +0x20
    MMBGMChooseFeedListSelectedBar * _selectedBar; // +0x28
    WCFinderFeedContentVM * _contentVM; // +0x30
    CAGradientLayer * _shadowLayer; // +0x38
}
+ (id)cellId;
+ (double)cellInnerMargin;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setup;
- (void)updateWithContentVM:(id)arg1 width:(double)arg2 isSelected:(BOOL)arg3 config:(id)arg4 highLightText:(id)arg5;
- (void)setButtonIsSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onClickEditBgmButton:(id)arg1;
- (BOOL)shouldCaluculateAsFocusCell;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)stopVideoIfSupport;
- (BOOL)currentMediaIsPlay;
- (void)playerView:(id)arg1 onVideoPrepareToPlay:(id)arg2;
- (void)onSelectedBarClickButton:(id)arg1;
- (void)onSelectedBarStateChange:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)editButton;
- (void)setEditButton:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)selectedBar;
- (void)setSelectedBar:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)shadowLayer;
- (void)setShadowLayer:(id)arg1;
- (void).cxx_destruct;
@end
