@interface WCFinderInteractivePanelConfigParamsModel : NSObject
{
    BOOL _isAuthorView; // +0x8
    BOOL _forceShowCreateTime; // +0x9
    BOOL _isEnableMediaHeaderShowFollowTips; // +0xa
    BOOL _hiddenAuthorAppendDescLabel; // +0xb
    BOOL _showLiveState; // +0xc
    BOOL _hasCompletelyPlay; // +0xd
    BOOL _isTimeShowGuideItem; // +0xe
    BOOL _hiddenSetRingToneEntry; // +0xf
    BOOL _notShowFollowBtnAfterPlayOver; // +0x10
    BOOL _hiddenLiveAppointmentState; // +0x11
    BOOL _emitCarouselAfterHotCommentUpdate; // +0x12
    int _scene; // +0x14
    WCFinderFeedContentVM * _contentVM; // +0x18
    NSString * _createTime; // +0x20
    WCFinderFeedBindEventInfo * _eventInfo; // +0x28
    WCFinderObjectHotTopic * _hotTopicInfo; // +0x30
    FinderWindowProductInfo * _goodsProductInfo; // +0x38
    NSSet * _feedSourceShowSceneSet; // +0x40
    NSMutableSet * _jumpCarouselShowSet; // +0x48
    WCFinderTableViewParamModel * _tableViewParamModel; // +0x50
    CGRect _mediaCollectionViewFrame; // +0x58
}
- (id)init;
- (unsigned long long)getOperatingComponentLevelWithShowPosition:(int)arg1;
- (unsigned long long)getOperatingComponentLevel:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (BOOL)isAuthorView;
- (void)setIsAuthorView:(BOOL)arg1;
- (id)createTime;
- (void)setCreateTime:(id)arg1;
- (BOOL)forceShowCreateTime;
- (void)setForceShowCreateTime:(BOOL)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (id)hotTopicInfo;
- (void)setHotTopicInfo:(id)arg1;
- (CGRect)mediaCollectionViewFrame;
- (void)setMediaCollectionViewFrame:(CGRect)arg1;
- (BOOL)isEnableMediaHeaderShowFollowTips;
- (void)setIsEnableMediaHeaderShowFollowTips:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (BOOL)hiddenAuthorAppendDescLabel;
- (void)setHiddenAuthorAppendDescLabel:(BOOL)arg1;
- (BOOL)showLiveState;
- (void)setShowLiveState:(BOOL)arg1;
- (BOOL)hasCompletelyPlay;
- (void)setHasCompletelyPlay:(BOOL)arg1;
- (id)goodsProductInfo;
- (void)setGoodsProductInfo:(id)arg1;
- (BOOL)isTimeShowGuideItem;
- (void)setIsTimeShowGuideItem:(BOOL)arg1;
- (BOOL)hiddenSetRingToneEntry;
- (void)setHiddenSetRingToneEntry:(BOOL)arg1;
- (BOOL)notShowFollowBtnAfterPlayOver;
- (void)setNotShowFollowBtnAfterPlayOver:(BOOL)arg1;
- (BOOL)hiddenLiveAppointmentState;
- (void)setHiddenLiveAppointmentState:(BOOL)arg1;
- (id)feedSourceShowSceneSet;
- (void)setFeedSourceShowSceneSet:(id)arg1;
- (BOOL)emitCarouselAfterHotCommentUpdate;
- (void)setEmitCarouselAfterHotCommentUpdate:(BOOL)arg1;
- (id)jumpCarouselShowSet;
- (void)setJumpCarouselShowSet:(id)arg1;
- (id)tableViewParamModel;
- (void)setTableViewParamModel:(id)arg1;
- (void).cxx_destruct;
@end
