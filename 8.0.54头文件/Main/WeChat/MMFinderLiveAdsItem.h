@interface MMFinderLiveAdsItem : NSObject <NSCopying>
{
    BOOL _isPromoting; // +0x8
    unsigned int _source; // +0xc
    unsigned int _resourceType; // +0x10
    unsigned int _subType; // +0x14
    unsigned long long _adId; // +0x18
    FinderLiveShopWindowAdItem_AdPage * _adPage; // +0x20
    NSString * _title; // +0x28
    NSString * _imgUrl; // +0x30
    NSString * _desc; // +0x38
    NSString * _buttonText; // +0x40
    NSString * _platformName; // +0x48
    NSString * _uxInfo; // +0x50
    FinderLiveShopWindowAdItem_Condition * _condition; // +0x58
    unsigned long long _partnerAdId; // +0x60
}
- (id)initWithPBItem:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyFromPBItem:(id)arg1;
- (unsigned long long)adId;
- (void)setAdId:(unsigned long long)arg1;
- (id)adPage;
- (void)setAdPage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)buttonText;
- (void)setButtonText:(id)arg1;
- (id)platformName;
- (void)setPlatformName:(id)arg1;
- (BOOL)isPromoting;
- (void)setIsPromoting:(BOOL)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (id)condition;
- (void)setCondition:(id)arg1;
- (unsigned int)resourceType;
- (void)setResourceType:(unsigned int)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
- (unsigned long long)partnerAdId;
- (void)setPartnerAdId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

