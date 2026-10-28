@interface WCFinderLiveSimpleVersionItem : NSObject
{
    BOOL _isSimpleVersion; // +0x8
    BOOL _isSelect; // +0x9
    NSString * _title; // +0x10
    NSString * _subTitle; // +0x18
}
- (BOOL)isSimpleVersion;
- (void)setIsSimpleVersion:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end
