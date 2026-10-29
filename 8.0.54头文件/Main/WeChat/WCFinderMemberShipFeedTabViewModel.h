@interface WCFinderMemberShipFeedTabViewModel : NSObject <WCFinderPostDataItemExt, WCFinderDataItemExt, WCFinderMemberShipZoneTabModelProtocol>
{
    BOOL _isAuthor; // +0x8
    BOOL _continueFlag; // +0x9
    BOOL _isFetchingData; // +0xa
    id <WCFinderMemberShipFeedTabViewModelDelegate> _delegate; // +0x10
    id <WCFinderMemberShipFeedTabViewModelDelegate> _detailDelegate; // +0x18
    unsigned long long _unreadCount; // +0x20
    unsigned long long _totalCount; // +0x28
    NSMutableArray * _contentVMS; // +0x30
    unsigned long long _state; // +0x38
    NSData * _lastBuffer; // +0x40
    NSString * _finderUsername; // +0x48
    WCFinderMemberCollectionInfo * _memberCollectionInfo; // +0x50
    NSString * _finderMemberTicket; // +0x58
    NSMutableSet * _tidContainSet; // +0x60
}
- (id)initWithFinderMemberTicket:(id)arg1 finderUsername:(id)arg2 isAuthor:(BOOL)arg3 initializeDataItems:(id)arg4;
- (id)tabName;
- (Class)tabControllerClass;
- (id)tabPageIdentifier;
- (unsigned long long)tabUnreadCount;
- (void)clearTabUnreadCount;
- (void)updateState;
- (void)getLocalFirstPageData;
- (void)requestFirstPage;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (long long)indexOfTid:(id)arg1;
- (id)contentVMAtDataIndex:(unsigned long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)setupInitilizeDataItems:(id)arg1;
- (void)onGetDataArray:(id)arg1 pullFromTop:(BOOL)arg2 lastBuff:(id)arg3 continueFlag:(BOOL)arg4;
- (id)contentVMS;
- (BOOL)enableReceivePostDataItem:(id)arg1;
- (void)onMemberShipFeedPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onMemberShipFeedPostSessionUpLoadSuccessful:(id)arg1;
- (void)onMemberShipFeedPostSessionStartUpload:(id)arg1;
- (void)insertPostDataItem:(id)arg1 insertIndex:(long long)arg2;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)changeContentVM:(id)arg1 stickyTopStatus:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detailDelegate;
- (void)setDetailDelegate:(id)arg1;
- (unsigned long long)unreadCount;
- (void)setUnreadCount:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (void)setContentVMS:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)memberCollectionInfo;
- (void)setMemberCollectionInfo:(id)arg1;
- (id)finderMemberTicket;
- (void)setFinderMemberTicket:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (void).cxx_destruct;
@end

