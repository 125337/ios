@interface WCTableViewCellLeftConfig : NSObject
{
    BOOL _isMakeImageCenterWhenHaveDetail; // +0x8
    BOOL _bDetailRichTextView; // +0x9
    BOOL _selected; // +0xa
    BOOL _titleCenter; // +0xb
    BOOL _isSubOptionLineCenterTitle; // +0xc
    unsigned long long _mode; // +0x10
    NSString * _title; // +0x18
    NSAttributedString * _titleAttributed; // +0x20
    double _customTitleLeft; // +0x28
    double _customTitleTop; // +0x30
    double _customTitleMaxWidth; // +0x38
    NSValue * _customImageSize; // +0x40
    NSNumber * _imageViewLeftMargin; // +0x48
    NSNumber * _imageViewRightMargin; // +0x50
    UIColor * _titleColor; // +0x58
    UIFont * _titleFont; // +0x60
    unsigned long long _titleNumberOfLines; // +0x68
    id /* block */ _onDetailLinkClicked; // +0x70
    NSString * _detail; // +0x78
    UIColor * _detailColor; // +0x80
    long long _customDetailBreakMode; // +0x88
    double _customDetailMaxWidth; // +0x90
    double _customDetailHeight; // +0x98
    double _customDetailTopMargin; // +0xa0
    long long _customDetailNumberOfLines; // +0xa8
    unsigned long long _subOptionStyle; // +0xb0
    UIImage * _image; // +0xb8
    NSString * _imageURL; // +0xc0
    UIImage * _smallIcon; // +0xc8
    double _smallIconLeftMargin; // +0xd0
    UIColor * _imageTintColor; // +0xd8
    NSString * _badgeText; // +0xe0
    NSString * _hintText; // +0xe8
    UIView * _customView; // +0xf0
    NSValue * _customViewSize; // +0xf8
    NSNumber * _customViewRightMargin; // +0x100
    CGSize _smallIconSize; // +0x108
}
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleAttributed;
- (void)setTitleAttributed:(id)arg1;
- (double)customTitleLeft;
- (void)setCustomTitleLeft:(double)arg1;
- (double)customTitleTop;
- (void)setCustomTitleTop:(double)arg1;
- (double)customTitleMaxWidth;
- (void)setCustomTitleMaxWidth:(double)arg1;
- (id)customImageSize;
- (void)setCustomImageSize:(id)arg1;
- (id)imageViewLeftMargin;
- (void)setImageViewLeftMargin:(id)arg1;
- (id)imageViewRightMargin;
- (void)setImageViewRightMargin:(id)arg1;
- (BOOL)isMakeImageCenterWhenHaveDetail;
- (void)setIsMakeImageCenterWhenHaveDetail:(BOOL)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (unsigned long long)titleNumberOfLines;
- (void)setTitleNumberOfLines:(unsigned long long)arg1;
- (BOOL)bDetailRichTextView;
- (void)setBDetailRichTextView:(BOOL)arg1;
- (id /* block */)onDetailLinkClicked;
- (void)setOnDetailLinkClicked:(id /* block */)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)detailColor;
- (void)setDetailColor:(id)arg1;
- (long long)customDetailBreakMode;
- (void)setCustomDetailBreakMode:(long long)arg1;
- (double)customDetailMaxWidth;
- (void)setCustomDetailMaxWidth:(double)arg1;
- (double)customDetailHeight;
- (void)setCustomDetailHeight:(double)arg1;
- (double)customDetailTopMargin;
- (void)setCustomDetailTopMargin:(double)arg1;
- (long long)customDetailNumberOfLines;
- (void)setCustomDetailNumberOfLines:(long long)arg1;
- (unsigned long long)subOptionStyle;
- (void)setSubOptionStyle:(unsigned long long)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (id)smallIcon;
- (void)setSmallIcon:(id)arg1;
- (CGSize)smallIconSize;
- (void)setSmallIconSize:(CGSize)arg1;
- (double)smallIconLeftMargin;
- (void)setSmallIconLeftMargin:(double)arg1;
- (id)imageTintColor;
- (void)setImageTintColor:(id)arg1;
- (id)badgeText;
- (void)setBadgeText:(id)arg1;
- (id)hintText;
- (void)setHintText:(id)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (id)customViewSize;
- (void)setCustomViewSize:(id)arg1;
- (id)customViewRightMargin;
- (void)setCustomViewRightMargin:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (BOOL)titleCenter;
- (void)setTitleCenter:(BOOL)arg1;
- (BOOL)isSubOptionLineCenterTitle;
- (void)setIsSubOptionLineCenterTitle:(BOOL)arg1;
- (void).cxx_destruct;
@end
