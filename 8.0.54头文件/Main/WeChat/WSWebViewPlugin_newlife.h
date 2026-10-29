@interface WSWebViewPlugin_newlife : WSWebViewPluginBase <NewLifeSyncStatusExt, WCFinderDataItemExt>
{
    NSMutableDictionary * _feedId2EncryptIdMap; // +0x8
}
- (id)init;
- (void)registerExtension;
- (void)updateEncryptId:(id)arg1 forFeedId:(id)arg2;
- (void)onFinderDataItemIsLikedUpdateByExtention:(id)arg1;
- (void)onGetFeedId:(id)arg1 forEncryptId:(id)arg2;
- (id)feedId2EncryptIdMap;
- (void)setFeedId2EncryptIdMap:(id)arg1;
- (void).cxx_destruct;
@end

