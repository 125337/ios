@interface WCImageSearchReportModel : WCSearchReportModel
{
    int _cgiRet; // +0x38
    long long _action; // +0x40
    long long _source; // +0x48
    NSString * _picMD5; // +0x50
    NSString * _cgiAction; // +0x58
    NSString * _sourceURL; // +0x60
    NSString * _searchID; // +0x68
    NSString * _docID; // +0x70
    NSString * _reqKey; // +0x78
}
+ (id)GenMsgReporterWithAction:(long long)arg1 requestId:(id)arg2 source:(long long)arg3 scene:(unsigned int)arg4 msgWrap:(id)arg5;
+ (id)GenTimelineReporterWithAction:(long long)arg1 requestId:(id)arg2 source:(long long)arg3 scene:(unsigned int)arg4 snsItem:(id)arg5 chatType:(unsigned long long)arg6 picMD5:(id)arg7;
- (id)initWithMsgWrap:(id)arg1;
- (unsigned int)reportKvId;
- (id)reportContent;
- (void)reportImageOperation:(unsigned long long)arg1;
- (void)doReport:(long long)arg1;
- (void)doReport;
- (long long)action;
- (void)setAction:(long long)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (id)picMD5;
- (void)setPicMD5:(id)arg1;
- (int)cgiRet;
- (void)setCgiRet:(int)arg1;
- (id)cgiAction;
- (void)setCgiAction:(id)arg1;
- (id)sourceURL;
- (void)setSourceURL:(id)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (id)docID;
- (void)setDocID:(id)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (void).cxx_destruct;
@end
