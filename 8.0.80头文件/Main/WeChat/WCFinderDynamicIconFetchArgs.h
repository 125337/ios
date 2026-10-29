@interface WCFinderDynamicIconFetchArgs : NSObject <NSCopying>
{
    int _type; // +0x8
    SEL _iconIdentify; // +0x10
    UIColor * _iconColor; // +0x18
    long long _iconId; // +0x20
    NSString * _key; // +0x28
    CGSize _iconSize; // +0x30
}
- (id)copyWithZone:(_NSZone *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (SEL)iconIdentify;
- (void)setIconIdentify:(SEL)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (id)iconColor;
- (void)setIconColor:(id)arg1;
- (long long)iconId;
- (void)setIconId:(long long)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end
