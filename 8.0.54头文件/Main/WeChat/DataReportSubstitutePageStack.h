@interface DataReportSubstitutePageStack : NSObject
{
    NSMutableArray * m_pageStack; // +0x8
}
- (id)init;
- (void)pushPageStack:(id)arg1;
- (id)getTopPage;
- (id)getBottomPage;
- (id)getAfterStackPages:(id)arg1;
- (id)getAllStackPages;
- (BOOL)isInStack:(id)arg1;
- (id)popStackPage;
- (id)popStackPages:(id)arg1;
- (id)popAllStackPages;
- (unsigned long long)getStackSize;
- (long long)getStackDeep:(id)arg1;
- (void).cxx_destruct;
@end

