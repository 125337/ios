@interface ChatBotAskAIAsstVoIPViewController : ChatBotBaseVoIPViewController <UIGestureRecognizerDelegate>
{
    int _curRoomMode; // +0x70
    unsigned int _scene; // +0x74
    CMessageWrap * _transferMsg; // +0x78
    MemoryMappedKV * _mmkv; // +0x80
    UITapGestureRecognizer * _closeTapGesture; // +0x88
}
- (void)commonInit;
- (id)initWithScene:(unsigned int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (unsigned int)getChatbotVoIPScene;
- (void)fetchRoomInfo;
- (int)getOpenScene;
- (void)checkNeedModHeadImage;
- (void)layoutBackground;
- (void)layoutTalkingView;
- (id)genAiCarryInfo;
- (int)getCurrRoomMode;
- (void)boardViewHitTest:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)transferMsg;
- (void)setTransferMsg:(id)arg1;
- (int)curRoomMode;
- (void)setCurRoomMode:(int)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)closeTapGesture;
- (void)setCloseTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
