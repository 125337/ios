@interface QMapCacheOption : NSObject
{
    int _sizeLimit; // +0x8
    long long _type; // +0x10
}
- (id)init;
- (void)setSizeLimit:(int)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (int)sizeLimit;
@end

