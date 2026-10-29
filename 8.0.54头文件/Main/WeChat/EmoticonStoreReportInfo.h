@interface EmoticonStoreReportInfo : NSObject
{
    unsigned long long _searchId; // +0x8
    unsigned long long _docId; // +0x10
    unsigned long long _sessionId; // +0x18
    long long _index; // +0x20
    NSString * _info; // +0x28
    unsigned long long _pageScene; // +0x30
    unsigned long long _thirdPartyLinkId; // +0x38
    unsigned long long _thirdPartyLinkStatus; // +0x40
    NSString * _thirdPartyLinkReportInfo; // +0x48
    NSString * _reqId; // +0x50
}
- (unsigned long long)searchId;
- (void)setSearchId:(unsigned long long)arg1;
- (unsigned long long)docId;
- (void)setDocId:(unsigned long long)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (unsigned long long)pageScene;
- (void)setPageScene:(unsigned long long)arg1;
- (unsigned long long)thirdPartyLinkId;
- (void)setThirdPartyLinkId:(unsigned long long)arg1;
- (unsigned long long)thirdPartyLinkStatus;
- (void)setThirdPartyLinkStatus:(unsigned long long)arg1;
- (id)thirdPartyLinkReportInfo;
- (void)setThirdPartyLinkReportInfo:(id)arg1;
- (id)reqId;
- (void)setReqId:(id)arg1;
- (void).cxx_destruct;
@end

