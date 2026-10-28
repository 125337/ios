@interface HistoryItem : NSObject <NSCoding>
{
    unsigned long long _type; // +0x8
    NSNumber * _updateTime; // +0x10
    id _dataValue; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)updateTime;
- (void)setUpdateTime:(id)arg1;
- (id)dataValue;
- (void)setDataValue:(id)arg1;
- (void).cxx_destruct;
@end
