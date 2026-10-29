@interface WCTopicReportBaseItem : NSObject
{
    unsigned long long _actionTimeStamp; // +0x8
    long long _shareScene; // +0x10
    NSString * _shareSceneId; // +0x18
    long long _shareCreateTime; // +0x20
    long long _enterSource; // +0x28
    NSString * _sessionId; // +0x30
    NSString * _searchId; // +0x38
    NSString * _requestId; // +0x40
    unsigned long long _bizType; // +0x48
    unsigned long long _subType; // +0x50
    unsigned long long _pageType; // +0x58
    unsigned long long _accountType; // +0x60
    NSString * _docId; // +0x68
    NSString * _queryKey; // +0x70
    NSString * _talkerUsername; // +0x78
    NSString * _senderUsername; // +0x80
}
- (unsigned long long)actionTimeStamp;
- (void)setActionTimeStamp:(unsigned long long)arg1;
- (long long)shareScene;
- (void)setShareScene:(long long)arg1;
- (id)shareSceneId;
- (void)setShareSceneId:(id)arg1;
- (long long)shareCreateTime;
- (void)setShareCreateTime:(long long)arg1;
- (long long)enterSource;
- (void)setEnterSource:(long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (unsigned long long)subType;
- (void)setSubType:(unsigned long long)arg1;
- (unsigned long long)pageType;
- (void)setPageType:(unsigned long long)arg1;
- (unsigned long long)accountType;
- (void)setAccountType:(unsigned long long)arg1;
- (id)docId;
- (void)setDocId:(id)arg1;
- (id)queryKey;
- (void)setQueryKey:(id)arg1;
- (id)talkerUsername;
- (void)setTalkerUsername:(id)arg1;
- (id)senderUsername;
- (void)setSenderUsername:(id)arg1;
- (void).cxx_destruct;
@end

