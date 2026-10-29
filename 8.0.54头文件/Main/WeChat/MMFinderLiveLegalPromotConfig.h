@interface MMFinderLiveLegalPromotConfig : NSObject
{
    BOOL _needShowLegalPromot; // +0x8
    unsigned int _legalType; // +0xc
    unsigned int _version; // +0x10
    NSString * _dynamicConfigKey; // +0x18
    NSString * _legalTitle; // +0x20
    NSString * _legalUrl; // +0x28
}
- (id)initWithDynamicConfigKey:(id)arg1;
- (void)updateWithDynamicConfigKey:(id)arg1;
- (void)markAsRead;
- (BOOL)isValid;
- (id)dynamicConfigKey;
- (void)setDynamicConfigKey:(id)arg1;
- (unsigned int)legalType;
- (void)setLegalType:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)legalTitle;
- (void)setLegalTitle:(id)arg1;
- (id)legalUrl;
- (void)setLegalUrl:(id)arg1;
- (BOOL)needShowLegalPromot;
- (void)setNeedShowLegalPromot:(BOOL)arg1;
- (void).cxx_destruct;
@end

