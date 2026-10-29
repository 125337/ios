@interface FTSVoiceSearchReportInfo : NSObject
{
    unsigned int _actionId; // +0x8
    unsigned int _scene; // +0xc
    unsigned int _businessType; // +0x10
    unsigned int _sceneType; // +0x14
    NSString * _sessionId; // +0x18
    NSString * _searchId; // +0x20
    NSString * _extInfo; // +0x28
    NSString * _query; // +0x30
    NSString * _itemInfo; // +0x38
    NSString * _docInfo; // +0x40
}
- (void)report;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (unsigned int)actionId;
- (void)setActionId:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (unsigned int)sceneType;
- (void)setSceneType:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)itemInfo;
- (void)setItemInfo:(id)arg1;
- (id)docInfo;
- (void)setDocInfo:(id)arg1;
- (void).cxx_destruct;
@end
