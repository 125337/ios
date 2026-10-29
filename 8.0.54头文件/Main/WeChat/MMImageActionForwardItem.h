@interface MMImageActionForwardItem : MMImageActionSheetItem <ForwardMessageLogicDelegate>
{
    ForwardMessageLogicController * _logic; // +0x8
    NSString * _staticImgUuid; // +0x10
}
- (id)init;
- (id)logic;
- (void)handleWithImage;
- (void)forwardImageWithImagePath:(id)arg1 toContact:(id)arg2;
- (id)getCurrentViewController;
- (void)setLogic:(id)arg1;
- (id)staticImgUuid;
- (void)setStaticImgUuid:(id)arg1;
- (void).cxx_destruct;
@end

