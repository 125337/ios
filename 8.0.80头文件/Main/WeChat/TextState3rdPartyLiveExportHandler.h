@interface TextState3rdPartyLiveExportHandler : TextState3rdPartyBaseHandler
{
    StatusFooterJumpLivePlayerByExportId * _liveInfo; // +0x8
    WCFinderLiveShareItem * _liveShareItem; // +0x10
    MMFinderLiveStatusIconShareView * _liveStatusView; // +0x18
    MMFinderLiveSharePlayerView * _livePlayerView; // +0x20
}
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (void)requestLiveShareItemWithEncryptedId:(id)arg1 nonceId:(id)arg2;
- (unsigned int)type;
- (id)title;
- (BOOL)preferCustomView;
- (id)customView;
- (id)name;
- (BOOL)useCoverForContent;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (BOOL)doHeadImageActionWithViewController:(id)arg1;
- (BOOL)supportCustomMedia;
- (id)mediaContentView;
- (BOOL)supportCustomCover;
- (BOOL)allowReferBackground;
- (id)mediaDescription;
- (BOOL)autoHandleAppLifeCycleEvent;
- (id)reportActivityId;
- (id)convertToStatusPublishMediaInfos;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (id)liveShareItem;
- (void)setLiveShareItem:(id)arg1;
- (id)liveStatusView;
- (void)setLiveStatusView:(id)arg1;
- (id)livePlayerView;
- (void)setLivePlayerView:(id)arg1;
- (void).cxx_destruct;
@end
