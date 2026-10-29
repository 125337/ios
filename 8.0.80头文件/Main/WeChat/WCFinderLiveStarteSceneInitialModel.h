@interface WCFinderLiveStarteSceneInitialModel : NSObject
{
    BOOL _needUseBackCamera; // +0x8
    BOOL _needAutoShowGameSelectPanel; // +0x9
    BOOL _needUseNineGridMicLayout; // +0xa
    unsigned int _micTopicSource; // +0xc
    FinderLiveModeInfo * _initialLiveModeInfo; // +0x10
    FinderLiveTagInfo * _liveTagInfo; // +0x18
    NSString * _descriptionStr; // +0x20
    NSString * _descriptionExtend; // +0x28
    NSString * _micTopic; // +0x30
    unsigned long long _micTopicRefFeedId; // +0x38
    NSString * _micTopicReportJson; // +0x40
    long long _liveMode; // +0x48
    NSString * _gameAppId; // +0x50
    BubbleCreateLiveAnchorStatusConfig * _anchorStatusConfig; // +0x58
    NSMutableDictionary * _chnlextraDictionary; // +0x60
    NSData * _createLiveBubbleBuffer; // +0x68
    unsigned long long _eventTopicId; // +0x70
    NSString * _eventName; // +0x78
    NSString * _eventCreatorNickName; // +0x80
}
- (id)description;
- (unsigned long long)openCamera;
- (id)currentBulletinInfo;
- (void)cleanBulletinInfo;
- (id)chnlextraDictionary;
- (id)initialLiveModeInfo;
- (void)setInitialLiveModeInfo:(id)arg1;
- (id)liveTagInfo;
- (void)setLiveTagInfo:(id)arg1;
- (id)descriptionStr;
- (void)setDescriptionStr:(id)arg1;
- (id)descriptionExtend;
- (void)setDescriptionExtend:(id)arg1;
- (id)micTopic;
- (void)setMicTopic:(id)arg1;
- (unsigned int)micTopicSource;
- (void)setMicTopicSource:(unsigned int)arg1;
- (unsigned long long)micTopicRefFeedId;
- (void)setMicTopicRefFeedId:(unsigned long long)arg1;
- (id)micTopicReportJson;
- (void)setMicTopicReportJson:(id)arg1;
- (long long)liveMode;
- (void)setLiveMode:(long long)arg1;
- (id)gameAppId;
- (void)setGameAppId:(id)arg1;
- (id)anchorStatusConfig;
- (void)setAnchorStatusConfig:(id)arg1;
- (void)setChnlextraDictionary:(id)arg1;
- (id)createLiveBubbleBuffer;
- (void)setCreateLiveBubbleBuffer:(id)arg1;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)eventCreatorNickName;
- (void)setEventCreatorNickName:(id)arg1;
- (BOOL)needUseBackCamera;
- (void)setNeedUseBackCamera:(BOOL)arg1;
- (BOOL)needAutoShowGameSelectPanel;
- (void)setNeedAutoShowGameSelectPanel:(BOOL)arg1;
- (BOOL)needUseNineGridMicLayout;
- (void)setNeedUseNineGridMicLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
