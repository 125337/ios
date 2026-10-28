@interface MMLiveCommentUIStateInfo : NSObject
{
    double _currentDynamicFontScale; // +0x8
    double _currentCommentTableWidth; // +0x10
    NSString * _commentlayoutIdentifyKey; // +0x18
    double _currentCommentTableHeight; // +0x20
}
- (void)setCurrentDynamicFontScale:(double)arg1;
- (void)setCurrentCommentTableWidth:(double)arg1;
- (void)updateCommentLayoutIdentifyKey;
- (double)currentDynamicFontScale;
- (double)currentCommentTableWidth;
- (id)commentlayoutIdentifyKey;
- (void)setCommentlayoutIdentifyKey:(id)arg1;
- (double)currentCommentTableHeight;
- (void)setCurrentCommentTableHeight:(double)arg1;
- (void).cxx_destruct;
@end
