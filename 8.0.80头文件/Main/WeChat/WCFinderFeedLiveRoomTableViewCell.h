@interface WCFinderFeedLiveRoomTableViewCell : WCFinderTableViewCell <MMFinderLiveContentVMExt, WCFinderFeedCollectionViewCellProtocol, WCFinderFocusCellProtocol>
{
    BOOL _isInLiveRoom; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    MMFinderLiveContentVM * _liveVM; // +0x18
}
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithContentVM:(id)arg1;
- (BOOL)tryEnterLiveRoom;
- (void)exitLiveRoom;
- (void)pauseLive;
- (void)muteVideo:(BOOL)arg1;
- (BOOL)shouldCaluculateAsFocusCell;
- (BOOL)currentMediaIsPlay;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)stopVideoIfSupport;
- (double)minPercentcellCanPlayDisplay;
- (void)pauseMediaPlayShowPauseBtn:(BOOL)arg1;
- (void)onCellBecomeFocus;
- (void)onCellDidEndFocused:(BOOL)arg1;
- (BOOL)finderFeedCellIsCurrentMediaPlaying;
- (BOOL)finderFeedCellIsCurrentMediaSupportMinimizePlay;
- (id)finderFeedCellUnSupportMinimizePlayToast;
- (id)finderFeedCellPlayerMeidaWrapIdentifier;
- (BOOL)finderFeedCellIsCurrentMediaMute;
- (id)finderFeedCellMinimizeContentView:(BOOL)arg1;
- (id)dataItem;
- (void)onSupportRotateStateChanged:(id)arg1 rotateEnabled:(BOOL)arg2;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)liveVM;
- (void)setLiveVM:(id)arg1;
- (BOOL)isInLiveRoom;
- (void)setIsInLiveRoom:(BOOL)arg1;
- (void).cxx_destruct;
@end
