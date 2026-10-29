@interface DBContactSocial : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _wcFlag; // +0x8
    NSString * _mobileHash; // +0x10
    NSString * _mobileFullHash; // +0x18
    unsigned long long _qqUin; // +0x20
    NSString * _linkedInID; // +0x28
    NSString * _linkedInName; // +0x30
    NSString * _linkedInPublicUrl; // +0x38
    NSString * _wcBGImgObjectID; // +0x40
    NSString * _wcBGImgID; // +0x48
    NSString * _cardUrl; // +0x50
    NSMutableArray * _phoneList; // +0x58
    NSString * _weiDianInfo; // +0x60
    NSMutableArray * _cardList; // +0x68
}
+ (void)PBArrayAdd_mobileHash;
+ (void)PBArrayAdd_mobileFullHash;
+ (void)PBArrayAdd_qqUin;
+ (void)PBArrayAdd_linkedInID;
+ (void)PBArrayAdd_linkedInName;
+ (void)PBArrayAdd_linkedInPublicUrl;
+ (void)PBArrayAdd_wcFlag;
+ (void)PBArrayAdd_wcBGImgObjectID;
+ (void)PBArrayAdd_wcBGImgID;
+ (void)PBArrayAdd_cardUrl;
+ (void)PBArrayAdd_phoneList;
+ (void)PBArrayAdd_weiDianInfo;
+ (void)PBArrayAdd_cardList;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)mobileHash;
- (void)setMobileHash:(id)arg1;
- (id)mobileFullHash;
- (void)setMobileFullHash:(id)arg1;
- (unsigned long long)qqUin;
- (void)setQqUin:(unsigned long long)arg1;
- (id)linkedInID;
- (void)setLinkedInID:(id)arg1;
- (id)linkedInName;
- (void)setLinkedInName:(id)arg1;
- (id)linkedInPublicUrl;
- (void)setLinkedInPublicUrl:(id)arg1;
- (unsigned int)wcFlag;
- (void)setWcFlag:(unsigned int)arg1;
- (id)wcBGImgObjectID;
- (void)setWcBGImgObjectID:(id)arg1;
- (id)wcBGImgID;
- (void)setWcBGImgID:(id)arg1;
- (id)cardUrl;
- (void)setCardUrl:(id)arg1;
- (id)phoneList;
- (void)setPhoneList:(id)arg1;
- (id)weiDianInfo;
- (void)setWeiDianInfo:(id)arg1;
- (id)cardList;
- (void)setCardList:(id)arg1;
- (void).cxx_destruct;
@end

