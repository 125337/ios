@interface KvReportItem27268 : KvReportBaseItem
{
    unsigned int _IsRetrieved_21; // +0x8
    unsigned int _Style_22; // +0xc
    unsigned int _RetrieveType_23; // +0x10
    unsigned int _StyleInfo_26; // +0x14
    unsigned int _ShowFinder_27; // +0x18
    NSString * _FinderId_24; // +0x20
    NSString * _feedid_25; // +0x28
    NSString * _sessionid_28; // +0x30
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)IsRetrieved_21;
- (void)setIsRetrieved_21:(unsigned int)arg1;
- (unsigned int)Style_22;
- (void)setStyle_22:(unsigned int)arg1;
- (unsigned int)RetrieveType_23;
- (void)setRetrieveType_23:(unsigned int)arg1;
- (id)FinderId_24;
- (void)setFinderId_24:(id)arg1;
- (id)feedid_25;
- (void)setFeedid_25:(id)arg1;
- (unsigned int)StyleInfo_26;
- (void)setStyleInfo_26:(unsigned int)arg1;
- (unsigned int)ShowFinder_27;
- (void)setShowFinder_27:(unsigned int)arg1;
- (id)sessionid_28;
- (void)setSessionid_28:(id)arg1;
- (void).cxx_destruct;
@end
