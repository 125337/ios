@interface WCFinderLiveHomePageReportSession : NSObject
{
    BOOL _skipFeedsReport; // +0x8
    int _commentScene; // +0xc
    unsigned long long _fromLiveID; // +0x10
    NSString * _fromReportScene; // +0x18
    WCFinderLivePageStayReporter * _moreLiveReporter; // +0x20
    WCFinderLiveHomePageInitialParams * _initialParams; // +0x28
}
- (id)initWithCommentScene:(int)arg1 params:(id)arg2;
- (void)onSessionEnterFromSection:(id)arg1 feedVM:(id)arg2 index:(unsigned long long)arg3;
- (void)reportInteractiveHomePageAction:(unsigned long long)arg1 liveID:(unsigned long long)arg2;
- (void)report21053ExposeActionWithSection:(id)arg1 feedVM:(id)arg2 index:(unsigned long long)arg3;
- (void)report21053ClickActionWithSection:(id)arg1 feedVM:(id)arg2 index:(unsigned long long)arg3;
- (void)report21158NoticeActionFromContainerType:(unsigned long long)arg1 noticeAction:(long long)arg2 model:(id)arg3 columnId:(id)arg4 index:(unsigned long long)arg5;
- (void)report21158FollowNoticeHalfAction:(long long)arg1 feedVM:(id)arg2 sectionVM:(id)arg3;
- (void)report23057SectionListExpose:(unsigned long long)arg1 containerModel:(id)arg2;
- (void)report23057CardAction:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2 cardIndex:(unsigned long long)arg3 sectionVM:(id)arg4 feedVM:(id)arg5;
- (void)reportLiveFeedFriendLikeRecommendReason:(id)arg1 actionType:(unsigned long long)arg2;
- (void)reportLiveFeedFriendLikeHalfExpose:(id)arg1 likeCount:(unsigned long long)arg2;
- (void)reportLiveFeedFriendLikeHalfClose:(id)arg1 likeCount:(unsigned long long)arg2;
- (void)report23057JumperAction:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2 containerModel:(id)arg3;
- (void)report23057MoreNavBtnAction:(unsigned long long)arg1;
- (void)report23057ShowConcertTicketActionWithModel:(id)arg1;
- (void)report23057ConcertNoticeCardAction:(unsigned long long)arg1 activityId:(id)arg2 eidUdfKv:(id)arg3;
- (void)report23057RightSearchAction:(unsigned long long)arg1;
- (void)report23057PersonalCenterBtnAction:(unsigned long long)arg1;
- (void)report23057ColumnMoreButtonAction:(unsigned long long)arg1 containerModel:(id)arg2;
- (void)report23057FollowColumnFoldBtnAction:(unsigned long long)arg1;
- (void)report23057ChatSingAction:(unsigned long long)arg1 info:(id)arg2;
- (void)reportNpsSurveyHalfExpose:(id)arg1;
- (void)reportNpsSurveyFullConfirm:(id)arg1;
- (void)reportNpsSurveyFullClose;
- (void)report23057SquareSwitchPanelAction:(unsigned long long)arg1 eid:(id)arg2;
- (void)report23057LiveCardRecallWithFeedVM:(id)arg1 cardIndex:(unsigned long long)arg2;
- (void)report22946EnterActionWithSource:(unsigned long long)arg1;
- (void)report22947QuitActionWithSource:(unsigned long long)arg1;
- (id)kvReportLiveRoomJsonDictWithSection:(id)arg1 feedVM:(id)arg2 index:(unsigned long long)arg3;
- (id)kvReportNoticeJsonDictWithContainerType:(unsigned long long)arg1 columnId:(id)arg2 index:(unsigned long long)arg3 noticeId:(id)arg4;
- (unsigned long long)mainPageReportPosition:(id)arg1;
- (void)updateSkipFeedsReport:(BOOL)arg1;
- (void)reportFeedExpose:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3 sectionVM:(id)arg4 pageIndex:(unsigned long long)arg5;
- (void)reportFeedExposeEnd:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3 sectionVM:(id)arg4;
- (void)updateFeedExpose:(id)arg1;
- (void)updateFeedExposeEnd:(id)arg1 index:(unsigned long long)arg2 sectionVM:(id)arg3;
- (void)updatePlayStateWithModel:(id)arg1 state:(unsigned long long)arg2 index:(unsigned long long)arg3 sectionVM:(id)arg4;
- (void)reportFeedAutoPlayIfNeeded:(id)arg1 play:(BOOL)arg2 index:(unsigned long long)arg3 sectionVM:(id)arg4;
- (void)cleanExposeCache;
- (void)bindNewExposeReport:(id)arg1 collectionView:(id)arg2 elementModel:(id)arg3 indexPath:(id)arg4 report0PercentExpose:(BOOL)arg5 getSectionVmBlock:(id /* block */)arg6;
- (void)reportNewValidRatioExposeStart:(id)arg1 cell:(id)arg2 indexPath:(id)arg3 collectionView:(id)arg4 sectionVM:(id)arg5 pageIndex:(unsigned long long)arg6;
- (void)reportNewValidRatioExposeEnd:(id)arg1 index:(unsigned long long)arg2 sectionVM:(id)arg3;
- (void)reportAggregationCardClick:(id)arg1;
- (void)reportAggregationCardAction:(int)arg1 feedVM:(id)arg2 effectiveExposeTimeMs:(unsigned long long)arg3 startEffectiveExposeTimeMs:(unsigned long long)arg4 exposeTimeMs:(unsigned long long)arg5;
- (void)reportFinderFeedActionType:(int)arg1 dataItem:(id)arg2 value:(id)arg3;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)fromLiveID;
- (void)setFromLiveID:(unsigned long long)arg1;
- (id)fromReportScene;
- (void)setFromReportScene:(id)arg1;
- (BOOL)skipFeedsReport;
- (void)setSkipFeedsReport:(BOOL)arg1;
- (id)moreLiveReporter;
- (void)setMoreLiveReporter:(id)arg1;
- (id)initialParams;
- (void)setInitialParams:(id)arg1;
- (void).cxx_destruct;
@end
