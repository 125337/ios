@interface TPCacheObject : NSObject
{
    double _expireTime; // +0x8
    NSString * _value; // +0x10
    NSString * _key; // +0x18
    double _saveTime; // +0x20
}
- (BOOL)isDue;
- (double)expireTime;
- (void)setExpireTime:(double)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (double)saveTime;
- (void)setSaveTime:(double)arg1;
- (void).cxx_destruct;
@end
