@interface DataReportViewExposeVisiableTools : NSObject <DataReportViewExposeExt>
{
    NSMapTable * _testMarkViews; // +0x8
    NSNumber * _testMarkViewSwitch; // +0x10
    unsigned long long _index; // +0x18
}
- (id)init;
- (void)dealloc;
- (BOOL)isTestMarkViewSwitch;
- (void)onViewExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)onViewUnExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)setViewExposeVisiableToolsSwitch:(BOOL)arg1;
- (void)removeView:(id)arg1;
- (id)testMarkViews;
- (void)setTestMarkViews:(id)arg1;
- (id)testMarkViewSwitch;
- (void)setTestMarkViewSwitch:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
