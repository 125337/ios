@interface MMFinderLiveFansGroupIntroViewConfig : NSObject
{
    BOOL _isFree; // +0x8
    NSString * _iconSvgImgName; // +0x10
    NSString * _iconHighlightSvgImgName; // +0x18
    NSString * _title; // +0x20
    NSString * _price; // +0x28
    NSString * _pricePeriod; // +0x30
    NSArray * _rights; // +0x38
    MMFinderLiveFansGroupIntroViewColorConfig * _colorConfig; // +0x40
    CGSize _iconImageRatio; // +0x48
}
- (id)iconSvgImgName;
- (void)setIconSvgImgName:(id)arg1;
- (CGSize)iconImageRatio;
- (void)setIconImageRatio:(CGSize)arg1;
- (id)iconHighlightSvgImgName;
- (void)setIconHighlightSvgImgName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)price;
- (void)setPrice:(id)arg1;
- (id)pricePeriod;
- (void)setPricePeriod:(id)arg1;
- (id)rights;
- (void)setRights:(id)arg1;
- (BOOL)isFree;
- (void)setIsFree:(BOOL)arg1;
- (id)colorConfig;
- (void)setColorConfig:(id)arg1;
- (void).cxx_destruct;
@end
