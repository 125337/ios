@interface EmoticonCustomMgr : MMUserService <IExptServiceExt, MMServiceProtocol>
{
    EmoticonCustomConfig * _emoticonCustomConfig; // +0x8
}
- (id)init;
- (void)onServiceClearData;
- (void)parseCustomConfig:(id)arg1;
- (void)parseConfigIfNeed;
- (BOOL)isEmoticonNewCustomManageView;
- (BOOL)isEmoticonLiteAppPersonalCenter;
- (BOOL)isEmoticonCustomPostEntrance;
- (unsigned long long)emoticonCustomPostJumpTarget;
- (BOOL)isEmoticonCustomJumpDevelopWeapp;
- (void)onExptItemListChange;
- (id)emoticonCustomConfig;
- (void)setEmoticonCustomConfig:(id)arg1;
- (void).cxx_destruct;
@end
