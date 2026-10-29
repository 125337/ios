@interface WCPayPaidDetailLeadTailViewData : NSObject
{
    WCPayPaidDetailLogoViewData * _unsettled_logo; // +0x8
    WCPayPaidDetailLogoViewData * _settled_logo; // +0x10
    NSString * _desc; // +0x18
    WCPayPaidDetailJumpInfo * _jump_info; // +0x20
}
- (id)unsettled_logo;
- (void)setUnsettled_logo:(id)arg1;
- (id)settled_logo;
- (void)setSettled_logo:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)jump_info;
- (void)setJump_info:(id)arg1;
- (void).cxx_destruct;
@end
