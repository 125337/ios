@interface AmbPageInfo : NSObject
{
    unsigned long long _pageId; // +0x8
    NSString * _pageName; // +0x10
    NSString * _bitmapToBase64; // +0x18
    AmbBindReportInfo * _bindReportInfo; // +0x20
    AmbViewNodeModel * _decorViewNode; // +0x28
}
- (id)init;
- (id)toDic;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)bitmapToBase64;
- (void)setBitmapToBase64:(id)arg1;
- (id)bindReportInfo;
- (void)setBindReportInfo:(id)arg1;
- (id)decorViewNode;
- (void)setDecorViewNode:(id)arg1;
- (void).cxx_destruct;
@end
