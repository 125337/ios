@interface MMImageActionGameCircle : MMImageActionSheetItem <MMLiteAppExt>
{
    NSString * _gameAppId; // +0x8
    NSDictionary * _gameCenterExtraData; // +0x10
    MMLiteAppViewController * _m_gameCircleViewController; // +0x18
}
- (id)init;
- (void)handleWithImage;
- (id)createImageLocalId:(id)arg1;
- (void)openGamePublishCenter:(id)arg1;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 extraData:(id)arg4;
- (id)gameAppId;
- (void)setGameAppId:(id)arg1;
- (id)gameCenterExtraData;
- (void)setGameCenterExtraData:(id)arg1;
- (id)m_gameCircleViewController;
- (void)setM_gameCircleViewController:(id)arg1;
- (void).cxx_destruct;
@end
