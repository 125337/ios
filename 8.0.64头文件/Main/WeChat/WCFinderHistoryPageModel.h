@interface WCFinderHistoryPageModel : NSObject <WCFinderInteractiveTab>
{
    int _tabType; // +0x8
    int _scene; // +0xc
    int _supportItemFlag; // +0x10
    NSString * _title; // +0x18
    NSString * _iconName; // +0x20
    NSString * _selectedItemName; // +0x28
    WCFinderStreamLoadingState * _loadingState; // +0x30
    unsigned long long _requestId; // +0x38
    NSString * _noMoreTips; // +0x40
    id /* block */ _historyRecordDayUpdateBlock; // +0x48
}
+ (id)formatHistoryTime:(long long)arg1;
+ (void)requestFeedForList:(id)arg1 feedArray:(id)arg2 page:(id)arg3;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 selectedIcon:(id)arg3 scene:(int)arg4 tabType:(int)arg5 supportItemFlag:(int)arg6;
- (BOOL)hasContent;
- (void)setNoMoreTips:(id)arg1;
- (void)doRequestFirstPage:(id /* block */)arg1;
- (void)doRequestNextPage:(id /* block */)arg1;
- (void)requestFirstPage:(id /* block */)arg1;
- (void)requestNextPage:(id /* block */)arg1;
- (void)onClear;
- (void)onDeleteFeed:(id)arg1;
- (void)dispatchRequest:(id /* block */)arg1 complete:(id /* block */)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)selectedItemName;
- (void)setSelectedItemName:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (id)noMoreTips;
- (id /* block */)historyRecordDayUpdateBlock;
- (void)setHistoryRecordDayUpdateBlock:(id /* block */)arg1;
- (int)supportItemFlag;
- (void)setSupportItemFlag:(int)arg1;
- (void).cxx_destruct;
@end
