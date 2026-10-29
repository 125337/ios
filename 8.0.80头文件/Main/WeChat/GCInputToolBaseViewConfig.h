@interface GCInputToolBaseViewConfig : NSObject
{
    BOOL _showRecommendEmoticon; // +0x8
    NSString * _emoticonImgName; // +0x10
    NSString * _keyboardImgName; // +0x18
    UIColor * _backGroundBgColor; // +0x20
    UIColor * _pubbleViewBgColor; // +0x28
    UIColor * _growTextColor; // +0x30
    UIColor * _placeHolderTextColor; // +0x38
    double _growTextViewLeftMargin; // +0x40
    double _growTextViewFont; // +0x48
    CGRect _frame; // +0x50
}
+ (id)webInputToolViewConfig;
+ (id)chatRoomToolViewConfig;
- (id)emoticonImgName;
- (void)setEmoticonImgName:(id)arg1;
- (id)keyboardImgName;
- (void)setKeyboardImgName:(id)arg1;
- (id)backGroundBgColor;
- (void)setBackGroundBgColor:(id)arg1;
- (id)pubbleViewBgColor;
- (void)setPubbleViewBgColor:(id)arg1;
- (id)growTextColor;
- (void)setGrowTextColor:(id)arg1;
- (id)placeHolderTextColor;
- (void)setPlaceHolderTextColor:(id)arg1;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (BOOL)showRecommendEmoticon;
- (void)setShowRecommendEmoticon:(BOOL)arg1;
- (double)growTextViewLeftMargin;
- (void)setGrowTextViewLeftMargin:(double)arg1;
- (double)growTextViewFont;
- (void)setGrowTextViewFont:(double)arg1;
- (void).cxx_destruct;
@end
