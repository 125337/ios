@interface MMFinderGameLivePrepareLogic : NSObject
{
    unsigned int _scene; // +0x8
    unsigned int _opensdkVersion; // +0xc
    unsigned int _platformId; // +0x10
    NSMutableDictionary * _opensdkGameLiveExtInfo; // +0x18
    id <MMFinderGameLivePrepareLogicDelegate> _delegate; // +0x20
    NSString * _liveObjectExportId; // +0x28
    NSMutableArray * _gameUserInfoList; // +0x30
    NSArray * _gameCategoryList; // +0x38
    NSMutableArray * _gameSearchUserInfoList; // +0x40
    WCFinderDataItem * _finderDataItem; // +0x48
    WCFinderCreateCoordinator * _createCoordinator; // +0x50
    NSString * _extInfoAppId; // +0x58
    NSString * _appName; // +0x60
    NSString * _ticket; // +0x68
    NSString * _extraAntiInfo; // +0x70
    NSString * _gameUserId; // +0x78
    NSString * _dataFromGame; // +0x80
}
+ (BOOL)notValidForDifferentAccountWithExtInfo:(id)arg1;
+ (BOOL)isValidToJumpWithExtInfo:(id)arg1;
+ (BOOL)isValidToJumpFromOpenBusinessViewWithExtInfo:(id)arg1;
- (id)init;
- (id)initWithAppId:(id)arg1 opensdkVersion:(unsigned int)arg2 extInfoDic:(id)arg3 needFetchData:(BOOL)arg4;
- (void)initPropertyWithExtInfoDic:(id)arg1;
- (void)fetchDataWithAppId:(id)arg1;
- (void)jumpLiveForDifferentAccount;
- (void)jumpToGameLiveFromOpenSDKWithAppId:(id)arg1 rootVC:(id)arg2 extInfos:(id)arg3;
- (void)onJumpToGameLiveStarterPrepareWithAppId:(id)arg1 rootViewController:(id)arg2;
- (void)startFinderLiveWithAppid:(id)arg1 rootVC:(id)arg2;
- (void)internalStartLiveWithVC:(id)arg1 appId:(id)arg2;
- (void)jumpToLiveEnterWithExportId:(id)arg1 extParam:(id)arg2;
- (void)jumpToLiveEnterWithExportId:(id)arg1 extParam:(id)arg2 failure:(id /* block */)arg3;
- (void)jumpToLiveShareWithExportId:(id)arg1;
- (void)jumpToLiveFansWithExportId:(id)arg1;
- (void)jumpToMusicSettingWithExportId:(id)arg1 failure:(id /* block */)arg2;
- (void)jumpToPromoteWithExportId:(id)arg1 failure:(id /* block */)arg2;
- (void)jumpToShopShelfWithExportId:(id)arg1 failure:(id /* block */)arg2;
- (void)jumpToGame3DSettingWithExportId:(id)arg1 failure:(id /* block */)arg2;
- (void)jumpToPlayTogetherPanelWithExportId:(id)arg1 failure:(id /* block */)arg2;
- (void)jumpToPlayTogetherLiteAppPanelWithExportId:(id)arg1 failure:(id /* block */)arg2;
- (void)getGameUserInfoList;
- (void)getFilteredGameUserInfoWithAppId:(id)arg1;
- (void)getStickerStatusWithAppid:(id)arg1;
- (BOOL)isGameSearchUserInfoListContain:(id)arg1;
- (BOOL)haveFinderContact;
- (id)gameUserInfoList;
- (id)gameSearchUserInfoList;
- (id)opensdkGameLiveExtInfo;
- (void)setOpensdkGameLiveExtInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)liveObjectExportId;
- (void)setLiveObjectExportId:(id)arg1;
- (void)setGameUserInfoList:(id)arg1;
- (id)gameCategoryList;
- (void)setGameCategoryList:(id)arg1;
- (void)setGameSearchUserInfoList:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)extInfoAppId;
- (void)setExtInfoAppId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)extraAntiInfo;
- (void)setExtraAntiInfo:(id)arg1;
- (unsigned int)opensdkVersion;
- (void)setOpensdkVersion:(unsigned int)arg1;
- (unsigned int)platformId;
- (void)setPlatformId:(unsigned int)arg1;
- (id)gameUserId;
- (void)setGameUserId:(id)arg1;
- (id)dataFromGame;
- (void)setDataFromGame:(id)arg1;
- (void).cxx_destruct;
@end
