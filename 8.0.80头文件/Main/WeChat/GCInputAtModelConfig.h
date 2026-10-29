@interface GCInputAtModelConfig : NSObject
{
    unsigned int _pageLimit; // +0x8
    NSString * _contentId; // +0x10
    MMGrowTextView * _growTextView; // +0x18
}
- (id)contentId;
- (void)setContentId:(id)arg1;
- (unsigned int)pageLimit;
- (void)setPageLimit:(unsigned int)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (void).cxx_destruct;
@end
