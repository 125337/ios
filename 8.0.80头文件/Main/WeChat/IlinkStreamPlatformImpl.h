@interface IlinkStreamPlatformImpl : NSObject <IlinkStreamPlatformBase>
{
    IlinkStreamPlatformCallback * _m_callback_; // +0x8
}
- (id)init;
- (void)setCallback:(id)arg1;
- (void)getCurrentNetworkTypeAsync:(unsigned long long)arg1;
- (id)m_callback_;
- (void)setM_callback_:(id)arg1;
- (void).cxx_destruct;
@end
