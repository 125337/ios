@interface EcsScreenshotShareManager : NSObject
{
    NSMutableDictionary * _pageShareDataMap; // +0x8
    NSMutableDictionary * _pendingRequests; // +0x10
    id /* block */ _pageKeyProvider; // +0x18
    NSCache * _jumpInfoCache; // +0x20
}
+ (id)sharedInstance;
- (id)init;
- (id)currentPageKeyWillStoreData:(BOOL)arg1;
- (id)currentPageKey;
- (void)bindPageKeyProvider:(id /* block */)arg1;
- (void)unbindPageKeyProvider;
- (id)getCurrentShareData;
- (void)updateShareDataWithId:(id)arg1 opType:(long long)arg2 data:(id)arg3;
- (id)buildShareInfoRefreshPayload;
- (void)clearAllShareData;
- (void)clearShareDataForPageKey:(id)arg1;
- (BOOL)applyUpdateFromParams:(id)arg1;
- (void)requestJumpInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)requestJumpInfoForClick:(id)arg1 messageWrap:(id)arg2 completion:(id /* block */)arg3;
- (id)parseImgSourceUrlJson:(id)arg1;
- (void)requestSwitchLinkWithImgSourceUrl:(id)arg1 cardType:(long long)arg2 cardData:(id)arg3 msg:(id)arg4 reqType:(unsigned int)arg5 fallbackJson:(id)arg6 onSuccess:(id /* block */)arg7;
- (id)getCachedJumpInfoOnly:(id)arg1;
- (id)getCachedRequestIdForImgSourceUrl:(id)arg1;
- (id)getValidJumpInfo:(id)arg1;
- (void)putJumpInfoCache:(id)arg1 forKey:(id)arg2;
- (id)buildFallbackJumpInfo:(id)arg1;
- (BOOL)isJumpInfoValidForOpen:(id)arg1;
- (void).cxx_destruct;
@end
