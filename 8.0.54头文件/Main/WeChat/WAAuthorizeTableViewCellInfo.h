@interface WAAuthorizeTableViewCellInfo : NSObject
{
    BOOL _isSelect; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _mainTitle; // +0x18
    NSString * _subTitle; // +0x20
}
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)mainTitle;
- (void)setMainTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end

