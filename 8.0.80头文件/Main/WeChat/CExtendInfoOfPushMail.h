@interface CExtendInfoOfPushMail : NSObject <IMsgExtendOperation, IMessageWrapExt, NSCopying>
{
    PushMailWrap * m_oPushMailWrap; // +0x8
    CMessageWrap * m_refMessageWrap; // +0x10
}
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)ChangeForDisplay;
- (id)messageFTSText;
- (id)m_oPushMailWrap;
- (void)setM_oPushMailWrap:(id)arg1;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (void).cxx_destruct;
@end
