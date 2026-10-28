@interface MMFinderLiveKSKitLyricSentenceTextView : UIView
{
    UIColor * _textColor; // +0x8
    NSMutableArray * _lyricLabelList; // +0x10
}
+ (id)lyricWordFont;
- (id)initWithLyricWords:(id)arg1 textColor:(id)arg2;
- (void)layoutSubviews;
- (void)createLyricLabels:(id)arg1;
- (id)createLyricLabel:(id)arg1;
- (void)updateSelfSize:(CGSize)arg1;
- (void)updateLyricLabelsCenterY;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)lyricLabelList;
- (void)setLyricLabelList:(id)arg1;
- (void).cxx_destruct;
@end
