@interface LbsLifeData : MMObject
{
    CLLocation * _location; // +0x8
    NSArray * _lbsLifeList; // +0x10
    NSArray * _iconUrlList; // +0x18
    BOOL _continueFlag; // +0x20
    BOOL _isStartFromFirst; // +0x21
    NSString * _logoUrl; // +0x28
    NSString * _searchID; // +0x30
}
- (id)location;
- (void)setLocation:(id)arg1;
- (id)lbsLifeList;
- (void)setLbsLifeList:(id)arg1;
- (id)iconUrlList;
- (void)setIconUrlList:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)logoUrl;
- (void)setLogoUrl:(id)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (BOOL)isStartFromFirst;
- (void)setIsStartFromFirst:(BOOL)arg1;
- (void).cxx_destruct;
@end

