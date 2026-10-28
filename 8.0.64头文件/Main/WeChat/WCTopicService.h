@interface WCTopicService : WSTemplateBaseMgr <IExptServiceExt, PBMessageObserverDelegate>
{
    BOOL _isAvaliableForTextFeaturesInChat; // +0x8
    BOOL _isAvaliableForTextFeaturesInTimeline; // +0x9
    BOOL _isAvaliableForShareConentSearch; // +0xa
    unsigned int _topicMaxCharacterCount; // +0xc
    WCTopicJumpInfo * _curTopicJumpInfo; // +0x10
    MMLoadingView * _loadingView; // +0x18
    double _lastReqTime; // +0x20
}
- (void)onServiceInit;
- (id)defaultTemplateZipPath;
- (id)templateResouceRootPath;
- (unsigned int)packageResouceType;
- (unsigned long long)localJSBizType;
- (BOOL)updateCacheTextFeatureEnableInChat:(BOOL)arg1;
- (BOOL)updateCacheTextFeatureEnableInTimeline:(BOOL)arg1;
- (BOOL)isAvaliableForTopicSearchTextFeatures;
- (BOOL)isAvaliableForTopicSearchInputShare;
- (BOOL)isAvaliableForTopicSearchTextFeaturesInTimeline;
- (unsigned int)topicMaxCharacterCount;
- (void)onExptItemListChange;
- (void)showTopicJumpLoading;
- (void)hideTopicJumpLoading:(BOOL)arg1;
- (void)openTopicWithParams:(id)arg1 object:(id)arg2 fromViewController:(id)arg3;
- (void)reqTopicJumpInfo:(id)arg1 Object:(id)arg2 Handler:(id /* block */)arg3;
- (void)stopReqTopicJumpInfo;
- (void)cancelReqTopicJumpInfoByObject:(id)arg1;
- (void)onTopicJumpInfoTimeout;
- (id)makeOpenParamByTopicJumpInfo:(id)arg1;
- (void)openWaAppByTopicJumpInfo:(id)arg1 OpenParam:(id)arg2;
- (id)valueFromList:(id)arg1 withKey:(id)arg2;
- (void)openH5ByTopicJumpInfo:(id)arg1 ViewController:(id)arg2;
- (void)openFinderProfileByTopicJumpInfo:(id)arg1 ViewController:(id)arg2 reportScene:(int)arg3 enterType:(int)arg4 params:(id)arg5;
- (void)openBizByTopicJumpInfo:(id)arg1 ViewController:(id)arg2 addContactScene:(int)arg3;
- (void)openLiteAppTopicJumpInfo:(id)arg1 viewController:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)isAvaliableForTextFeaturesInChat;
- (void)setIsAvaliableForTextFeaturesInChat:(BOOL)arg1;
- (BOOL)isAvaliableForTextFeaturesInTimeline;
- (void)setIsAvaliableForTextFeaturesInTimeline:(BOOL)arg1;
- (BOOL)isAvaliableForShareConentSearch;
- (void)setIsAvaliableForShareConentSearch:(BOOL)arg1;
- (void)setTopicMaxCharacterCount:(unsigned int)arg1;
- (id)curTopicJumpInfo;
- (void)setCurTopicJumpInfo:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (double)lastReqTime;
- (void)setLastReqTime:(double)arg1;
- (void).cxx_destruct;
@end
