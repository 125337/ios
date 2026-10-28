@interface WAWebViewPageMgr : MMObject
{
    id <WAWebViewPageMgrDelegate> _delegate; // +0x8
    NSMutableArray * _pages; // +0x10
    NSMutableArray * _removedPages; // +0x18
    NSMutableArray * _stackPages; // +0x20
    NSMutableArray * _releasePool; // +0x28
    NSMutableArray * _dissociativePool; // +0x30
    WAAppTask * _task; // +0x38
}
- (id)initWithTask:(id)arg1;
- (void)pushWebViewPage:(id)arg1;
- (void)popWebViewPage:(id)arg1;
- (void)pageStackDidUpdate;
- (void)pushDissociativeWebViewPage:(id)arg1;
- (void)popDissociativeWebViewPage:(id)arg1;
- (void)checkStack;
- (void)checkReleasePool;
- (unsigned long long)pagesCount;
- (unsigned long long)webviewInPagesIndex:(id)arg1;
- (id)firstPage;
- (id)lastPage;
- (id)topMostPage;
- (id)prevPageFrom:(id)arg1;
- (BOOL)isTopMostPage:(id)arg1;
- (id)findPageBeforePage:(id)arg1;
- (id)pages;
- (id)allPages;
- (void)removeAllPageDelegates;
- (void)popAllWebViewPage;
- (void)popAllDissociativeWebview;
- (id)pagesStatusDescription;
- (unsigned int)contentProcessTerminatedPagesCount;
- (unsigned int)manuallyTerminatedPagesCount;
- (unsigned int)healthyPagesCount;
- (unsigned int)stackPagesCount;
- (unsigned long long)currentStackMode;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPages:(id)arg1;
- (id)removedPages;
- (void)setRemovedPages:(id)arg1;
- (id)stackPages;
- (void)setStackPages:(id)arg1;
- (id)releasePool;
- (void)setReleasePool:(id)arg1;
- (id)dissociativePool;
- (void)setDissociativePool:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (void).cxx_destruct;
@end
