@interface WARemoteDebugPanelView : UIView
{
    CGPoint _priorPoint; // +0x8
    UIImageView * _connectImageView; // +0x18
    UILabel * _connectLabel; // +0x20
    UIImageView * _serverImageView; // +0x28
    UILabel * _serverLabel; // +0x30
    UILabel * _noConfirmedLabel; // +0x38
    UILabel * _noSendLabel; // +0x40
    UILabel * _sendoutLabel; // +0x48
    UILabel * _recvinLabel; // +0x50
    UIView * _splitLine; // +0x58
    UIButton * _stopButton; // +0x60
    UIButton * _shrinkButton; // +0x68
    UIButton * _expandButton; // +0x70
    UISwitch * _showLogSwitch; // +0x78
    UILabel * _showLogLabel; // +0x80
    UIView * _containerView; // +0x88
    NSMutableArray * _labelList; // +0x90
}
- (void)setupSubviews;
- (void)updateConnectState:(id)arg1;
- (void)updateServerState:(id)arg1;
- (void)updateNoConfirmedCount:(unsigned int)arg1;
- (void)updateNoSendCount:(unsigned int)arg1;
- (void)updateSendLength:(id)arg1 sendCount:(unsigned int)arg2;
- (void)updateRecvLength:(id)arg1 recvCount:(unsigned int)arg2;
- (void)updatePrintItemList:(id)arg1;
- (void)refreshPanelHeight;
- (void)handleLongPress:(id)arg1;
- (void)onSwitchChanged:(id)arg1;
- (void)onExpandButtonChanged:(id)arg1;
- (void)onShrinkButtonChanged:(id)arg1;
- (id)stopButton;
- (void)setStopButton:(id)arg1;
- (void).cxx_destruct;
@end
