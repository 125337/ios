@interface MMScrollableActionSheetVerticalRowInfo : MMObject
{
    BOOL _isLoading; // +0x8
    unsigned int _rowType; // +0xc
    NSString * _webImageUrl; // +0x10
    UIImage * _localImage; // +0x18
    double _cornerRadius; // +0x20
    NSString * _title; // +0x28
    NSAttributedString * _attributedTitle; // +0x30
    NSString * _subtitle; // +0x38
}
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (unsigned int)rowType;
- (void)setRowType:(unsigned int)arg1;
- (id)webImageUrl;
- (void)setWebImageUrl:(id)arg1;
- (id)localImage;
- (void)setLocalImage:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void).cxx_destruct;
@end

