@interface EmoticonRecommendPrefetchEntry : NSObject
{
    BOOL _localFinished; // +0x8
    BOOL _cgiFinished; // +0x9
    BOOL _notified; // +0xa
    BOOL _useLocalModel; // +0xb
    NSString * _chatName; // +0x10
    NSString * _sessionId; // +0x18
    NSString * _reportSessionId; // +0x20
    NSString * _contextSignature; // +0x28
    EmoticonRecommendBoardCgi * _inflightCgi; // +0x30
    EmoticonRecommendLocalCandidates * _localCandidates; // +0x38
    NSArray * _backendWraps; // +0x40
    unsigned long long _startTimeMs; // +0x48
    unsigned long long _readyTimeMs; // +0x50
    NSArray * _contextSegResult; // +0x58
    unsigned long long _contextFetchCount; // +0x60
    NSDictionary * _resultSourceMap; // +0x68
    NSArray * _chatNamesSnapshot; // +0x70
    unsigned long long _requestGeneration; // +0x78
}
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)contextSignature;
- (void)setContextSignature:(id)arg1;
- (id)inflightCgi;
- (void)setInflightCgi:(id)arg1;
- (id)localCandidates;
- (void)setLocalCandidates:(id)arg1;
- (id)backendWraps;
- (void)setBackendWraps:(id)arg1;
- (BOOL)localFinished;
- (void)setLocalFinished:(BOOL)arg1;
- (BOOL)cgiFinished;
- (void)setCgiFinished:(BOOL)arg1;
- (BOOL)notified;
- (void)setNotified:(BOOL)arg1;
- (unsigned long long)startTimeMs;
- (void)setStartTimeMs:(unsigned long long)arg1;
- (unsigned long long)readyTimeMs;
- (void)setReadyTimeMs:(unsigned long long)arg1;
- (id)contextSegResult;
- (void)setContextSegResult:(id)arg1;
- (unsigned long long)contextFetchCount;
- (void)setContextFetchCount:(unsigned long long)arg1;
- (id)resultSourceMap;
- (void)setResultSourceMap:(id)arg1;
- (id)chatNamesSnapshot;
- (void)setChatNamesSnapshot:(id)arg1;
- (BOOL)useLocalModel;
- (void)setUseLocalModel:(BOOL)arg1;
- (unsigned long long)requestGeneration;
- (void)setRequestGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
