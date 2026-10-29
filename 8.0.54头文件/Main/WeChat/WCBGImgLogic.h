@interface WCBGImgLogic : MMObject <WCLogicMgrDelegate, WCFacadeExt>
{
    id <WCBGImgLogicNotity> m_delFacade; // +0x8
    WCDataItem * m_lastUploadingDataItem; // +0x10
    NSMutableDictionary * m_bgUserInfoDictionary; // +0x18
    NSMutableDictionary * m_coverDataItemDictionary; // +0x20
    NSString * m_lastDownloadMediaID; // +0x28
    BOOL _videoCoverEnabled; // +0x30
    WCLogicMgr * _logicMgr; // +0x38
}
+ (id)middleSquareImage:(id)arg1;
- (id)init;
- (id)bgUserInfoDictionary;
- (id)coverDataItemDictionary;
- (void)cleanCache;
- (id)cachedCoverDataItemForUsername:(id)arg1;
- (BOOL)updateCachedCoverDataItem:(id)arg1 forUsername:(id)arg2;
- (id)hashForImageUrl:(id)arg1;
- (id)generateBGUserInfoFromDataItem:(id)arg1;
- (BOOL)equalCoverInfoInUserInfo1:(id)arg1 userInfo2:(id)arg2;
- (void)updateVideoCoverConfigurations;
- (id)fetchMyUploadingCoverDataItem;
- (id)fetchCoverDataItemForContact:(id)arg1;
- (void)saveSelfWCBackground:(id)arg1;
- (void)trySaveSelfWCBackground:(id)arg1;
- (id)tryLoadSelfWCBackground;
- (id)coverDataItemByContact:(id)arg1;
- (id)backgroundImageByContact:(id)arg1;
- (id)loadBackgroundImageFromMediaItem:(id)arg1;
- (id)signatureForContact:(id)arg1;
- (void)downloadBackgroundImageForContact:(id)arg1 withMediaItem:(id)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)SetBGImgByMedia:(id)arg1;
- (void)setCoverWithFinderDataItem:(id)arg1 image:(id)arg2 options:(id)arg3;
- (void)SetBGImgByImg:(id)arg1;
- (void)SetBGBySightDraft:(id)arg1;
- (void)updateLastUploadDataItem;
- (BOOL)hasBGImg:(id)arg1;
- (BOOL)isBGImgLikedForUser:(id)arg1;
- (void)setBGImgLikedForUser:(id)arg1 source:(long long)arg2;
- (void)setBGImgUnlikedForUser:(id)arg1 source:(long long)arg2;
- (void)updateUserInfo:(id)arg1 forUsername:(id)arg2;
- (void)userInfoDidChange:(id)arg1 forUsername:(id)arg2;
- (void)requestCoverDataItemWithContact:(id)arg1;
- (void)requestCoverDataItemIfNeededWithContact:(id)arg1;
- (void)updateContactBGUserInfo:(id)arg1;
- (void)updateCoverInfoForContact:(id)arg1;
- (void)updateWCFlagForContact:(id)arg1;
- (BOOL)validateSecurityWithMediaItem:(id)arg1;
- (BOOL)validateSecurityWithContact:(id)arg1;
- (BOOL)validateSecurityWithUserInfo:(id)arg1;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (id)logicMgr;
- (id)m_delFacade;
- (void)setM_delFacade:(id)arg1;
- (BOOL)videoCoverEnabled;
- (void)setVideoCoverEnabled:(BOOL)arg1;
- (void)setLogicMgr:(id)arg1;
- (void).cxx_destruct;
@end

