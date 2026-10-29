@interface CBTAsstMomentView : UIView <ICBTMomentExt, CBTMomentListTableViewDelegate>
{
    BOOL _hasNoMoreCommonMoments; // +0x8
    BOOL _isFetchingCommonMoments; // +0x9
    ChatBotVoIPRoomInfo * _roomInfo; // +0x10
    id <CBTAsstMomentViewDelegate> _delegate; // +0x18
    CBTMomentListTableView * _momentTableView; // +0x20
    CBTMomentUnreadInteractionBanner * _unreadInteractionBanner; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 roomInfo:(id)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (void)layoutMomentTableView;
- (void)dealloc;
- (void)checkUnreadInteractionBanner;
- (id)tableView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onLoadMoments:(int)arg1 momentModel:(id)arg2 isFirstLoad:(BOOL)arg3 cursorId:(id)arg4;
- (void)onRecvNewInteraction;
- (void)onUnreadInteractionCountUpdate;
- (void)onMomentItemUpdate:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)momentTableView;
- (void)setMomentTableView:(id)arg1;
- (BOOL)hasNoMoreCommonMoments;
- (void)setHasNoMoreCommonMoments:(BOOL)arg1;
- (BOOL)isFetchingCommonMoments;
- (void)setIsFetchingCommonMoments:(BOOL)arg1;
- (id)unreadInteractionBanner;
- (void)setUnreadInteractionBanner:(id)arg1;
- (void).cxx_destruct;
@end
