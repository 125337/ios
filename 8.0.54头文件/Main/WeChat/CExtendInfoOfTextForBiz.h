@interface CExtendInfoOfTextForBiz : NSObject <IMessageWrapForBizExt, IMsgExtendOperation, NSCopying>
{
    CMessageWrap * m_refMessageWrap; // +0x8
}
+ (void)CreateExtendInfoWithTypeForBiz:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)GetDisplayContent;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (void).cxx_destruct;
@end

