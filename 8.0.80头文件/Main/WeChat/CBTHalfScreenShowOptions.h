@interface CBTHalfScreenShowOptions : NSObject
{
    BOOL _skipFinderCheck; // +0x8
    BOOL _showTempChatTips; // +0x9
    BOOL _reverse; // +0xa
    BOOL _useFlutter; // +0xb
    BOOL _deferred; // +0xc
    BOOL _chatHistoryAuthRequired; // +0xd
    int _multimodalType; // +0x10
    int _enterScene; // +0x14
    unsigned int _recordLocalId; // +0x18
    unsigned int _fileSrcType; // +0x1c
    unsigned int _fileDstType; // +0x20
    int _headlessMicBypassType; // +0x24
    CBTAppBypassInfo * _bypassInfo; // +0x28
    NSString * _multimodalXml; // +0x30
    NSData * _multimodalWrapData; // +0x38
    unsigned long long _sourceType; // +0x40
    NSString * _sourceId; // +0x48
    NSString * _businessId; // +0x50
    NSArray * _imagePaths; // +0x58
    NSString * _pendingSendMsgContent; // +0x60
    NSString * _uplinkBypassDetail; // +0x68
    NSString * _sug; // +0x70
    NSString * _pendingTimelineFeedId; // +0x78
    NSString * _contextFeedId; // +0x80
    NSString * _pendingForwardXml; // +0x88
    long long _routeType; // +0x90
    id /* block */ _didAppearCallback; // +0x98
    NSString * _pendingSendImagePath; // +0xa0
    NSDictionary * _srcInfoParams; // +0xa8
    NSString * _fileMd5; // +0xb0
    CBTReceivedFileBypassMsg * _receivedFileBypass; // +0xb8
    long long _scanImageIntentType; // +0xc0
    ScanAIIntentResult * _scanIntentResult; // +0xc8
    NSString * _searchFeedId; // +0xd0
    NSString * _searchBypassDetail; // +0xd8
    NSString * _itemId; // +0xe0
    NSString * _headlessMicBypassDetail; // +0xe8
    NSArray * _shortcutItems; // +0xf0
    NSArray * _localShortcutItems; // +0xf8
    UserLocationInfo * _userLocation; // +0x100
}
+ (id)optionsWithRouteType:(long long)arg1;
+ (void)setUserLocationWithCityName:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 onOptions:(id)arg4;
- (id)bypassInfo;
- (void)setBypassInfo:(id)arg1;
- (id)multimodalXml;
- (void)setMultimodalXml:(id)arg1;
- (int)multimodalType;
- (void)setMultimodalType:(int)arg1;
- (id)multimodalWrapData;
- (void)setMultimodalWrapData:(id)arg1;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (BOOL)skipFinderCheck;
- (void)setSkipFinderCheck:(BOOL)arg1;
- (id)imagePaths;
- (void)setImagePaths:(id)arg1;
- (BOOL)showTempChatTips;
- (void)setShowTempChatTips:(BOOL)arg1;
- (id)pendingSendMsgContent;
- (void)setPendingSendMsgContent:(id)arg1;
- (id)uplinkBypassDetail;
- (void)setUplinkBypassDetail:(id)arg1;
- (id)sug;
- (void)setSug:(id)arg1;
- (id)pendingTimelineFeedId;
- (void)setPendingTimelineFeedId:(id)arg1;
- (id)contextFeedId;
- (void)setContextFeedId:(id)arg1;
- (id)pendingForwardXml;
- (void)setPendingForwardXml:(id)arg1;
- (long long)routeType;
- (void)setRouteType:(long long)arg1;
- (id /* block */)didAppearCallback;
- (void)setDidAppearCallback:(id /* block */)arg1;
- (id)pendingSendImagePath;
- (void)setPendingSendImagePath:(id)arg1;
- (id)srcInfoParams;
- (void)setSrcInfoParams:(id)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (unsigned int)recordLocalId;
- (void)setRecordLocalId:(unsigned int)arg1;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (unsigned int)fileSrcType;
- (void)setFileSrcType:(unsigned int)arg1;
- (unsigned int)fileDstType;
- (void)setFileDstType:(unsigned int)arg1;
- (BOOL)reverse;
- (void)setReverse:(BOOL)arg1;
- (id)receivedFileBypass;
- (void)setReceivedFileBypass:(id)arg1;
- (long long)scanImageIntentType;
- (void)setScanImageIntentType:(long long)arg1;
- (id)scanIntentResult;
- (void)setScanIntentResult:(id)arg1;
- (id)searchFeedId;
- (void)setSearchFeedId:(id)arg1;
- (id)searchBypassDetail;
- (void)setSearchBypassDetail:(id)arg1;
- (BOOL)useFlutter;
- (void)setUseFlutter:(BOOL)arg1;
- (BOOL)deferred;
- (void)setDeferred:(BOOL)arg1;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (int)headlessMicBypassType;
- (void)setHeadlessMicBypassType:(int)arg1;
- (id)headlessMicBypassDetail;
- (void)setHeadlessMicBypassDetail:(id)arg1;
- (id)shortcutItems;
- (void)setShortcutItems:(id)arg1;
- (id)localShortcutItems;
- (void)setLocalShortcutItems:(id)arg1;
- (BOOL)chatHistoryAuthRequired;
- (void)setChatHistoryAuthRequired:(BOOL)arg1;
- (id)userLocation;
- (void)setUserLocation:(id)arg1;
- (void).cxx_destruct;
@end
