@interface LBSLifeListRequestParameter : NSObject
{
    BOOL _fromStart; // +0x8
    BOOL _requestFullRange; // +0x9
    unsigned int _scene; // +0xc
    unsigned int _entryTime; // +0x10
    CLLocation * _location; // +0x18
    NSString * _keyword; // +0x20
}
- (id)location;
- (void)setLocation:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)entryTime;
- (void)setEntryTime:(unsigned int)arg1;
- (BOOL)fromStart;
- (void)setFromStart:(BOOL)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (BOOL)requestFullRange;
- (void)setRequestFullRange:(BOOL)arg1;
- (void).cxx_destruct;
@end
