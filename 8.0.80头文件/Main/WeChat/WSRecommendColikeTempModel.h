@interface WSRecommendColikeTempModel : NSObject
{
    BOOL _continueFlag; // +0x8
    int _type; // +0xc
    unsigned int _totalCount; // +0x10
    unsigned int _updateFlag; // +0x14
    NSMutableArray * _colikeList; // +0x18
    unsigned long long _version; // +0x20
}
- (id)colikeList;
- (void)setColikeList:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)totalCount;
- (void)setTotalCount:(unsigned int)arg1;
- (unsigned int)updateFlag;
- (void)setUpdateFlag:(unsigned int)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
