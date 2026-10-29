@interface ReaderYuanBaoUtil : NSObject
+ (id)getYuanBaoReaderWrapIfHave:(id)arg1;
+ (BOOL)checkTXNewsMsgHasYuanBaoPromotionItem:(id)arg1;
+ (BOOL)unwrapYuanBaoAppStatusFromTXNewsMsg:(id)arg1;
+ (BOOL)unwrapYuanBaoAppStatusFromTXNewsReaderWrap:(id)arg1;
+ (BOOL)updateYuanBaoAppStatusFromReaderWrap:(id)arg1 toDic:(id)arg2;
+ (void)udpateYuanBaoAppStatusFromTXNewsMsg:(id)arg1 toDic:(id)arg2;
+ (void)saveYuanBaoAMSAdInfoIfNeededWhenReceiveMsg:(id)arg1;
@end
