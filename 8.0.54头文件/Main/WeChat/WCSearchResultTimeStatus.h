@interface WCSearchResultTimeStatus : NSObject
{
    unsigned int _section; // +0x8
    unsigned int _index; // +0xc
    unsigned int _subType; // +0x10
    unsigned int _matchType; // +0x14
    unsigned long long _showTimeStamp; // +0x18
    unsigned long long _exposeTimeStamp; // +0x20
    unsigned long long _clickSubType; // +0x28
    long long _boxIndex; // +0x30
    NSString * _itemUserName; // +0x38
}
- (id)init;
- (unsigned long long)showTimeStamp;
- (void)setShowTimeStamp:(unsigned long long)arg1;
- (unsigned long long)exposeTimeStamp;
- (void)setExposeTimeStamp:(unsigned long long)arg1;
- (unsigned int)section;
- (void)setSection:(unsigned int)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
- (unsigned long long)clickSubType;
- (void)setClickSubType:(unsigned long long)arg1;
- (long long)boxIndex;
- (void)setBoxIndex:(long long)arg1;
- (unsigned int)matchType;
- (void)setMatchType:(unsigned int)arg1;
- (id)itemUserName;
- (void)setItemUserName:(id)arg1;
- (void).cxx_destruct;
@end

