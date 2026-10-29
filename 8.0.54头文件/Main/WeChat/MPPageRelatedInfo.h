@interface MPPageRelatedInfo : MMObject <PBCoding>
{
    unsigned int _lastUpdatTimeStamp; // +0x8
    NSString * _originUrl; // +0x10
    NSString * _title; // +0x18
    NSString * _fullUrl; // +0x20
    MPPageFriendInfo * _friendInfo; // +0x28
    MPPagePayInfo * _payInfo; // +0x30
    NSString * _pageIdentifier; // +0x38
    NSString * _wordingReportInfo; // +0x40
}
+ (void)PBArrayAdd_fullUrl;
+ (void)PBArrayAdd_friendInfo;
+ (void)PBArrayAdd_payInfo;
+ (void)PBArrayAdd_lastUpdatTimeStamp;
+ (void)PBArrayAdd_pageIdentifier;
+ (void)PBArrayAdd_wordingReportInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)originUrl;
- (void)setOriginUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)fullUrl;
- (void)setFullUrl:(id)arg1;
- (id)friendInfo;
- (void)setFriendInfo:(id)arg1;
- (id)payInfo;
- (void)setPayInfo:(id)arg1;
- (unsigned int)lastUpdatTimeStamp;
- (void)setLastUpdatTimeStamp:(unsigned int)arg1;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg1;
- (id)wordingReportInfo;
- (void)setWordingReportInfo:(id)arg1;
- (void).cxx_destruct;
@end

