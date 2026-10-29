@interface WCFinderTopicRouteParams : WCFinderTopicListParams
{
    BOOL _showHalfScreen; // +0xc8
    BOOL _showHighlightTopicStyle; // +0xc9
    int _feedActionType; // +0xcc
    int _commentScene; // +0xd0
    unsigned int _preSelectFilterType; // +0xd4
    int _musicPageType; // +0xd8
    int _getTopicInfoFlag; // +0xdc
    unsigned long long _cardType; // +0xe0
    WCFinderDataItem * _dataItem; // +0xe8
    unsigned long long _shareScene; // +0xf0
    unsigned long long _entryScene; // +0xf8
    NSString * _adExtInfo; // +0x100
    WCFinderShareItemInfo * _shareItemInfo; // +0x108
    unsigned long long _streamEntranceType; // +0x110
    NSData * _byPassInfo; // +0x118
    UINavigationController * _navVC; // +0x120
    UIViewController * _fromVC; // +0x128
    unsigned long long _sourcePosition; // +0x130
    NSString * _feedIdToBePostToComment; // +0x138
    NSString * _templateTopicId; // +0x140
    NSData * _topicInfoPassbuff; // +0x148
    NSString * _jumpInfoToPoiStreamBypass; // +0x150
}
+ (id)tagTopicWithName:(id)arg1 commentScene:(int)arg2;
+ (id)poiTopicWithDataItem:(id)arg1 commentScene:(int)arg2;
+ (id)musicTopicWithDataItem:(id)arg1 commentScene:(int)arg2;
+ (id)eventTopicWithEventInfo:(id)arg1 commentScene:(int)arg2;
+ (id)musicTopicWithWithEventInfo:(id)arg1 commentScene:(int)arg2;
+ (id)eventTopicWithEncryptedId:(id)arg1 eventName:(id)arg2 commentScene:(int)arg3;
+ (id)eventTopicWithEncryptedId:(id)arg1 eventDelegate:(id)arg2 commentScene:(int)arg3;
+ (id)eventTopicWithEventId:(unsigned long long)arg1 commentScene:(int)arg2;
+ (id)eventMusicTopicWithMusicId:(unsigned long long)arg1 commentScene:(int)arg2 sourceType:(unsigned long long)arg3;
+ (id)eventMusicTopicWithPatTopic:(id)arg1 commentScene:(int)arg2 sourceType:(unsigned long long)arg3;
+ (id)poiTopicWithPoiParams:(id)arg1 commentScene:(int)arg2;
- (id)init;
- (id)shareItemInfo;
- (void)setLocation:(id)arg1;
- (void)setDataItem:(id)arg1;
- (void)setShareScene:(unsigned long long)arg1;
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg1;
- (id)dataItem;
- (int)feedActionType;
- (void)setFeedActionType:(int)arg1;
- (unsigned long long)shareScene;
- (unsigned long long)entryScene;
- (void)setEntryScene:(unsigned long long)arg1;
- (id)adExtInfo;
- (void)setAdExtInfo:(id)arg1;
- (void)setShareItemInfo:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)streamEntranceType;
- (void)setStreamEntranceType:(unsigned long long)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (BOOL)showHalfScreen;
- (void)setShowHalfScreen:(BOOL)arg1;
- (BOOL)showHighlightTopicStyle;
- (void)setShowHighlightTopicStyle:(BOOL)arg1;
- (unsigned int)preSelectFilterType;
- (void)setPreSelectFilterType:(unsigned int)arg1;
- (int)musicPageType;
- (void)setMusicPageType:(int)arg1;
- (unsigned long long)sourcePosition;
- (void)setSourcePosition:(unsigned long long)arg1;
- (id)feedIdToBePostToComment;
- (void)setFeedIdToBePostToComment:(id)arg1;
- (id)templateTopicId;
- (void)setTemplateTopicId:(id)arg1;
- (id)topicInfoPassbuff;
- (void)setTopicInfoPassbuff:(id)arg1;
- (int)getTopicInfoFlag;
- (void)setGetTopicInfoFlag:(int)arg1;
- (id)jumpInfoToPoiStreamBypass;
- (void)setJumpInfoToPoiStreamBypass:(id)arg1;
- (void).cxx_destruct;
@end

