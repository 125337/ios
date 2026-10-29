@interface WCPayC2CMesageNodeViewUtil : NSObject
+ (id)getAAC2CMessageDescDict:(id)arg1;
+ (id)c2cSourceTitleForMsgWrap:(id)arg1;
+ (BOOL)isNeedShowMentionedMeMsg:(id)arg1;
+ (id)getCommonAASelectMemberMsgDescWithMsgWrap:(id)arg1;
+ (id)getActivityAAMsgDescWithMsgWrap:(id)arg1;
+ (id)getCustomizeAAMsgDescWithMsgWrap:(id)arg1;
+ (id)getPayerTitleWithPayerState:(unsigned long long)arg1 payerAmount:(double)arg2;
+ (id)getReceiverTitleWithReceiverState:(unsigned long long)arg1 wordingMember:(unsigned long long)arg2 aaType:(unsigned int)arg3;
+ (unsigned long long)getReceiverBubbleTypeWithReceiveState:(unsigned long long)arg1;
+ (unsigned long long)getPayerBubbleTypeWithPayerState:(unsigned long long)arg1;
+ (id)getPayerIconImgNameWithPayerState:(unsigned long long)arg1;
+ (id)getReceiverIconImgNameWithReceiverState:(unsigned long long)arg1;
@end
