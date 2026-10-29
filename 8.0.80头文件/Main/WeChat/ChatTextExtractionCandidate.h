@interface ChatTextExtractionCandidate : NSObject
{
    float _probability; // +0x8
    NSString * _text; // +0x10
    NSString * _type; // +0x18
}
- (id)init;
- (id)text;
- (void)setText:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (float)probability;
- (void)setProbability:(float)arg1;
- (void).cxx_destruct;
@end
