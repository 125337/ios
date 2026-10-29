@interface TextState3rdPartyLiveHandler : TextState3rdPartyBaseHandler
{
    WCFinderLiveShareItem * _liveShareItem; // +0x8
}
+ (id)liveShareItemFromXML:(id)arg1;
- (BOOL)supportCustomMedia;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (unsigned int)type;
- (id)title;
- (id)headImageView;
- (BOOL)preferCustomView;
- (id)customView;
- (id)name;
- (BOOL)useCoverForContent;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (BOOL)doHeadImageActionWithViewController:(id)arg1;
- (id)mediaContentView;
- (id)mediaCoverView;
- (BOOL)allowReferBackground;
- (id)mediaDescription;
- (BOOL)autoHandleAppLifeCycleEvent;
- (id)reportActivityId;
- (id)convertToStatusPublishMediaInfos;
- (id)liveShareItem;
- (void)setLiveShareItem:(id)arg1;
- (void).cxx_destruct;
@end
