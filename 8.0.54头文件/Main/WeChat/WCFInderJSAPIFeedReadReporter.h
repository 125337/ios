@interface WCFInderJSAPIFeedReadReporter : NSObject <WCFinderStatReportShim>
{
    id /* block */ _reportAction; // +0x8
    NSMutableSet * _recards; // +0x10
}
+ (id)reportWithAction:(id /* block */)arg1;
- (id)init;
- (id)generateReportInfo;
- (void)commit;
- (id)popInfo;
- (void)onUpdateStatMetaModel:(id)arg1;
- (BOOL)filterShouldRecardStatMetaModel:(id)arg1;
- (id /* block */)reportAction;
- (void)setReportAction:(id /* block */)arg1;
- (id)recards;
- (void)setRecards:(id)arg1;
- (void).cxx_destruct;
@end

