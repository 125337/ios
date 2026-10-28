@interface MMImageActionForwardItem : MMImageActionSheetItem <ForwardMessageLogicDelegate>
{
    ForwardMessageLogicController * _logic; // +0x8
    NSString * _staticImgUuid; // +0x10
}
- (id)init;
- (id)logic;
- (void)handleWithImage;
- (void)forwardImageWithContact:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)setLogic:(id)arg1;
- (id)staticImgUuid;
- (void)setStaticImgUuid:(id)arg1;
- (void).cxx_destruct;
@end
