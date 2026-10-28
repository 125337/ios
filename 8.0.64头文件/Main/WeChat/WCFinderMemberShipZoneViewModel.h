@interface WCFinderMemberShipZoneViewModel : WCFinderMemberShipBaseVM <ForwardMessageLogicDelegate, WCFinderMemberShipFeedTabViewModelDelegate, WCFinderMemberShipPlaybackTabViewModelDelegate, WCFinderMemberShipDraftViewModelDelegate>
{
    BOOL _isBlocked; // +0x8
    NSMutableArray * _tabModels; // +0x10
    id <WCFinderMemberShipZoneViewModelDelegate> _delegate; // +0x18
    WCFinderMemberShipZonePushParams * _params; // +0x20
    WCFinderMemberShipZoneHeaderData * _headerData; // +0x28
    WCFinderContact * _contact; // +0x30
    unsigned long long _memberShipStatus; // +0x38
    unsigned long long _unsubscribeMsId; // +0x40
    ForwardMessageLogicController * _forwardLogic; // +0x48
    unsigned long long _visitorStatus; // +0x50
    WCFinderMemberShipFeedTabViewModel * _feedTabViewModel; // +0x58
    WCFinderMemberShipPlaybackTabViewModel * _playbackTabViewModel; // +0x60
    WCFinderMemberShipDraftViewModel * _draftViewModel; // +0x68
    WCFinderMemberShipActivityViewModel * _activityViewModel; // +0x70
    WCFinderMemberShipHomePageViewModel * _homePageViewModel; // +0x78
}
- (id)blockTitleStr;
- (id)blockDescStr;
- (id)initWithParams:(id)arg1;
- (void)getLocalDatas;
- (void)getRemoteDatas;
- (void)onGetDetailInfo:(id)arg1;
- (unsigned long long)getDraftTabIndex;
- (unsigned long long)getPlaybackTabIndex;
- (unsigned long long)getVideoTabIndex;
- (unsigned long long)getDiscussionTabIndex;
- (long long)getDiscussionTabDataCount;
- (unsigned long long)getHomePageTabIndex;
- (void)removeDraftTabModels;
- (void)shareNameCardToFriend;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)handleLiveNoticeForUser:(id)arg1;
- (void)checkShouldShowConcertTicketAfterFirstReservation:(id)arg1;
- (id)headerData;
- (BOOL)isAuthorPerspective;
- (int)profileEnterType;
- (int)currentCommentScene;
- (void)finderMemberShipZoneFeedTabViewFetchListSuc;
- (void)finderMemberShipZonePlaybackTabViewFetchListSuc;
- (void)finderMemberShipZoneDraftTabViewFetchListSuc;
- (void)finderMemberShipZoneDraftTabInsertItemAtIdx:(long long)arg1;
- (void)finderMemberShipZoneDraftTabDataChanged;
- (void)requestSearchData:(unsigned long long)arg1;
- (id)tabModels;
- (void)setTabModels:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void)setHeaderData:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)memberShipStatus;
- (void)setMemberShipStatus:(unsigned long long)arg1;
- (unsigned long long)unsubscribeMsId;
- (void)setUnsubscribeMsId:(unsigned long long)arg1;
- (BOOL)isBlocked;
- (void)setIsBlocked:(BOOL)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (unsigned long long)visitorStatus;
- (void)setVisitorStatus:(unsigned long long)arg1;
- (id)feedTabViewModel;
- (void)setFeedTabViewModel:(id)arg1;
- (id)playbackTabViewModel;
- (void)setPlaybackTabViewModel:(id)arg1;
- (id)draftViewModel;
- (void)setDraftViewModel:(id)arg1;
- (id)activityViewModel;
- (void)setActivityViewModel:(id)arg1;
- (id)homePageViewModel;
- (void)setHomePageViewModel:(id)arg1;
- (void).cxx_destruct;
@end
