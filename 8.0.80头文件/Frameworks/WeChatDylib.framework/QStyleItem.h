@interface QStyleItem : NSObject
{
    long long _styleID; // +0x8
    long long _index; // +0x10
    long long _order; // +0x18
}
- (id)initWithJSON:(id)arg1;
- (id)toJSON;
- (long long)styleID;
- (long long)index;
- (long long)order;
@end
