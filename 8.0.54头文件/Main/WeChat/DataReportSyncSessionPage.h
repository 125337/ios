@interface DataReportSyncSessionPage : NSObject
{
    unsigned long long _pageHash; // +0x8
    NSString * _pageId; // +0x10
    NSString * _sourceViewId; // +0x18
}
- (BOOL)isEqualObject:(id)arg1;
- (id)toString;
- (unsigned long long)pageHash;
- (void)setPageHash:(unsigned long long)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)sourceViewId;
- (void)setSourceViewId:(id)arg1;
- (void).cxx_destruct;
@end

