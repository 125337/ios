@interface CExtendInfoOfReader : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    NSArray * m_arrReaderWaps; // +0x8
    unsigned int m_mmreaderSubType; // +0x10
    CMessageWrap * m_refMessageWrap; // +0x18
}
+ (void)CreateExtendInfoWithUserName:(id)arg1 retExtendInfo:(id *)arg2 retIsContinueDispatch:(BOOL *)arg3;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)ChangeForDisplay;
- (id)m_arrReaderWaps;
- (void)setM_arrReaderWaps:(id)arg1;
- (unsigned int)m_mmreaderSubType;
- (void)setM_mmreaderSubType:(unsigned int)arg1;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (void).cxx_destruct;
@end
