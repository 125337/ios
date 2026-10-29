@interface CExtendInfoOfMassSend : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    CMessageWrap * m_refMessageWrap; // +0x8
    NSString * _toListMd5; // +0x10
}
+ (void)CreateExtendInfoWithUserName:(id)arg1 retExtendInfo:(id *)arg2 retIsContinueDispatch:(BOOL *)arg3;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)dealloc;
- (void)ChangeForDisplay;
- (void)UpdateContent:(id)arg1;
- (void)UpdateMassSendContent;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (id)toListMd5;
- (void)setToListMd5:(id)arg1;
- (void).cxx_destruct;
@end

