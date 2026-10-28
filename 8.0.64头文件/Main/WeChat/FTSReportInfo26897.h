@interface FTSReportInfo26897 : NSObject
{
    unsigned int _actionId; // +0x8
    unsigned int _actionType; // +0xc
    unsigned int _h5Version; // +0x10
    unsigned int _scene; // +0x14
    unsigned int _businessType; // +0x18
    unsigned int _sceneType; // +0x1c
    unsigned int _isCache; // +0x20
    NSString * _sessionId; // +0x28
    NSString * _searchId; // +0x30
    NSString * _suggestionId; // +0x38
    NSString * _requestId; // +0x40
    NSString * _extInfo; // +0x48
    NSString * _query; // +0x50
    unsigned long long _timestampmssvr; // +0x58
    NSString * _itemInfo; // +0x60
    NSString * _docInfo; // +0x68
}
- (id)formatItemInfo;
- (id)formatDocInfo;
- (void)report;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (id)suggestionId;
- (void)setSuggestionId:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (unsigned int)actionId;
- (void)setActionId:(unsigned int)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (unsigned int)h5Version;
- (void)setH5Version:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (unsigned int)sceneType;
- (void)setSceneType:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (unsigned int)isCache;
- (void)setIsCache:(unsigned int)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned long long)timestampmssvr;
- (void)setTimestampmssvr:(unsigned long long)arg1;
- (id)itemInfo;
- (void)setItemInfo:(id)arg1;
- (id)docInfo;
- (void)setDocInfo:(id)arg1;
- (void).cxx_destruct;
@end
