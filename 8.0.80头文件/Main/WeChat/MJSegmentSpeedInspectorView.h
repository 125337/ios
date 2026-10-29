@interface MJSegmentSpeedInspectorView : MJSegmentInspectorView <MJPrecisionPickerViewDataSource, MJPrecisionPickerViewDelegate>
{
    id <MJSegmentSpeedInspectorViewDelegate> _delegate; // +0x8
    MJSpeedParameterPickerView * _parameterPickerView; // +0x10
    UIImage * _lowerIndicatorImage; // +0x18
    UIImage * _higherIndicatorImage; // +0x20
    NSDictionary * _pickerStrideLabelsByValue; // +0x28
    UISelectionFeedbackGenerator * _feedback; // +0x30
}
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (id)precisionPickerView:(id)arg1 contentForValue:(long long)arg2;
- (id)precisionPickerView:(id)arg1 labelForValue:(long long)arg2;
- (id)precisionPickerView:(id)arg1 contentsGravityForValue:(long long)arg2;
- (void)precisionPickerView:(id)arg1 didSelectValue:(long long)arg2;
- (void)precisionPickerView:(id)arg1 didScrollAcrossValue:(long long)arg2;
- (BOOL)precisionPickerView:(id)arg1 shouldAutoSnapForValue:(long long)arg2;
- (id)feedback;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)parameterPickerView;
- (id)lowerIndicatorImage;
- (void)setLowerIndicatorImage:(id)arg1;
- (id)higherIndicatorImage;
- (void)setHigherIndicatorImage:(id)arg1;
- (id)pickerStrideLabelsByValue;
- (void)setPickerStrideLabelsByValue:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void).cxx_destruct;
@end
