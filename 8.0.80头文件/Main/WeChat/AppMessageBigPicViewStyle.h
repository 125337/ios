@interface AppMessageBigPicViewStyle : NSObject
{
    double _bigPicEdgeInset; // +0x8
    double _avatarSize; // +0x10
    double _iconNameSpacing; // +0x18
    double _nameFontSize; // +0x20
    double _picCountFontSize; // +0x28
    double _picCountIconSize; // +0x30
    double _titleFontSize; // +0x38
    double _titleEdgeInset; // +0x40
    UIColor * _bgColor; // +0x48
    double _gradientHeight; // +0x50
    id /* block */ _sizeCalculation; // +0x58
}
+ (id)forwardPreviewStyle;
+ (id)forwardPreviewSheetStyle;
+ (id /* block */)fixshortLengthCalculationWithLength:(double)arg1;
+ (id)appMessageStyle;
+ (id)messageRecordStyle;
+ (id)timelineStyle;
- (id)initWithBigPicEdgeInset:(double)arg1 avatarSize:(double)arg2 iconNameSpacing:(double)arg3 nameFontSize:(double)arg4 picCountFontSize:(double)arg5 picCountIconSize:(double)arg6 titleFontSize:(double)arg7 titleEdgeInset:(double)arg8 bgColor:(id)arg9 gradientHeight:(double)arg10 sizeCalculation:(id /* block */)arg11;
- (CGSize)estimateSizeForOriginSize:(CGSize)arg1 allowSquareStyle:(BOOL)arg2;
- (double)bigPicEdgeInset;
- (double)avatarSize;
- (double)iconNameSpacing;
- (double)nameFontSize;
- (double)picCountFontSize;
- (double)picCountIconSize;
- (double)titleFontSize;
- (double)titleEdgeInset;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (double)gradientHeight;
- (id /* block */)sizeCalculation;
- (void)setSizeCalculation:(id /* block */)arg1;
- (void).cxx_destruct;
@end
