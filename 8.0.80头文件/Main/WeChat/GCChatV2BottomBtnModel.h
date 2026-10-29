@interface GCChatV2BottomBtnModel : NSObject
{
    ChatroomJumpDetail * _jumpDetail; // +0x8
    GC23070Report * _reportModel; // +0x10
}
- (void)handleJump;
- (id)jumpDetail;
- (void)setJumpDetail:(id)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (void).cxx_destruct;
@end
