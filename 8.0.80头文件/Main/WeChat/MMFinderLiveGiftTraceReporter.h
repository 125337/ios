@interface MMFinderLiveGiftTraceReporter : NSObject
{
    BOOL _isAnchor; // +0x8
    unsigned long long _liveId; // +0x10
    unsigned long long _feedId; // +0x18
    NSMutableSet * _reportedKeys; // +0x20
    NSMutableDictionary * _comboFirstMs; // +0x28
    NSMutableDictionary * _comboClickMs; // +0x30
    NSMutableDictionary * _comboLastMs; // +0x38
    NSObject<OS_dispatch_queue> * _reporterQueue; // +0x40
}
+ (id)reporterByTaskID:(id)arg1;
- (id)initWithLiveId:(unsigned long long)arg1 isAnchor:(BOOL)arg2 feedId:(unsigned long long)arg3;
- (void)dealloc;
- (id)sanitizeField:(id)arg1;
- (void)reportFirstStage:(long long)arg1 role:(long long)arg2 productId:(id)arg3 comboId:(id)arg4 requestId:(id)arg5 clientMsgId:(id)arg6 billNo:(id)arg7 isSelfReceive:(BOOL)arg8 errCode:(int)arg9 extra:(id)arg10;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)feedId;
- (void)setFeedId:(unsigned long long)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (id)reportedKeys;
- (void)setReportedKeys:(id)arg1;
- (id)comboFirstMs;
- (void)setComboFirstMs:(id)arg1;
- (id)comboClickMs;
- (void)setComboClickMs:(id)arg1;
- (id)comboLastMs;
- (void)setComboLastMs:(id)arg1;
- (id)reporterQueue;
- (void)setReporterQueue:(id)arg1;
- (void).cxx_destruct;
@end
