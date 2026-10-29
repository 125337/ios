@interface WCRedEnvelopesReceiveHomeTemplateItem : NSObject
{
    BOOL _isTempSkin; // +0x8
    unsigned int _skinLocalId; // +0xc
    int _pagType; // +0x10
    NSString * _corpName; // +0x18
    NSString * _skinUrl; // +0x20
    NSString * _skinImageMd5; // +0x28
    NSString * _skinWidgetUrl; // +0x30
    NSString * _skinWidgetMd5; // +0x38
    NSString * _skinPagUrl; // +0x40
    NSString * _skinPagMd5; // +0x48
    NSString * _atmospherePagUrl; // +0x50
}
- (id)corpName;
- (void)setCorpName:(id)arg1;
- (id)skinUrl;
- (void)setSkinUrl:(id)arg1;
- (unsigned int)skinLocalId;
- (void)setSkinLocalId:(unsigned int)arg1;
- (id)skinImageMd5;
- (void)setSkinImageMd5:(id)arg1;
- (BOOL)isTempSkin;
- (void)setIsTempSkin:(BOOL)arg1;
- (id)skinWidgetUrl;
- (void)setSkinWidgetUrl:(id)arg1;
- (id)skinWidgetMd5;
- (void)setSkinWidgetMd5:(id)arg1;
- (id)skinPagUrl;
- (void)setSkinPagUrl:(id)arg1;
- (id)skinPagMd5;
- (void)setSkinPagMd5:(id)arg1;
- (int)pagType;
- (void)setPagType:(int)arg1;
- (id)atmospherePagUrl;
- (void)setAtmospherePagUrl:(id)arg1;
- (void).cxx_destruct;
@end

