@interface WCPayLqpEntranceInfo : NSObject
{
    BOOL _is_exposure; // +0x8
    WCPayLqpJumpInfo * _jump_info; // +0x10
    WCPayLqpWordingItem * _wording_item; // +0x18
}
- (BOOL)is_exposure;
- (void)setIs_exposure:(BOOL)arg1;
- (id)jump_info;
- (void)setJump_info:(id)arg1;
- (id)wording_item;
- (void)setWording_item:(id)arg1;
- (void).cxx_destruct;
@end

