@interface AmoebaSubstitutePageStack : NSObject
{
    NSMutableArray * m_pageStack; // +0x8
    NSMutableArray * m_subPages; // +0x10
}
- (id)init;
- (id)getStackPageByObj:(id)arg1 needCreate:(BOOL)arg2;
- (id)getStackPageByHash:(unsigned long long)arg1;
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
- (void)addSubPage:(id)arg1;
- (BOOL)removeStackPage:(id)arg1;
- (id)printAllPageInfo;
- (void).cxx_destruct;
@end
