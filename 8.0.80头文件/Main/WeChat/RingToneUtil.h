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
+ (id)sha256OfFileAtPath:(id)arg1;
+ (void)recordSHA256ForFileAtPath:(id)arg1 location:(unsigned long long)arg2 ringId:(id)arg3;
+ (BOOL)verifySHA256ForFileAtPath:(id)arg1 location:(unsigned long long)arg2 ringId:(id)arg3;
+ (void)clearSHA256ForLocation:(unsigned long long)arg1 ringId:(id)arg2;
@end
