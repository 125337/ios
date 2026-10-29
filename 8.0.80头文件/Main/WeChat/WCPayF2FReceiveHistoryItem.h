@interface WCPayF2FReceiveHistoryItem : NSObject
{
    unsigned int _totalNum; // +0x8
    unsigned long long _timeStamp; // +0x10
    unsigned long long _timeFormat; // +0x18
    unsigned long long _totalAmount; // +0x20
}
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (unsigned long long)timeFormat;
- (void)setTimeFormat:(unsigned long long)arg1;
- (unsigned long long)totalAmount;
- (void)setTotalAmount:(unsigned long long)arg1;
- (unsigned int)totalNum;
- (void)setTotalNum:(unsigned int)arg1;
@end
