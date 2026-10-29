@interface GCChatRoomVcLayout : GCDynamicLayoutProvider
{
    GCLabelDynamicLayout * _channelTitleLabelLayout; // +0x8
    GCLabelDynamicLayout * _channelTitleNumberLayout; // +0x10
    double _spaceBelowChannelTitle; // +0x18
    double _spaceUpChatBtn; // +0x20
    GCLabelDynamicLayout * _inputChannelTitleLayout; // +0x28
}
- (id)init;
- (id)channelTitleLabelLayout;
- (void)setChannelTitleLabelLayout:(id)arg1;
- (id)channelTitleNumberLayout;
- (void)setChannelTitleNumberLayout:(id)arg1;
- (double)spaceBelowChannelTitle;
- (void)setSpaceBelowChannelTitle:(double)arg1;
- (double)spaceUpChatBtn;
- (void)setSpaceUpChatBtn:(double)arg1;
- (id)inputChannelTitleLayout;
- (void)setInputChannelTitleLayout:(id)arg1;
- (void).cxx_destruct;
@end

