@interface WCFinderPersonalCenterOftenReadViewModel : NSObject
{
    BOOL _enable; // +0x8
    int _commentScene; // +0xc
    NSHashTable * _delegateList; // +0x10
    FinderGetOftenReadAuthorResp * _oftenContactResp; // +0x18
    NSString * _reportUUID; // +0x20
    NSMutableArray * _mContactList; // +0x28
    WCFinderStreamLoadingState * _loadingState; // +0x30
}
- (id)initWithCommentScene:(int)arg1;
- (id)contactList;
- (BOOL)hasMore;
- (BOOL)isLoading;
- (void)requestData;
- (void)requestNextPage;
- (void)_requestPageData;
- (id)mapToOftenContact:(id)arg1 contact:(id)arg2 index:(long long)arg3;
- (void)notifyChange;
- (void)markItemRead:(id)arg1;
- (void)requestRemoveContact:(id)arg1 complete:(id /* block */)arg2;
- (id)delegateList;
- (void)setDelegateList:(id)arg1;
- (id)oftenContactResp;
- (void)setOftenContactResp:(id)arg1;
- (id)reportUUID;
- (void)setReportUUID:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (id)mContactList;
- (void)setMContactList:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (void).cxx_destruct;
@end
