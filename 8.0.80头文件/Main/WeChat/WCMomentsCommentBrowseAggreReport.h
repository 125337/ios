@interface WCMomentsCommentBrowseAggreReport : NSObject
{
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x8
    BOOL _enableUploadByGroup; // +0x10
    long long _snsScene; // +0x18
    NSString * _sessionId; // +0x20
    NSMutableDictionary * _cmtBrowseListDict; // +0x28
}
+ (id)sharedQueue;
- (id)init;
- (void)_safeAccessStorage:(id /* block */)arg1;
- (void)recordExposureForFeed:(id)arg1 comment:(id)arg2;
- (void)recordClickForFeed:(id)arg1 comment:(id)arg2;
- (void)recordEmoticonClickForFeed:(id)arg1 comment:(id)arg2;
- (void)recordPicClickForFeed:(id)arg1 comment:(id)arg2;
- (void)report;
- (void)reportCmtListStr:(id)arg1;
- (void)clearALLCmtData;
- (long long)snsScene;
- (void)setSnsScene:(long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)enableUploadByGroup;
- (void)setEnableUploadByGroup:(BOOL)arg1;
- (id)cmtBrowseListDict;
- (void)setCmtBrowseListDict:(id)arg1;
- (void).cxx_destruct;
@end
