@interface RingToneUtil : NSObject
+ (id)GenTimeStringWith:(int)arg1;
+ (id)GenCircleButtonImage:(id)arg1 coler:(id)arg2;
+ (unsigned long long)GetRingSourceTypeBy:(unsigned long long)arg1;
+ (void)RemindCallerSetRingToneFromChat:(id)arg1;
+ (void)RemindReceiverUpdateRingToneFromChat:(id)arg1;
+ (void)SendSetRingToneMessageFromChat:(id)arg1 isCaller:(BOOL)arg2;
+ (BOOL)IsSeeFriendNewRingTipEnabled;
+ (void)SendSeeNewRingTipMsgForFriend:(id)arg1 ring:(id)arg2;
+ (void)__SendSeeNewRingTipMsgForFriend:(id)arg1 ring:(id)arg2;
@end
