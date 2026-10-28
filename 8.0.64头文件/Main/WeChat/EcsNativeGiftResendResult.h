@interface EcsNativeGiftResendResult : NSObject
{
    NSString * _seqId; // +0x8
    NSNumber * _errCode; // +0x10
    NSNumber * _giftOrderId; // +0x18
}
+ (id)makeWithSeqId:(id)arg1 errCode:(id)arg2 giftOrderId:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)seqId;
- (void)setSeqId:(id)arg1;
- (id)errCode;
- (void)setErrCode:(id)arg1;
- (id)giftOrderId;
- (void)setGiftOrderId:(id)arg1;
- (void).cxx_destruct;
@end
