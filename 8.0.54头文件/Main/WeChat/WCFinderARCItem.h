@interface WCFinderARCItem : NSObject
{
    unsigned long long _listType; // +0x8
    id _key; // +0x10
    id _data; // +0x18
    unsigned long long _cost; // +0x20
}
- (id)initWithData:(id)arg1 cost:(unsigned long long)arg2 forKey:(id)arg3;
- (id)description;
- (unsigned long long)listType;
- (void)setListType:(unsigned long long)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (unsigned long long)cost;
- (void)setCost:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

