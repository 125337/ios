@interface NewLifeScrollActionSheet : MMScrollActionSheet <ForwardMessageLogicDelegate, RecentForwardScrollViewDelegate, WCCommitViewResultDelegate>
{
    BOOL _isRecentForward; // +0x8
    BOOL _author; // +0x9
    BOOL _isInnerUser; // +0xa
    id /* block */ _callbackHandler; // +0x10
    id /* block */ _forwardCompletion; // +0x18
    NewLifeFeedScrollActionDelegateObject * _delegateObj; // +0x20
    WCFinderDataItem * _dataItem; // +0x28
    RecentForwardScrollView * _recentView; // +0x30
    CMessageWrap * _forwardMsg; // +0x38
    ForwardMessageLogicController * _forwardLogic; // +0x40
    NSArray * _statusWordingList; // +0x48
    NSData * _thumbData; // +0x50
}
+ (id)getForwardExtraInfo:(id)arg1;
- (void)onDataItemForwarded;
- (id)initWithDataItem:(id)arg1 isAuthor:(BOOL)arg2 isInnerUser:(BOOL)arg3 thumbData:(id)arg4;
- (id)delegateObj;
- (BOOL)isSelf;
- (BOOL)isPrivated;
- (BOOL)isStickyTop;
- (BOOL)isLocal;
- (id)allItemRows;
- (id)firstRow;
- (id)secondRow;
- (void)addBodyFooterView;
- (id)forwardItem;
- (id)momentsForwardItem;
- (id)shareMPFeedToTimeline:(id)arg1 title:(id)arg2 desc:(id)arg3 thumbData:(id)arg4 size:(CGSize)arg5;
- (id)favoriteItem;
- (id)debugItem;
- (id)topItem;
- (id)deleteItem;
- (id)publicItem;
- (id)editItem;
- (id)heartItem;
- (id)unlikeItem;
- (id)compliantItem;
- (void)showDoneTips:(id)arg1;
- (void)showErrorTips:(id)arg1;
- (void)callback:(int)arg1 isSuccess:(BOOL)arg2;
- (void)callback:(int)arg1 isSuccess:(BOOL)arg2 extraInfo:(id)arg3;
- (id)itemImageDisableColor;
- (id)recentView;
- (BOOL)isEditItemVisible;
- (BOOL)isHeartItemVisible;
- (BOOL)isLocalPreview;
- (BOOL)isActionTypeEnable:(int)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (id)forwardMsg;
- (id)forwardLogic;
- (void)directForwardMsg;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (id /* block */)callbackHandler;
- (void)setCallbackHandler:(id /* block */)arg1;
- (id /* block */)forwardCompletion;
- (void)setForwardCompletion:(id /* block */)arg1;
- (BOOL)isAuthor;
- (void)setAuthor:(BOOL)arg1;
- (BOOL)isInnerUser;
- (void)setIsInnerUser:(BOOL)arg1;
- (void)setDelegateObj:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setRecentView:(id)arg1;
- (void)setForwardMsg:(id)arg1;
- (void)setForwardLogic:(id)arg1;
- (id)statusWordingList;
- (void)setStatusWordingList:(id)arg1;
- (id)thumbData;
- (void)setThumbData:(id)arg1;
- (void).cxx_destruct;
@end

