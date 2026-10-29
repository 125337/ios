@interface WCTableViewCellLeftConfig : NSObject
{
    BOOL _selected; // +0x8
    BOOL _titleCenter; // +0x9
    unsigned long long _mode; // +0x10
    NSString * _title; // +0x18
    double _customTitleLeft; // +0x20
    double _customTitleTop; // +0x28
    double _customTitleMaxWidth; // +0x30
    NSValue * _customImageSize; // +0x38
    NSNumber * _imageViewLeftMargin; // +0x40
    NSNumber * _imageViewRightMargin; // +0x48
    UIColor * _titleColor; // +0x50
    UIFont * _titleFont; // +0x58
    unsigned long long _titleNumberOfLines; // +0x60
    NSString * _detail; // +0x68
    UIColor * _detailColor; // +0x70
    long long _customDetailBreakMode; // +0x78
    double _customDetailMaxWidth; // +0x80
    double _customDetailHeight; // +0x88
    double _customDetailTopMargin; // +0x90
    long long _customDetailNumberOfLines; // +0x98
    unsigned long long _subOptionStyle; // +0xa0
    UIImage * _image; // +0xa8
    NSString * _imageURL; // +0xb0
    UIImage * _smallIcon; // +0xb8
    UIColor * _imageTintColor; // +0xc0
    NSString * _badgeText; // +0xc8
    NSString * _hintText; // +0xd0
    UIView * _customView; // +0xd8
    NSValue * _customViewSize; // +0xe0
    NSNumber * _customViewRightMargin; // +0xe8
}
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
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
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (unsigned long long)titleNumberOfLines;
- (void)setTitleNumberOfLines:(unsigned long long)arg1;
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
- (void).cxx_destruct;
@end

