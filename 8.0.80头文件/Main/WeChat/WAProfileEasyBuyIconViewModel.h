@interface WAProfileEasyBuyIconViewModel : NSObject
{
    unsigned int _iconWidth; // +0x8
    unsigned int _iconHeight; // +0xc
    NSString * _desc; // +0x10
    UIFont * _descFont; // +0x18
    UIColor * _descColor; // +0x20
    NSString * _iconUrl; // +0x28
}
+ (id)createWithRelievedBuyInfo:(id)arg1 position:(long long)arg2;
- (CGSize)viewSize;
- (long long)descViewWidth;
- (long long)iconViewWidth;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)descFont;
- (void)setDescFont:(id)arg1;
- (id)descColor;
- (void)setDescColor:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (unsigned int)iconWidth;
- (void)setIconWidth:(unsigned int)arg1;
- (unsigned int)iconHeight;
- (void)setIconHeight:(unsigned int)arg1;
- (void).cxx_destruct;
@end
