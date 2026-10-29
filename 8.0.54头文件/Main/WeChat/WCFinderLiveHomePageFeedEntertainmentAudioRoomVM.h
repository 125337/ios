@interface WCFinderLiveHomePageFeedEntertainmentAudioRoomVM : WCFinderLiveGenericFeedVM <MMFinderLiveInfoMgrExt, MMFinderLiveFeedExtraInfoFetchExt>
{
    NSArray * _teamupList; // +0x8
    NSArray * _notificationList; // +0x10
    MMFinderLiveAudioRoomBackgroundImageInfo * _bgImageInfo; // +0x18
    WCFinderLiveHomePageFeedEntertainmentAudioRoomTalkingState * _talkingStatus; // +0x20
    NSString * _headImgUrl; // +0x28
}
- (id)initWithModel:(id)arg1 scene:(int)arg2 sessionExtraKey:(id)arg3 containerId:(unsigned long long)arg4 ctx:(id)arg5;
- (id)title;
- (void)updatePreviewInfo:(id)arg1;
- (void)loadBackgroundImageWithAvatarImage:(id)arg1 displayUrl:(id)arg2;
- (void)recvAnchorSeiInfo:(id)arg1;
- (void)updateOriginInfoItemList;
- (void)clearTalkingStatus;
- (void)onFinderLiveAudioRoomBackgroundImageInfoUpdated:(id)arg1 originalUrlString:(id)arg2;
- (void)onFeedEntertainmentCardUpdate:(unsigned long long)arg1 previewInfo:(id)arg2;
- (id)teamupList;
- (void)setTeamupList:(id)arg1;
- (id)notificationList;
- (void)setNotificationList:(id)arg1;
- (id)bgImageInfo;
- (void)setBgImageInfo:(id)arg1;
- (id)talkingStatus;
- (void)setTalkingStatus:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (void).cxx_destruct;
@end

