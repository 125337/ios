@interface SearchCgiGuideVertEntry : NSObject
{
    BOOL _needHideKeyBoard; // +0x8
    BOOL _needUpdateLocation; // +0x9
    unsigned int _opType; // +0xc
    unsigned long long _businessType; // +0x10
    NSString * _title; // +0x18
    unsigned long long _index; // +0x20
}
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (BOOL)needHideKeyBoard;
- (void)setNeedHideKeyBoard:(BOOL)arg1;
- (BOOL)needUpdateLocation;
- (void)setNeedUpdateLocation:(BOOL)arg1;
- (void).cxx_destruct;
@end

