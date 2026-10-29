@interface MonoServiceMsg : NSObject <NSCopying>
{
    id <MonoServiceMsgDelegate> _m_delegate; // +0x8
}
- (id)init;
- (BOOL)isOutOfDate;
- (BOOL)isCancelMsg;
- (id)serviceType;
- (id)msgKey;
- (BOOL)isTheSameToMsg:(id)arg1;
- (BOOL)isParaVaild;
- (id)localNotificationInfo;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

