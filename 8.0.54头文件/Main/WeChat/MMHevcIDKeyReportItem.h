@interface MMHevcIDKeyReportItem : NSObject
{
    unsigned int _ID; // +0x8
    unsigned int _value; // +0xc
    unsigned long long _key; // +0x10
}
- (id)init:(unsigned int)arg1 key:(unsigned long long)arg2 value:(unsigned int)arg3;
- (unsigned int)ID;
- (void)setID:(unsigned int)arg1;
- (unsigned long long)key;
- (void)setKey:(unsigned long long)arg1;
- (unsigned int)value;
- (void)setValue:(unsigned int)arg1;
@end

