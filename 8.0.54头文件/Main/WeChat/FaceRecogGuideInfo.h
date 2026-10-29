@interface FaceRecogGuideInfo : MMObject
{
    NSString * _guideTitle; // +0x8
    NSString * _firstStepNumberIconName; // +0x10
    NSString * _firstStepContent; // +0x18
    NSString * _firstStepIconName; // +0x20
    NSString * _secondStepNumberIconName; // +0x28
    NSString * _secondStepContent; // +0x30
    NSString * _secondStepIconName; // +0x38
}
+ (id)genDefaultInfo;
- (id)guideTitle;
- (void)setGuideTitle:(id)arg1;
- (id)firstStepNumberIconName;
- (void)setFirstStepNumberIconName:(id)arg1;
- (id)firstStepContent;
- (void)setFirstStepContent:(id)arg1;
- (id)firstStepIconName;
- (void)setFirstStepIconName:(id)arg1;
- (id)secondStepNumberIconName;
- (void)setSecondStepNumberIconName:(id)arg1;
- (id)secondStepContent;
- (void)setSecondStepContent:(id)arg1;
- (id)secondStepIconName;
- (void)setSecondStepIconName:(id)arg1;
- (void).cxx_destruct;
@end

