@interface MMFinderLiveFeedStreamBarrageHotWordLegacyView : UIView <MMFinderLiveFeedStreamBarrageHotWordViewProtocol>
{
    NSString * _content; // +0x8
    MMFinderLiveFeedStreamBarrageStyleConfig * _styleConfig; // +0x10
    double _maxWidth; // +0x18
    unsigned long long _currentCnt; // +0x20
    unsigned long long _targetCnt; // +0x28
    unsigned long long _step; // +0x30
    RichTextView * _contentTextView; // +0x38
    RichTextView * _cntTextView; // +0x40
}
- (id)initWithContent:(id)arg1 startCnt:(unsigned long long)arg2 styleConfig:(id)arg3 maxWidth:(double)arg4;
- (void)updateTargetCnt:(unsigned long long)arg1;
- (void)startAnimationWithDuration:(double)arg1;
- (void)layoutContent;
- (void)updateTextView;
- (id)getCurrentSubTitleTextAttributeObj;
- (id)content;
- (void)setContent:(id)arg1;
- (id)styleConfig;
- (void)setStyleConfig:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (unsigned long long)currentCnt;
- (void)setCurrentCnt:(unsigned long long)arg1;
- (unsigned long long)targetCnt;
- (void)setTargetCnt:(unsigned long long)arg1;
- (unsigned long long)step;
- (void)setStep:(unsigned long long)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)cntTextView;
- (void)setCntTextView:(id)arg1;
- (void).cxx_destruct;
@end
