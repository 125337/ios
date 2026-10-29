@interface GCRunTaskRecordInfo : NSObject
{
    double _interval; // +0x8
    NSMutableString * _additionalInfo; // +0x10
}
- (id)init;
- (id)description;
- (double)interval;
- (void)setInterval:(double)arg1;
- (id)additionalInfo;
- (void)setAdditionalInfo:(id)arg1;
- (void).cxx_destruct;
@end

