@interface MMFinderLiveFeedStreamConnectMicUserInfoView : MMFinderLiveFeedStreamWidgetBaseView <MMFinderLiveConnectMicAllUserInfoViewDelegate>
{
    MMFinderLiveConnectMicAllUserInfoView * _connectMicAllUserInfoView; // +0x8
    UIImageView * _connectMicPkAtmosphereBackgroundView; // +0x10
    NSString * _currentPkSessionId; // +0x18
}
- (id)init;
- (void)prepareForReuse;
- (void)setTaskId:(id)arg1;
- (void)updateUserPkStateUI;
- (void)resetConnectMicUserInfoViewFrame;
- (BOOL)shouldMMFinderLiveConnectMicAllUserInfoDisableStartPkAnimation:(id)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoPkStatusChange:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)updatePkAtmosphereBackgroundIfNeeded:(BOOL)arg1;
- (id)connectMicAllUserInfoView;
- (void)setConnectMicAllUserInfoView:(id)arg1;
- (id)connectMicPkAtmosphereBackgroundView;
- (void)setConnectMicPkAtmosphereBackgroundView:(id)arg1;
- (id)currentPkSessionId;
- (void)setCurrentPkSessionId:(id)arg1;
- (void).cxx_destruct;
@end

