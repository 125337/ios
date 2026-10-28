@interface WeChatHBHandler : NSObject <IPreEnterWechatLogicExt>
{
    NSString * m_nsAppID; // +0x8
    NSURL * m_nsAppUrl; // +0x10
    NSString * m_nsBundleID; // +0x18
    NSString * m_nsUniversalLink; // +0x20
}
- (id)init;
- (void)startWeChatHB:(id)arg1;
- (void)cancelWeChatHB;
- (void)onPreEnterWechatDone;
- (id)parseURLParams:(id)arg1;
- (void)createWeChateHB;
- (void).cxx_destruct;
@end
