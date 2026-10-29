@interface MicroMerchantTableViewModel : NSObject
{
    BOOL _isUnfoldEnabled; // +0x8
    BOOL _isUnfolded; // +0x9
    WCDataItem * _placeHolder; // +0x10
    WCMicroMerchantFeedsGroup * _wcGroup; // +0x18
    CContact * _placeHolderContact; // +0x20
    NSMutableDictionary * _preloadedImageSet; // +0x28
    WCTimeLineVideoPreloadMgr * _videoPreloadMgr; // +0x30
    NSArray * _initialWSFeedList; // +0x38
}
- (id)initWithGroupItem:(id)arg1 ofPlaceHolder:(id)arg2;
- (void)initDatas;
- (void)dealloc;
- (void)clearFeedListCache;
- (void)reloadDataFromServer:(id /* block */)arg1;
- (id)getDataItemInCache:(id)arg1;
- (id)dataItems;
- (id)_wsFeedListFromMgr;
- (BOOL)isLastSection:(long long)arg1;
- (long long)numberOfSections;
- (id)sectionFeedModel:(long long)arg1;
- (id)sectionFeedModelWithFeedID:(id)arg1;
- (unsigned long long)sectionIndexWithFeedID:(id)arg1;
- (void)preloadImageDatas:(id)arg1;
- (void)preloadVideoDatas:(id)arg1 lastAutoPlayID:(id)arg2;
- (void)stopPreloadVideoData:(id)arg1;
- (void)clearPreloadImage;
- (BOOL)canUnfoldTimeline;
- (BOOL)isCurrentTimelineUnfolded;
- (BOOL)unfoldCurrentTimeline;
- (id)unfoldButtonTitle;
- (id)alreadyUnfoldedTitle;
- (id)unfoldConfirmTitle;
- (id)_hostContactOfWCDataItem:(id)arg1;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (id)wcGroup;
- (void)setWcGroup:(id)arg1;
- (id)placeHolderContact;
- (void)setPlaceHolderContact:(id)arg1;
- (id)preloadedImageSet;
- (void)setPreloadedImageSet:(id)arg1;
- (id)videoPreloadMgr;
- (void)setVideoPreloadMgr:(id)arg1;
- (BOOL)isUnfoldEnabled;
- (void)setIsUnfoldEnabled:(BOOL)arg1;
- (BOOL)isUnfolded;
- (void)setIsUnfolded:(BOOL)arg1;
- (id)initialWSFeedList;
- (void)setInitialWSFeedList:(id)arg1;
- (void).cxx_destruct;
@end

