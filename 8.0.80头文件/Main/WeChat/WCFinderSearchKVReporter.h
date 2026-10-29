@interface WCFinderSearchKVReporter : NSObject
{
    WCFinderSearchMetaData * _metaData; // +0x8
}
+ (id)requestIdForFeedVM:(id)arg1;
+ (void)setReqeustId:(id)arg1 forFeedVM:(id)arg2;
+ (void)setReqeustId:(id)arg1 forFeedVMS:(id)arg2;
- (void)reportSearchWithText:(id)arg1 requestId:(id)arg2 resultEmpty:(BOOL)arg3;
- (void)reportWithClickWithQueryText:(id)arg1 tid:(id)arg2 position:(long long)arg3 hotwordId:(id)arg4 requestId:(id)arg5 clickType:(BOOL)arg6;
- (id)metaData;
- (void)setMetaData:(id)arg1;
- (void).cxx_destruct;
@end
