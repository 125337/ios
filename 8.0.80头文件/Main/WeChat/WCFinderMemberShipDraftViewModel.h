@interface WCFinderMemberShipDraftViewModel : NSObject <WCFinderFeedDraftExt, WCFinderMemberShipZoneTabModelProtocol>
{
    BOOL _continueFlag; // +0x8
    BOOL _isFetchingData; // +0x9
    id <WCFinderMemberShipDraftViewModelDelegate> _delegate; // +0x10
    unsigned long long _unreadCount; // +0x18
    unsigned long long _totalCount; // +0x20
    NSMutableArray * _contentVMS; // +0x28
    unsigned long long _state; // +0x30
    NSData * _lastBuffer; // +0x38
    NSString * _finderUsername; // +0x40
    NSMutableSet * _tidContainSet; // +0x48
}
- (id)initWithFinderUsername:(id)arg1;
- (id)tabName;
- (Class)tabControllerClass;
- (id)tabPageIdentifier;
- (unsigned long long)tabUnreadCount;
- (void)clearTabUnreadCount;
- (id)contentVMS;
- (void)requestFirstPage;
- (void)getLocalFirstPageData;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (void)updateState;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)onGetDataArray:(id)arg1 pullFromTop:(BOOL)arg2 lastBuff:(id)arg3 continueFlag:(BOOL)arg4;
- (long long)indexOfDraftId:(id)arg1;
- (id)draftVMItemWithDraftId:(id)arg1;
- (id)draftVMAtDataIndex:(unsigned long long)arg1;
- (void)deleteItem:(id)arg1 callback:(id /* block */)arg2;
- (void)retryItem:(id)arg1;
- (void)onMembershipFeedDraftDeleted:(id)arg1;
- (id)createDraftVM:(id)arg1;
- (void)onMembershipFeedDraftAdded:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)unreadCount;
- (void)setUnreadCount:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (void)setContentVMS:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (void).cxx_destruct;
@end
