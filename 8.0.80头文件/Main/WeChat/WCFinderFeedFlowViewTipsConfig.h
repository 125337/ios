@interface WCFinderFeedFlowViewTipsConfig : NSObject
{
    unsigned long long _styleFlag; // +0x8
    UIImage * _iconImage; // +0x10
    NSString * _tipsText; // +0x18
    NSString * _endText; // +0x20
    NSString * _endBtnText; // +0x28
}
+ (id)defaultConfigOfHeaderViewInState:(unsigned long long)arg1;
+ (id)defaultConfigOfEmptyTipsViewInState:(unsigned long long)arg1;
+ (id)defaultConfigOfFooterViewInState:(unsigned long long)arg1;
+ (unsigned long long)convertFeedFlowViewStateToEmptyTipsViewState:(unsigned long long)arg1;
- (id)initWithTipsType:(unsigned long long)arg1 inState:(unsigned long long)arg2;
- (unsigned long long)styleFlag;
- (void)setStyleFlag:(unsigned long long)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)tipsText;
- (void)setTipsText:(id)arg1;
- (id)endText;
- (void)setEndText:(id)arg1;
- (id)endBtnText;
- (void)setEndBtnText:(id)arg1;
- (void).cxx_destruct;
@end
