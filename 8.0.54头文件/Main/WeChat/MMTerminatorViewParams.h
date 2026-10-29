@interface MMTerminatorViewParams : NSObject
{
    BOOL _isIconImageUserInteractionEnabled; // +0x8
    BOOL _isTitleUserInteractionEnabled; // +0x9
    BOOL _isSubtitleUserInteractionEnabled; // +0xa
    UIImage * _iconImage; // +0x10
    UIColor * _lineColor; // +0x18
    NSString * _title; // +0x20
    UIFont * _titleFont; // +0x28
    UIColor * _titleColor; // +0x30
    NSString * _subtitle; // +0x38
    UIFont * _subtitleFont; // +0x40
    UIColor * _subtitleColor; // +0x48
}
+ (id)defaultParams;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (BOOL)isIconImageUserInteractionEnabled;
- (void)setIsIconImageUserInteractionEnabled:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (BOOL)isTitleUserInteractionEnabled;
- (void)setIsTitleUserInteractionEnabled:(BOOL)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)subtitleFont;
- (void)setSubtitleFont:(id)arg1;
- (id)subtitleColor;
- (void)setSubtitleColor:(id)arg1;
- (BOOL)isSubtitleUserInteractionEnabled;
- (void)setIsSubtitleUserInteractionEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

