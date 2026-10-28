@interface WCShareItem : NSObject
{
    long long _type; // +0x8
    NSData * _data; // +0x10
    NSString * _fileName; // +0x18
}
+ (id)itemWithDictionary:(id)arg1;
- (id)toDictionary;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (void).cxx_destruct;
@end
