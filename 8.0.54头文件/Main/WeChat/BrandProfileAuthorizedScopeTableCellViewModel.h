@interface BrandProfileAuthorizedScopeTableCellViewModel : NSObject
{
    BOOL _isManaging; // +0x8
    unsigned int _useState; // +0xc
    NSString * _scope; // +0x10
    NSString * _desc; // +0x18
    NSString * _iconUrl; // +0x20
    NSString * _darkModeIconUrl; // +0x28
    double _cellHeight; // +0x30
    JSAPIGetAllUseUserInfoResponse_PrivacyScopeItem * _originItem; // +0x38
}
- (double)cellHeight;
- (id)scope;
- (void)setScope:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned int)useState;
- (void)setUseState:(unsigned int)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)darkModeIconUrl;
- (void)setDarkModeIconUrl:(id)arg1;
- (BOOL)isManaging;
- (void)setIsManaging:(BOOL)arg1;
- (void)setCellHeight:(double)arg1;
- (id)originItem;
- (void)setOriginItem:(id)arg1;
- (void).cxx_destruct;
@end

