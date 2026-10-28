@interface WCStoryPageExposeReportObj : NSObject
{
    unsigned long long _pageType; // +0x8
    NSString * _tid; // +0x10
}
+ (void)ReportExposeWithPageType:(unsigned long long)arg1;
+ (void)ReportBubbleCommentListExposeWithTid:(id)arg1;
- (void)reportExpose;
- (unsigned long long)pageType;
- (void)setPageType:(unsigned long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (void).cxx_destruct;
@end
