@interface StoreEmoticonTopicProxyLogic : NSObject <StoreEmotionGetEmotionListCgiDelegate>
{
    int _extranceScene; // +0x8
    EmotionBannerSet * _bannerSet; // +0x10
    MMUIViewController * _fromVC; // +0x18
    UINavigationController * _navController; // +0x20
    unsigned long long _sessionId; // +0x28
    StoreEmotionAllListReportInfo * _reportInfo; // +0x30
    StoreEmotionGetEmotionListCgi * _getEmotionListCgi; // +0x38
}
- (id)getEmotionListCgi;
- (BOOL)openTopicVC;
- (id)getTopicVC;
- (id)getTopicViewController;
- (id)getAllListViewController;
- (BOOL)localCheckCapacity;
- (void)remoteCheckCapacity;
- (BOOL)openWithVC:(id)arg1;
- (id)getNavigationController;
- (BOOL)openUpdateTip;
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)arg1 Response:(id)arg2;
- (id)bannerSet;
- (void)setBannerSet:(id)arg1;
- (int)extranceScene;
- (void)setExtranceScene:(int)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)navController;
- (void)setNavController:(id)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (void)setGetEmotionListCgi:(id)arg1;
- (void).cxx_destruct;
@end
