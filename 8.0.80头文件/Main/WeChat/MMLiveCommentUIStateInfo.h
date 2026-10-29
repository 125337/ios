@interface MMLiveCommentUIStateInfo : NSObject
{
    BOOL _shouldDisplayNewHeaderStyle; // +0x8
    double _currentDynamicFontScale; // +0x10
    double _currentCommentTableWidth; // +0x18
    NSString * _commentlayoutIdentifyKey; // +0x20
    double _currentCommentTableHeight; // +0x28
    UIImage * _defaultNewStyleHeaderImage; // +0x30
}
- (id)init;
- (void)setCurrentDynamicFontScale:(double)arg1;
- (void)setCurrentCommentTableWidth:(double)arg1;
- (void)updateCommentLayoutIdentifyKey;
- (id)defaultNewStyleHeaderImage;
- (BOOL)updateShouldDisplayNewHeaderStyle;
- (double)currentDynamicFontScale;
- (double)currentCommentTableWidth;
- (id)commentlayoutIdentifyKey;
- (void)setCommentlayoutIdentifyKey:(id)arg1;
- (double)currentCommentTableHeight;
- (void)setCurrentCommentTableHeight:(double)arg1;
- (BOOL)shouldDisplayNewHeaderStyle;
- (void)setShouldDisplayNewHeaderStyle:(BOOL)arg1;
- (void)setDefaultNewStyleHeaderImage:(id)arg1;
- (void).cxx_destruct;
@end
