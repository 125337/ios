@interface MMFinderLiveSubTitleData : NSObject
{
    BOOL _canStartInSemantics; // +0x8
    BOOL _isLayout; // +0x9
    NSString * _subTitle; // +0x10
    long long _subTitleType; // +0x18
    long long _category; // +0x20
    long long _currentIndex; // +0x28
    unsigned long long _clipLengthForSupply; // +0x30
    long long _layoutStartLineIndex; // +0x38
    double _layoutStartOffsetX; // +0x40
}
+ (id)createSubTitleData:(id)arg1;
- (id)init;
- (BOOL)isValid;
- (void)clearLayoutData;
- (id)convertToSupplySubTitleWithClipLength:(unsigned long long)arg1;
- (void)initDefaultData;
- (void)setLayoutStartOffsetX:(double)arg1;
- (void)setLayoutStartLineIndex:(long long)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (long long)subTitleType;
- (void)setSubTitleType:(long long)arg1;
- (long long)category;
- (void)setCategory:(long long)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (BOOL)canStartInSemantics;
- (void)setCanStartInSemantics:(BOOL)arg1;
- (unsigned long long)clipLengthForSupply;
- (void)setClipLengthForSupply:(unsigned long long)arg1;
- (BOOL)isLayout;
- (void)setIsLayout:(BOOL)arg1;
- (long long)layoutStartLineIndex;
- (double)layoutStartOffsetX;
- (void).cxx_destruct;
@end

