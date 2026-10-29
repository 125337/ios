@interface InternalTask : NSObject <WCPayPrivacyViewControllerDelegate>
{
    id /* block */ _m_block; // +0x8
}
- (id)initWithBlock:(id /* block */)arg1;
- (void)onWCPayPrivacyViewControllerClickAgree:(BOOL)arg1 marketingSwitchClosed:(BOOL)arg2;
- (id /* block */)m_block;
- (void)setM_block:(id /* block */)arg1;
- (void).cxx_destruct;
@end

