@interface WCFinderFeedLiveRoomCollectionViewCell : WCFinderFeedLiveBaseCollectionViewCell <MMFinderLiveContentVMExt, WCFinderFeedCollectionViewCellProtocol>
{
    BOOL _isInLiveRoom; // +0x8
    id <WCFinderFeedContentMediaActionProtocol> _delegate; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    MMFinderLiveContentVM * _liveVM; // +0x20
}
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateDataSourceWithFeedContentVM:(id)arg1;
- (BOOL)tryEnterLiveRoom;
- (void)exitLiveRoom;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)previewLive;
- (void)pauseVideoIfSupport:(BOOL)arg1;
- (void)stopVideoIfSupport;
- (void)muteVideo:(BOOL)arg1;
- (void)onLiveRoomBecomeFocus;
- (void)onLiveRoomDidEndFocused:(BOOL)arg1;
- (BOOL)finderFeedCellIsCurrentMediaPlaying;
- (BOOL)finderFeedCellIsCurrentMediaSupportMinimizePlay;
- (id)finderFeedCellUnSupportMinimizePlayToast;
- (id)finderFeedCellPlayerMeidaWrapIdentifier;
- (BOOL)finderFeedCellIsCurrentMediaMute;
- (id)finderFeedCellMinimizeContentView:(BOOL)arg1;
- (id)dataItem;
- (void)onSupportRotateStateChanged:(id)arg1 rotateEnabled:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)liveVM;
- (void)setLiveVM:(id)arg1;
- (BOOL)isInLiveRoom;
- (void)setIsInLiveRoom:(BOOL)arg1;
- (void).cxx_destruct;
@end
