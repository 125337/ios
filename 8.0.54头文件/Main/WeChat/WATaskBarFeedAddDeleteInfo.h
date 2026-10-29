@interface WATaskBarFeedAddDeleteInfo : NSObject
{
    NSString * _sessionId; // +0x8
    unsigned long long _actionType; // +0x10
    unsigned long long _actionChannel; // +0x18
    unsigned long long _contentType; // +0x20
    NSString * _contentId; // +0x28
    unsigned long long _liveDuration; // +0x30
    unsigned long long _page; // +0x38
    unsigned long long _indexFrom; // +0x40
    unsigned long long _indexTo; // +0x48
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned long long)actionChannel;
- (void)setActionChannel:(unsigned long long)arg1;
- (unsigned long long)contentType;
- (void)setContentType:(unsigned long long)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (unsigned long long)liveDuration;
- (void)setLiveDuration:(unsigned long long)arg1;
- (unsigned long long)page;
- (void)setPage:(unsigned long long)arg1;
- (unsigned long long)indexFrom;
- (void)setIndexFrom:(unsigned long long)arg1;
- (unsigned long long)indexTo;
- (void)setIndexTo:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

