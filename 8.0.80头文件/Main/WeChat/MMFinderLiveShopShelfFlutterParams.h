@interface MMFinderLiveShopShelfFlutterParams : NSObject
{
    BOOL _isAnchor; // +0x8
    BOOL _isAssistant; // +0x9
    BOOL _isNormalAudience; // +0xa
    BOOL _isLocalLife; // +0xb
    BOOL _isReplay; // +0xc
    BOOL _isLiveStarted; // +0xd
    BOOL _scrollToTop; // +0xe
    BOOL _openCouponPage; // +0xf
    BOOL _openHotSellingTab; // +0x10
    NSString * _liveTaskID; // +0x18
    unsigned long long _liveId; // +0x20
    unsigned long long _objectId; // +0x28
    NSData * _liveCookies; // +0x30
    NSString * _anchorUsername; // +0x38
    NSString * _selfFinderUsername; // +0x40
    NSString * _sceneNoteSessionId; // +0x48
    NSString * _sceneNoteEcSource; // +0x50
    unsigned long long _productID; // +0x58
    NSData * _ecExtraInfoBuffer; // +0x60
    long long _initialTab; // +0x68
    long long _entrance; // +0x70
    NSString * _entranceGMsgID; // +0x78
    NSString * _srcUrl; // +0x80
    NSString * _liteAppId; // +0x88
    NSDictionary * _extraInfo; // +0x90
    NSDictionary * _amoeba21084Params; // +0x98
    NSNumber * _isPrivate; // +0xa0
    NSString * _pageSessionId; // +0xa8
    NSNumber * _liveTime; // +0xb0
    NSString * _finderWxAppInfo; // +0xb8
    NSNumber * _sourceScene; // +0xc0
    NSDictionary * _amoeba21054Params; // +0xc8
}
+ (id)paramsWithLiveTask:(id)arg1 openParams:(id)arg2 goods:(id)arg3 entrance:(long long)arg4;
+ (id)_snapshotHostAmoeba21084ParamsFromLiveTask:(id)arg1;
+ (id)_snapshotHostAmoebaCommonParamsFromLiveTask:(id)arg1;
+ (id)_snapshotHostAmoeba21054ParamsFromLiveTask:(id)arg1;
- (id)init;
- (id)toRouterParamsDictionary;
- (id)liveTaskID;
- (void)setLiveTaskID:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)anchorUsername;
- (void)setAnchorUsername:(id)arg1;
- (id)selfFinderUsername;
- (void)setSelfFinderUsername:(id)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (BOOL)isAssistant;
- (void)setIsAssistant:(BOOL)arg1;
- (BOOL)isNormalAudience;
- (void)setIsNormalAudience:(BOOL)arg1;
- (BOOL)isLocalLife;
- (void)setIsLocalLife:(BOOL)arg1;
- (BOOL)isReplay;
- (void)setIsReplay:(BOOL)arg1;
- (id)sceneNoteSessionId;
- (void)setSceneNoteSessionId:(id)arg1;
- (id)sceneNoteEcSource;
- (void)setSceneNoteEcSource:(id)arg1;
- (BOOL)isLiveStarted;
- (void)setIsLiveStarted:(BOOL)arg1;
- (unsigned long long)productID;
- (void)setProductID:(unsigned long long)arg1;
- (BOOL)scrollToTop;
- (void)setScrollToTop:(BOOL)arg1;
- (BOOL)openCouponPage;
- (void)setOpenCouponPage:(BOOL)arg1;
- (BOOL)openHotSellingTab;
- (void)setOpenHotSellingTab:(BOOL)arg1;
- (id)ecExtraInfoBuffer;
- (void)setEcExtraInfoBuffer:(id)arg1;
- (long long)initialTab;
- (void)setInitialTab:(long long)arg1;
- (long long)entrance;
- (void)setEntrance:(long long)arg1;
- (id)entranceGMsgID;
- (void)setEntranceGMsgID:(id)arg1;
- (id)srcUrl;
- (void)setSrcUrl:(id)arg1;
- (id)liteAppId;
- (void)setLiteAppId:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)amoeba21084Params;
- (void)setAmoeba21084Params:(id)arg1;
- (id)isPrivate;
- (void)setIsPrivate:(id)arg1;
- (id)pageSessionId;
- (void)setPageSessionId:(id)arg1;
- (id)liveTime;
- (void)setLiveTime:(id)arg1;
- (id)finderWxAppInfo;
- (void)setFinderWxAppInfo:(id)arg1;
- (id)sourceScene;
- (void)setSourceScene:(id)arg1;
- (id)amoeba21054Params;
- (void)setAmoeba21054Params:(id)arg1;
- (void).cxx_destruct;
@end
