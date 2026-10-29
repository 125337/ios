@interface GCPannelItem : NSObject
{
    NSString * _iconImage; // +0x8
    NSString * _title; // +0x10
    id /* block */ _didSelectBlock; // +0x18
}
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id /* block */)didSelectBlock;
- (void)setDidSelectBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

