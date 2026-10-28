@interface WCCardFieldItem : MMObject <PBCoding>
{
    unsigned int _showflag; // +0x8
    NSString * _title; // +0x10
    NSString * _subTitle; // +0x18
    NSString * _auxTitle; // +0x20
    NSString * _url; // +0x28
    NSString * _primaryColor; // +0x30
    NSString * _secondaryColor; // +0x38
    NSString * _iconUrl; // +0x40
    WCGiftCardInfo * _giftCardInfo; // +0x48
    NSString * _appBrandUserName; // +0x50
    NSString * _appBrandPass; // +0x58
    NSString * _cellIconUrl; // +0x60
    NSString * _cellLinkIconUrl; // +0x68
    NSString * _finderUsername; // +0x70
    NSString * _cellCoverUrl; // +0x78
    NSString * _cellCenterIconUrl; // +0x80
    NSString * _feedId; // +0x88
    NSString * _nonceId; // +0x90
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_auxTitle;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_showflag;
+ (void)PBArrayAdd_primaryColor;
+ (void)PBArrayAdd_secondaryColor;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)genSelfByDic:(id)arg1;
- (id)genDic;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)auxTitle;
- (void)setAuxTitle:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)primaryColor;
- (void)setPrimaryColor:(id)arg1;
- (id)secondaryColor;
- (void)setSecondaryColor:(id)arg1;
- (unsigned int)showflag;
- (void)setShowflag:(unsigned int)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)giftCardInfo;
- (void)setGiftCardInfo:(id)arg1;
- (id)appBrandUserName;
- (void)setAppBrandUserName:(id)arg1;
- (id)appBrandPass;
- (void)setAppBrandPass:(id)arg1;
- (id)cellIconUrl;
- (void)setCellIconUrl:(id)arg1;
- (id)cellLinkIconUrl;
- (void)setCellLinkIconUrl:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)cellCoverUrl;
- (void)setCellCoverUrl:(id)arg1;
- (id)cellCenterIconUrl;
- (void)setCellCenterIconUrl:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (void).cxx_destruct;
@end
