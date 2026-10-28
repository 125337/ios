@interface WCFinderJumpInfoGoodsModel : WCFinderJumpInfoBaseModel
{
    WCFinderFeedContentVM * _contentVM; // +0x8
}
- (id)initWithContentVM:(id)arg1;
- (void)jumpToMiniApp:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)realJumpToMiniApp:(id)arg1 fromVC:(id)arg2 params:(id)arg3 productInfo:(id)arg4 widgetParameters:(id)arg5;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end
