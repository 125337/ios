@interface MMFinderLiveKTVConnectMicSessionInfo : NSObject
{
    BOOL _isCgiOK; // +0x8
    NSString * _songUniqueId; // +0x10
    NSString * _liveMicId; // +0x18
    id /* block */ _resultBlock; // +0x20
    LiveSdkInfo * _prepareConnectMicSdkInfo; // +0x28
}
- (id)songUniqueId;
- (void)setSongUniqueId:(id)arg1;
- (BOOL)isCgiOK;
- (void)setIsCgiOK:(BOOL)arg1;
- (id)liveMicId;
- (void)setLiveMicId:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (id)prepareConnectMicSdkInfo;
- (void)setPrepareConnectMicSdkInfo:(id)arg1;
- (void).cxx_destruct;
@end
