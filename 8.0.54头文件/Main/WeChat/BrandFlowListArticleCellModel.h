@interface BrandFlowListArticleCellModel : BrandFlowListBaseCellModel
{
    unsigned int _itemShowType; // +0x8
    unsigned int _sceneToAppendUrl; // +0xc
    unsigned int _subSceneToAppendUrl; // +0x10
    unsigned int _bizUin; // +0x14
    unsigned int _mid; // +0x18
    unsigned int _idx; // +0x1c
    NSString * _url; // +0x20
    NSString * _title; // +0x28
}
+ (id)convertFromReaderWrap:(id)arg1;
- (id)getArticleUrl;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned int)sceneToAppendUrl;
- (void)setSceneToAppendUrl:(unsigned int)arg1;
- (unsigned int)subSceneToAppendUrl;
- (void)setSubSceneToAppendUrl:(unsigned int)arg1;
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (unsigned int)mid;
- (void)setMid:(unsigned int)arg1;
- (unsigned int)idx;
- (void)setIdx:(unsigned int)arg1;
- (void).cxx_destruct;
@end

