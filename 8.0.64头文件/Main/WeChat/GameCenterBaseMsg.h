@interface GameCenterBaseMsg : NSObject
{
    BOOL _wifiFlag; // +0x8
    BOOL _disableReport; // +0x9
    BOOL _needReExposure; // +0xa
    BOOL _isGreet; // +0xb
    unsigned int _localId; // +0xc
    unsigned int _msgRecvTime; // +0x10
    unsigned int _msgRecvServerTime; // +0x14
    unsigned int _firstExposureTime; // +0x18
    unsigned int _showType; // +0x1c
    unsigned int _mergeCount; // +0x20
    unsigned int _alreadyMergedCount; // +0x24
    unsigned int _msgExposureState; // +0x28
    unsigned int _maxExposureCnt; // +0x2c
    unsigned int _msgExposureCnt; // +0x30
    unsigned int _completeExposureCnt; // +0x34
    int _redPointQueueType; // +0x38
    int _msgStateOptions; // +0x3c
    float _exposureRateScore; // +0x40
    float _calcluateScore; // +0x44
    unsigned int _relationType; // +0x48
    long long _type; // +0x50
    NSString * _svrMsgId; // +0x58
    NSString * _weightStr; // +0x60
    NSString * _mergeId; // +0x68
    GameCenterEntranceInfo * _entranceInfo; // +0x70
    GameCenterMsgFloayLayerInfo * _floatLayerInfo; // +0x78
    GameCenterMsgBannerInfo * _bannerInfo; // +0x80
    GameLifeInfo * _gameLifeInfo; // +0x88
    GameMsgExtraData * _gameMsgExtraData; // +0x90
    GamePreloadResourceData * _preloadResourceData; // +0x98
    NSArray * _userInfoList; // +0xa0
    NSMutableDictionary * _jumpInfoDic; // +0xa8
    GameCenterWePkgPreloadInfo * _wePkgPreloadInfo; // +0xb0
    MessageExposureStrategy * _exposureStrategy; // +0xb8
    NSString * _calculateInfo; // +0xc0
    NSString * _pushId; // +0xc8
    NSString * _quickResponseContentId; // +0xd0
    NSString * _originMsg; // +0xd8
    GameCenterNotifyContent * _notifyContent; // +0xe0
    GameCenterMsgCenterContent * _msgCenterContent; // +0xe8
    GameCenterMsgSimplePbData * _simplePbData; // +0xf0
    NSMutableDictionary * _exposureScoreDict; // +0xf8
    NSMutableDictionary * _fullExposureScoreDict; // +0x100
    NSString * _contentId; // +0x108
}
+ (XmlReaderNode_t *)getRootNode:(id)arg1 XmlReader:(CXmlReader)arg2;
+ (id)msgWithType:(unsigned int)arg1 xmlNode:(XmlReaderNode_t *)arg2;
+ (id)parseFromMsgWrap:(id)arg1 RootNode:(XmlReaderNode_t *)arg2;
+ (id)parseFromDbItem:(id)arg1;
- (id)initWithXmlNode:(XmlReaderNode_t *)arg1;
- (id)parseJumpInfo:(XmlReaderNode_t *)arg1;
- (id)halfScreenFormNode:(XmlReaderNode_t *)arg1;
- (id)getNotifyContent;
- (id)getMsgCenterContent;
- (void)updateMsgCenterV2Content;
- (BOOL)weightMoreThan:(id)arg1;
- (id)getJumpInfo:(XmlReaderNode_t *)arg1;
- (id)getJumpInfo:(XmlReaderNode_t *)arg1 jumpIdAttrributeName:(const char *)arg2;
- (id)parseUserInfo:(XmlReaderNode_t *)arg1;
- (int)getMsgReportType;
- (BOOL)isExpired;
- (double)timeBeforeExpire;
- (BOOL)isOverMaxExposureCnt;
- (BOOL)notInMsgCenter;
- (unsigned int)createTime;
- (id)appid;
- (id)getNoticeid;
- (id)getReportExtData;
- (BOOL)isPluginMsg;
- (id)description;
- (long long)type;
- (void)setType:(long long)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (unsigned int)msgRecvTime;
- (void)setMsgRecvTime:(unsigned int)arg1;
- (unsigned int)msgRecvServerTime;
- (void)setMsgRecvServerTime:(unsigned int)arg1;
- (unsigned int)firstExposureTime;
- (void)setFirstExposureTime:(unsigned int)arg1;
- (id)svrMsgId;
- (void)setSvrMsgId:(id)arg1;
- (id)weightStr;
- (void)setWeightStr:(id)arg1;
- (id)mergeId;
- (void)setMergeId:(id)arg1;
- (BOOL)wifiFlag;
- (void)setWifiFlag:(BOOL)arg1;
- (unsigned int)showType;
- (void)setShowType:(unsigned int)arg1;
- (unsigned int)mergeCount;
- (void)setMergeCount:(unsigned int)arg1;
- (unsigned int)alreadyMergedCount;
- (void)setAlreadyMergedCount:(unsigned int)arg1;
- (BOOL)disableReport;
- (void)setDisableReport:(BOOL)arg1;
- (id)entranceInfo;
- (void)setEntranceInfo:(id)arg1;
- (id)floatLayerInfo;
- (void)setFloatLayerInfo:(id)arg1;
- (id)bannerInfo;
- (void)setBannerInfo:(id)arg1;
- (id)gameLifeInfo;
- (void)setGameLifeInfo:(id)arg1;
- (id)gameMsgExtraData;
- (void)setGameMsgExtraData:(id)arg1;
- (id)preloadResourceData;
- (void)setPreloadResourceData:(id)arg1;
- (BOOL)needReExposure;
- (void)setNeedReExposure:(BOOL)arg1;
- (unsigned int)msgExposureState;
- (void)setMsgExposureState:(unsigned int)arg1;
- (id)userInfoList;
- (void)setUserInfoList:(id)arg1;
- (id)jumpInfoDic;
- (void)setJumpInfoDic:(id)arg1;
- (id)wePkgPreloadInfo;
- (void)setWePkgPreloadInfo:(id)arg1;
- (unsigned int)maxExposureCnt;
- (void)setMaxExposureCnt:(unsigned int)arg1;
- (unsigned int)msgExposureCnt;
- (void)setMsgExposureCnt:(unsigned int)arg1;
- (unsigned int)completeExposureCnt;
- (void)setCompleteExposureCnt:(unsigned int)arg1;
- (int)redPointQueueType;
- (void)setRedPointQueueType:(int)arg1;
- (int)msgStateOptions;
- (void)setMsgStateOptions:(int)arg1;
- (id)exposureStrategy;
- (void)setExposureStrategy:(id)arg1;
- (float)exposureRateScore;
- (void)setExposureRateScore:(float)arg1;
- (float)calcluateScore;
- (void)setCalcluateScore:(float)arg1;
- (id)calculateInfo;
- (void)setCalculateInfo:(id)arg1;
- (id)pushId;
- (void)setPushId:(id)arg1;
- (id)quickResponseContentId;
- (void)setQuickResponseContentId:(id)arg1;
- (BOOL)isGreet;
- (void)setIsGreet:(BOOL)arg1;
- (unsigned int)relationType;
- (void)setRelationType:(unsigned int)arg1;
- (id)originMsg;
- (void)setOriginMsg:(id)arg1;
- (id)notifyContent;
- (void)setNotifyContent:(id)arg1;
- (id)msgCenterContent;
- (void)setMsgCenterContent:(id)arg1;
- (id)simplePbData;
- (void)setSimplePbData:(id)arg1;
- (id)exposureScoreDict;
- (void)setExposureScoreDict:(id)arg1;
- (id)fullExposureScoreDict;
- (void)setFullExposureScoreDict:(id)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (void).cxx_destruct;
@end
