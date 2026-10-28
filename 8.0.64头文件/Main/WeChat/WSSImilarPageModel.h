@interface WSSImilarPageModel : NSObject
{
    BOOL _continueFlag; // +0x8
    unsigned int _offset; // +0xc
    unsigned int _totalCount; // +0x10
    NSArray * _items; // +0x18
    NSString * _resultWording; // +0x20
    NSString * _guideText; // +0x28
    NSString * _searchID; // +0x30
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)resultWording;
- (void)setResultWording:(id)arg1;
- (id)guideText;
- (void)setGuideText:(id)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (unsigned int)totalCount;
- (void)setTotalCount:(unsigned int)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (void).cxx_destruct;
@end
