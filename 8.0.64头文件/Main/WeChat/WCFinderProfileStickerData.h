@interface WCFinderProfileStickerData : NSObject
{
    unsigned int _designerUin; // +0x8
    EmoticonFinderDesignerContentLogic * _contentLogic; // +0x10
    FinderHomePageSection_FinderEmotionSection * _pbData; // +0x18
    EmoticonFinderDesignerDataCenter * _homePageDataCenter; // +0x20
}
- (id)contentLogic;
- (void)setContentLogic:(id)arg1;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (id)pbData;
- (void)setPbData:(id)arg1;
- (id)homePageDataCenter;
- (void)setHomePageDataCenter:(id)arg1;
- (void).cxx_destruct;
@end
