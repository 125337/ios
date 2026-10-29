@interface WCFinderLBSCardWordingListView : UIView
{
    NSArray * _wordings; // +0x8
    NSMutableArray * _wordingLabels; // +0x10
    unsigned long long _lineNumber; // +0x18
    double _layoutWidth; // +0x20
    WCFinderLBSCardWordingListStyle * _style; // +0x28
}
+ (id)layoutPropertiesWithWordings:(id)arg1 lineNumber:(unsigned long long)arg2 width:(double)arg3;
+ (double)heightWithWordings:(id)arg1 lineNumber:(unsigned long long)arg2 width:(double)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(id)arg2;
- (void)updateStyle:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithWordings:(id)arg1 lineNumber:(unsigned long long)arg2;
- (void)updateUI;
- (void)ensureWordingLabels;
- (id)createDescWordingLabel;
- (id)wordings;
- (void)setWordings:(id)arg1;
- (id)wordingLabels;
- (void)setWordingLabels:(id)arg1;
- (unsigned long long)lineNumber;
- (void)setLineNumber:(unsigned long long)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (void).cxx_destruct;
@end
