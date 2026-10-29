@interface PathTag : NSObject
{
    int _tag; // +0x8
    NSString * _path; // +0x10
}
+ (id)makePath:(id)arg1 tag:(int)arg2;
+ (id)makePath:(id)arg1 requiredBiz:(int)arg2;
+ (id)makePath:(id)arg1 cachedType:(int)arg2;
- (id)path;
- (void)setPath:(id)arg1;
- (int)tag;
- (void)setTag:(int)arg1;
- (void).cxx_destruct;
@end
