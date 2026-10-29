@interface WCFinderLeadToOtherTabTableViewCell : WCFinderTableViewCell <WCFinderFeedContentMediaActionProtocol, WCFinderFocusCellProtocol>
{
    id <WCFinderLeadToOtherTabTableViewCellDelegate> _delegate; // +0x8
    WCFinderFeedContentVM * _playableContentVM; // +0x10
    WCFinderFeedContentVM * _currentContentVM; // +0x18
    WCFinderCustomImageRichTextView * _completeTitleView; // +0x20
    UIView * _leadToMachineContainerView; // +0x28
    WCFinderCustomImageRichTextView * _leadToMachineTipsLabel; // +0x30
    UIImageView * _leadToMachineArrowIcon; // +0x38
    UIView * _playerContainerView; // +0x40
    WCFinderSimplePlayerView * _playerView; // +0x48
    WCFinderHeadImageView * _headImgView; // +0x50
    RichTextView * _nicknameLabel; // +0x58
    WCFinderAuthInfoIconView * _authIconView; // +0x60
    WCFinderGradientView * _gradientView; // +0x68
    RichTextView * _continueScrollTipsView; // +0x70
    double _currentPlayPosition; // +0x78
    FinderObjectPlaceHolderInfo * _placeHolderInfo; // +0x80
    CGSize _layoutSize; // +0x88
}
+ (id)cellID;
+ (void)reportFailToExposeWithCommentScene:(int)arg1 reson:(unsigned long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)updateWithPlaceholderInfo:(id)arg1 playableContemtVM:(id)arg2 currentContentVM:(id)arg3;
- (id)completeTitleContentWith:(id)arg1;
- (void)updateWithPlayItem:(id)arg1;
- (void)setEmptyState;
- (void)setSubviewsHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)reportEvent:(id)arg1 withNextFeedID:(id)arg2 commentScene:(int)arg3;
- (void)reportEvent:(id)arg1 withNextFeedID:(id)arg2 commentScene:(int)arg3 fromTabContextId:(id)arg4;
- (void)handleTapGesture;
- (BOOL)shouldCaluculateAsFocusCell;
- (BOOL)currentMediaIsPlay;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)stopVideoIfSupport;
- (void)pauseMediaPlayShowPauseBtn:(BOOL)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playableContentVM;
- (void)setPlayableContentVM:(id)arg1;
- (id)currentContentVM;
- (void)setCurrentContentVM:(id)arg1;
- (id)completeTitleView;
- (void)setCompleteTitleView:(id)arg1;
- (id)leadToMachineContainerView;
- (void)setLeadToMachineContainerView:(id)arg1;
- (id)leadToMachineTipsLabel;
- (void)setLeadToMachineTipsLabel:(id)arg1;
- (id)leadToMachineArrowIcon;
- (void)setLeadToMachineArrowIcon:(id)arg1;
- (id)playerContainerView;
- (void)setPlayerContainerView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)headImgView;
- (void)setHeadImgView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)continueScrollTipsView;
- (void)setContinueScrollTipsView:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (double)currentPlayPosition;
- (void)setCurrentPlayPosition:(double)arg1;
- (id)placeHolderInfo;
- (void)setPlaceHolderInfo:(id)arg1;
- (void).cxx_destruct;
@end

