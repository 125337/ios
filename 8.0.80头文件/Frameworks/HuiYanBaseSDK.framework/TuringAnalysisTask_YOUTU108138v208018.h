@interface TuringAnalysisTask_YOUTU108138v208018 : NSObject
{
    BOOL _isAnalysing; // +0x8
    BOOL _cancelled; // +0x9
    unsigned long long _sceneID; // +0x10
    TuringAnalysisPolicy_YOUTU108138v208018 * _analysisPolicy; // +0x18
    NSString * _userID; // +0x20
    NSDictionary * _context; // +0x28
    id /* block */ _recordHandler; // +0x30
    TuringShield_YOUTU108138v208018 * _service; // +0x38
    TuringPostRule_YOUTU108138v208018 * _postRole; // +0x40
    unsigned long long _queryType; // +0x48
}
- (id)initWithSceneID:(unsigned long long)arg1 userID:(id)arg2 policy:(id)arg3;
- (BOOL)start;
- (BOOL)startWithRecordHandler:(id /* block */)arg1;
- (BOOL)startWithPostRule:(id)arg1;
- (BOOL)startWithPostingRule:(id)arg1 withRecordHandler:(id /* block */)arg2;
- (BOOL)stop;
- (void)cancel;
- (void)setupScene:(id)arg1;
- (unsigned long long)sceneID;
- (void)setSceneID:(unsigned long long)arg1;
- (id)analysisPolicy;
- (void)setAnalysisPolicy:(id)arg1;
- (id)userID;
- (void)setUserID:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id /* block */)recordHandler;
- (void)setRecordHandler:(id /* block */)arg1;
- (BOOL)isAnalysing;
- (void)setIsAnalysing:(BOOL)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (id)postRole;
- (void)setPostRole:(id)arg1;
- (unsigned long long)queryType;
- (void)setQueryType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
