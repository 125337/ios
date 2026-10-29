@interface GameChatExpireRecord : NSObject
{
    NSString * _recordValue; // +0x8
    NSString * _recordKey; // +0x10
    double _recordTime; // +0x18
    double _maxAge; // +0x20
}
+ (id)modelFromJsonStr:(id)arg1;
- (id)modelJsonStr;
- (id)recordValue;
- (void)setRecordValue:(id)arg1;
- (id)recordKey;
- (void)setRecordKey:(id)arg1;
- (double)recordTime;
- (void)setRecordTime:(double)arg1;
- (double)maxAge;
- (void)setMaxAge:(double)arg1;
- (void).cxx_destruct;
@end

