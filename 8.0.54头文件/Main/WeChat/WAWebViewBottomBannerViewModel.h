@interface WAWebViewBottomBannerViewModel : MMObject
{
    BOOL _roundImage; // +0x8
    BOOL _originalGame; // +0x9
    UIImage * _defaultImage; // +0x10
    NSString * _iconURLString; // +0x18
    NSString * _mmHeadImageUsername; // +0x20
    NSString * _title; // +0x28
    long long _numberOfLinesForTitle; // +0x30
    NSArray * _buttonsViewModel; // +0x38
    double _avatorTopSpacing; // +0x40
    double _avatorLeftSpacing; // +0x48
    double _buttonRightSpacing; // +0x50
    double _avatorWidth; // +0x58
    double _elementLeftOrRightSpacing; // +0x60
    double _labelTopOrBottomSpacing; // +0x68
    double _labelLeftSpacing; // +0x70
    double _labelRightSpacing; // +0x78
    UIFont * _titleFont; // +0x80
    NSString * _titleTail; // +0x88
    WAContact * _contact; // +0x90
}
- (id)init;
- (void)setButtonsViewModel:(id)arg1;
- (double)calculateHeightWithWidth:(double)arg1;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (id)iconURLString;
- (void)setIconURLString:(id)arg1;
- (id)mmHeadImageUsername;
- (void)setMmHeadImageUsername:(id)arg1;
- (BOOL)roundImage;
- (void)setRoundImage:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)numberOfLinesForTitle;
- (void)setNumberOfLinesForTitle:(long long)arg1;
- (id)buttonsViewModel;
- (double)avatorTopSpacing;
- (void)setAvatorTopSpacing:(double)arg1;
- (double)avatorLeftSpacing;
- (void)setAvatorLeftSpacing:(double)arg1;
- (double)buttonRightSpacing;
- (void)setButtonRightSpacing:(double)arg1;
- (double)avatorWidth;
- (void)setAvatorWidth:(double)arg1;
- (double)elementLeftOrRightSpacing;
- (void)setElementLeftOrRightSpacing:(double)arg1;
- (double)labelTopOrBottomSpacing;
- (void)setLabelTopOrBottomSpacing:(double)arg1;
- (double)labelLeftSpacing;
- (void)setLabelLeftSpacing:(double)arg1;
- (double)labelRightSpacing;
- (void)setLabelRightSpacing:(double)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)titleTail;
- (void)setTitleTail:(id)arg1;
- (BOOL)originalGame;
- (void)setOriginalGame:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

