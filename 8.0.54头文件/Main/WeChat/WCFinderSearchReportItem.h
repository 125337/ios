@interface WCFinderSearchReportItem : NSObject
{
    NSString * _queryText; // +0x8
    NSString * _reqId; // +0x10
    NSString * _content; // +0x18
}
- (id)queryText;
- (void)setQueryText:(id)arg1;
- (id)reqId;
- (void)setReqId:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end

