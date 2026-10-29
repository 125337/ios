@interface MMFinderLiveKSKitLyricSentenceTextView : UIView
{
    BOOL _useDefaultTextColor; // +0x8
    MMFinderLiveKSKitLyricStyle * _lyricStyle; // +0x10
    NSMutableArray * _lyricLabelList; // +0x18
}
+ (id)lyricWordFont;
- (id)initWithLyricWords:(id)arg1 lyricStyle:(id)arg2 useDefaultTextColor:(BOOL)arg3;
- (void)layoutSubviews;
- (void)updateLyricStyle:(id)arg1;
- (void)createLyricLabels:(id)arg1;
- (void)layoutLabels;
- (id)createLyricLabel:(id)arg1;
- (void)updateSelfSize:(CGSize)arg1;
- (void)updateLyricLabelsCenter;
- (void)updateTextColor:(id)arg1;
- (void)updateTextAngle;
- (BOOL)useDefaultTextColor;
- (void)setUseDefaultTextColor:(BOOL)arg1;
- (id)lyricStyle;
- (void)setLyricStyle:(id)arg1;
- (id)lyricLabelList;
- (void)setLyricLabelList:(id)arg1;
- (void).cxx_destruct;
@end
