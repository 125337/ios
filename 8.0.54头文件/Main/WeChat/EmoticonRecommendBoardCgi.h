@interface EmoticonRecommendBoardCgi : StoreEmotionBaseCgi
{
    unsigned int _source; // +0x8
    unsigned int _startTime; // +0xc
    NSString * _queryString; // +0x10
    NSString * _chatId; // +0x18
    NSString * _sessionId; // +0x20
    unsigned long long _scene; // +0x28
    id <EmoticonRecommendBoardCgiDelegate> _delegate; // +0x30
    NSArray * _recommendWraps; // +0x38
    NSArray * _contexts; // +0x40
    NSData * _pageBuffer; // +0x48
    NSData * _localEmoji; // +0x50
}
- (id)initWithQueryString:(id)arg1 scene:(unsigned long long)arg2 chatId:(id)arg3 sessionId:(id)arg4 contexts:(id)arg5;
- (id)initWithQueryString:(id)arg1 scene:(unsigned long long)arg2 sessionId:(id)arg3 localEmoji:(id)arg4;
- (BOOL)canStartRequest;
- (BOOL)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)doReportWithErrorCode:(int)arg1 isExpired:(BOOL)arg2;
- (id)queryString;
- (void)setQueryString:(id)arg1;
- (id)chatId;
- (void)setChatId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recommendWraps;
- (void)setRecommendWraps:(id)arg1;
- (id)contexts;
- (void)setContexts:(id)arg1;
- (id)pageBuffer;
- (void)setPageBuffer:(id)arg1;
- (id)localEmoji;
- (void)setLocalEmoji:(id)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

