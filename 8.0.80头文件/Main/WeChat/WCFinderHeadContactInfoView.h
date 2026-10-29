@interface WCFinderHeadContactInfoView : UIView
{
    BOOL _hasChangeFontSize; // +0x8
    RichTextView * _nameLabel; // +0x10
    UIFont * _nameLabelCustomFont; // +0x18
    double _maxWidth; // +0x20
    NSArray * _otherViewsArray; // +0x28
    UIView * _lastShowView; // +0x30
    NSMutableArray * _showViewArray; // +0x38
    unsigned long long _currentShowLineType; // +0x40
    NSHashTable * _currentOtherViewsArray; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (id)nameLabelFont;
- (void)updateNickname:(id)arg1 maxWidth:(double)arg2 otherViews:(id)arg3;
- (CGRect)getLastViewFrame;
- (BOOL)addViewOverMaxWidth:(id)arg1;
- (CGRect)getLastLineRect;
- (void)checkShouldAdjustNameLabelWithView:(id)arg1;
- (BOOL)layoutSubView:(id)arg1 lastView:(id)arg2;
- (void)reloadLayout;
- (void)relayoutShowArray;
- (long long)overrideUserInterfaceStyle;
- (id)genGradientMaskView;
- (id)getLayoutCache;
- (unsigned long long)lineType;
- (BOOL)hasReachedLineLimit;
- (id)otherDisplayViews;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)nameLabelCustomFont;
- (void)setNameLabelCustomFont:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)otherViewsArray;
- (void)setOtherViewsArray:(id)arg1;
- (id)lastShowView;
- (void)setLastShowView:(id)arg1;
- (id)showViewArray;
- (void)setShowViewArray:(id)arg1;
- (unsigned long long)currentShowLineType;
- (void)setCurrentShowLineType:(unsigned long long)arg1;
- (BOOL)hasChangeFontSize;
- (void)setHasChangeFontSize:(BOOL)arg1;
- (id)currentOtherViewsArray;
- (void)setCurrentOtherViewsArray:(id)arg1;
- (void).cxx_destruct;
@end
