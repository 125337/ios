@interface IntelligentClassificationItem : MMObject
{
    unsigned int _labelId; // +0x8
    float _score; // +0xc
    NSString * _labelName; // +0x10
    NSString * _originLabelId; // +0x18
}
- (unsigned int)labelId;
- (void)setLabelId:(unsigned int)arg1;
- (float)score;
- (void)setScore:(float)arg1;
- (id)labelName;
- (void)setLabelName:(id)arg1;
- (id)originLabelId;
- (void)setOriginLabelId:(id)arg1;
- (void).cxx_destruct;
@end

