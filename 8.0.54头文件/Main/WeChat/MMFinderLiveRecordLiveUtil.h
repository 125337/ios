@interface MMFinderLiveRecordLiveUtil : NSObject
+ (void)getFilteredGameUserInfoWithAppId:(id)arg1 finderLiveTask:(id)arg2 filteredGameCompleteBlock:(id /* block */)arg3;
+ (void)getFilteredGameUserInfoWithAppId:(id)arg1 finderLiveTask:(id)arg2 liveViewController:(id)arg3;
+ (void)launchGameApp:(id)arg1;
+ (id /* block */)launchGameAppCallbackHandler:(id)arg1;
+ (BOOL)canDownloadGameOnAppstore:(id)arg1;
+ (void)showTipsForNeedDownloadGame:(id)arg1;
+ (void)reportRecordLiveWithType:(unsigned long long)arg1;
@end

