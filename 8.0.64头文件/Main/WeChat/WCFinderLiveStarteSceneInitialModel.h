@interface WCFinderLiveStarteSceneInitialModel : NSObject
{
    FinderLiveModeInfo * _initialLiveModeInfo; // +0x8
    FinderLiveTagInfo * _liveTagInfo; // +0x10
    NSString * _descriptionStr; // +0x18
    NSString * _descriptionExtend; // +0x20
    long long _liveMode; // +0x28
    NSString * _gameAppId; // +0x30
    BubbleCreateLiveAnchorStatusConfig * _anchorStatusConfig; // +0x38
    NSMutableDictionary * _chnlextraDictionary; // +0x40
    NSData * _createLiveBubbleBuffer; // +0x48
    unsigned long long _eventTopicId; // +0x50
    NSString * _eventName; // +0x58
    NSString * _eventCreatorNickName; // +0x60
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
- (void).cxx_destruct;
@end
