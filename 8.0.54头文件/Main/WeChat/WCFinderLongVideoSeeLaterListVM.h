@interface WCFinderLongVideoSeeLaterListVM : NSObject <WCFinderSeeLaterExt>
{
    WCFinderFeedArray * _feedArray; // +0x8
    WCFinderListLoadingStateModel * _loadingState; // +0x10
    NSData * _lastBuffer; // +0x18
    NSString * _fromSessionID; // +0x20
    NSMutableDictionary * _cellHeightDict; // +0x28
}
- (id)init;
- (id)initWithInitialData:(id)arg1 lastBuffer:(id)arg2 continueFlag:(BOOL)arg3 fromSessionID:(id)arg4;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)contentVMWithIndexPath:(id)arg1;
- (id)snapshot;
- (void)requestFirstPageIfNeed;
- (void)requestNextPage;
- (void)requestData:(unsigned long long)arg1;
- (int)commentScene;
- (void)onSeeLaterStateChanged:(BOOL)arg1 withDataItem:(id)arg2;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)fromSessionID;
- (void)setFromSessionID:(id)arg1;
- (id)cellHeightDict;
- (void)setCellHeightDict:(id)arg1;
- (void).cxx_destruct;
@end

