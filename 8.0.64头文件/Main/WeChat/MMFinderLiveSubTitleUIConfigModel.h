@interface MMFinderLiveSubTitleUIConfigModel : NSObject
{
    double _maxContentWidth; // +0x8
    unsigned long long _chnMaxLine; // +0x10
    unsigned long long _engMaxLine; // +0x18
    TextStyleAttributeObj * _chnTextAttributeObj; // +0x20
    TextStyleAttributeObj * _engTextAttributeObj; // +0x28
    UIFont * _chnSubTitleFont; // +0x30
    UIFont * _engSubTitleFont; // +0x38
    unsigned long long _chnDisplayMode; // +0x40
    unsigned long long _engDisplayMode; // +0x48
}
+ (unsigned long long)getFinalLinesWithMaxLine:(unsigned long long)arg1 supportStable:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)chnTextLine;
- (unsigned long long)engTextLine;
- (double)maxContentWidth;
- (void)setMaxContentWidth:(double)arg1;
- (unsigned long long)chnMaxLine;
- (void)setChnMaxLine:(unsigned long long)arg1;
- (unsigned long long)engMaxLine;
- (void)setEngMaxLine:(unsigned long long)arg1;
- (id)chnTextAttributeObj;
- (void)setChnTextAttributeObj:(id)arg1;
- (id)engTextAttributeObj;
- (void)setEngTextAttributeObj:(id)arg1;
- (id)chnSubTitleFont;
- (void)setChnSubTitleFont:(id)arg1;
- (id)engSubTitleFont;
- (void)setEngSubTitleFont:(id)arg1;
- (unsigned long long)chnDisplayMode;
- (void)setChnDisplayMode:(unsigned long long)arg1;
- (unsigned long long)engDisplayMode;
- (void)setEngDisplayMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
