@interface WCFinderPostPOICustomControl : UIControl
{
    unsigned int _poiStyle; // +0x8
    id <WCFinderPostPOICustomControlDelegate> _delegate; // +0x10
    NSString * _postSessionId; // +0x18
    UIColor * _unselectedThemeColor; // +0x20
    UIColor * _selectedThemeColor; // +0x28
    double _iconWidth; // +0x30
    double _defaultHeight; // +0x38
    NSMutableArray * _bubbleViewArray; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 unselectedThemeColor:(id)arg2 selectedThemeColor:(id)arg3 iconWidth:(double)arg4 defaultHeight:(double)arg5;
- (void)updateWithPoiStyle:(unsigned int)arg1 titleContent:(id)arg2 selectGuideTips:(id)arg3 guidePosition:(unsigned long long)arg4 recommendMaxLine:(unsigned long long)arg5 recommendLocationArray:(id)arg6 poiName:(id)arg7;
- (id)getTitleLabel;
- (id)buildArrowImageView;
- (void)_setUpSelectedView:(id)arg1 selectGuideTips:(id)arg2;
- (void)_setUpDefaultViewWithSelectWithTitle:(id)arg1 guideTips:(id)arg2 guidePosition:(unsigned long long)arg3;
- (void)_setUpRecommendBy:(unsigned long long)arg1 titleContent:(id)arg2 recommendLocationArray:(id)arg3 selectGuideTips:(id)arg4;
- (id)buildBubbleTextView:(id)arg1 maxWidth:(double)arg2 attachObject:(id)arg3 index:(long long)arg4;
- (void)bindRecommendBubbleReport;
- (void)_removeBubbleViewArray;
- (void)removeViews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)postSessionId;
- (void)setPostSessionId:(id)arg1;
- (id)unselectedThemeColor;
- (void)setUnselectedThemeColor:(id)arg1;
- (id)selectedThemeColor;
- (void)setSelectedThemeColor:(id)arg1;
- (double)iconWidth;
- (void)setIconWidth:(double)arg1;
- (double)defaultHeight;
- (void)setDefaultHeight:(double)arg1;
- (unsigned int)poiStyle;
- (void)setPoiStyle:(unsigned int)arg1;
- (id)bubbleViewArray;
- (void)setBubbleViewArray:(id)arg1;
- (void).cxx_destruct;
@end

